#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "auth_window.h"
#include "reg_window.h"
#include "note.h"
#include <QDebug>
#include <QWidget>
#include <QLayout>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDesktopWidget>


MainWindow::MainWindow(QWidget *parent) :               //реализация конструктора главного окна
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    ui_Auth(nullptr),
    ui_Reg(nullptr),
    ui_Note(nullptr) //список инициализации

{
    ui->setupUi(this);                                  //установка интерфейса главного окна

    lineEdits = QList<QLineEdit*>()
            << ui->lineEdit
            << ui->lineEdit2
            << ui->lineEdit3
            << ui->lineEdit4
            << ui->lineEdit5
            << ui->lineEdit6
            << ui->lineEdit7
            << ui->lineEdit8
            << ui->lineEdit9
            << ui->lineEdit10;

    checkBoxes = QList<QCheckBox*>()
            << ui->checkBox
            << ui->checkBox2
            << ui->checkBox3
            << ui->checkBox4
            << ui->checkBox5
            << ui->checkBox6
            << ui->checkBox7
            << ui->checkBox8
            << ui->checkBox9
            << ui->checkBox10;

    labels = QList<QLabel*>()
            << ui->label
            << ui->label2
            << ui->label3
            << ui->label4
            << ui->label5
            << ui->label6
            << ui->label7
            << ui->label8
            << ui->label9
            << ui->label10;


    user_id = 0;
    changed = false;
    m_loginSuccesfull = false;

    ui_Reg = new reg_window();
    ui_Auth = new auth_window();
    ui_Note = new Note();

    lastDateStr = ui->calendarWidget->selectedDate().toString("dd-MM-yyyy");

    connect(ui_Reg, &reg_window::register_button_clicked2, //соединение кнопки регистрации экземпляра окна авторизации
            this,&MainWindow::registerUser);               //со слотом-обработчиком регистраци
    connect(ui_Reg,&reg_window::destroyed,
            ui_Auth, &auth_window::show);

    connect(ui_Auth, &auth_window::login_button_clicked,   //соединение сигнала кнопки авторизации экземпляра окна авторизации
            this, &MainWindow::authorizeUser);               //со слотом-обработчиком авторизации
    connect(ui_Auth, &auth_window::destroyed,               //соединение сигнала уничтожения экземпляра окна авторизации
            this, &MainWindow::show);                        //с методом отображения главного окна
    connect(ui_Auth, &auth_window::register_button_clicked, //соединение сигнала кнопки регистрации экземпляра окна авторизации
            this,&MainWindow::registerWindowShow);           //со слотом вызывающим окно регистрации

    // Чекбоксы
    connect(ui->checkBox,   &QCheckBox::clicked , this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox2,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox3,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox4,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox5,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox6,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox7,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox8,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox9,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);
    connect(ui->checkBox10,  &QCheckBox::clicked, this, &MainWindow::on_checkBoxes_clicked);

}

void MainWindow::authorizeUser()
{
   username          = ui_Auth->getLogin();
   userpass          = ui_Auth->getPass();

   queryStr = "SELECT * "
              "FROM users2 "
              "WHERE name = '%1'";
   QString uname       = "";
   QString upass       = "";
   int xPos            = 0;
   int yPos            = 0;
   int width1           = 0;
   int length          = 0;

    QStringList tables = db.tables();
    qDebug() << "table " << tables << db.isValid() << db.isOpen();
    queryStr = queryStr.arg(username);

    QSqlQuery query(queryStr, db);
    if(!query.exec())
    {
        qDebug() << "Unable to execute query - exiting" << query.lastError() << " : " << query.lastQuery();
        QMessageBox::critical(this, tr("Error"),tr("Error to get user info from table users in database %1. %2!")
                              .arg(dbName)
                              .arg(db.lastError().text()));
        ::exit(EXIT_FAILURE);
    }


    bool nameExists = query.next();
    qDebug() << query.lastError() << nameExists;
    if(!nameExists)
    {
        m_loginSuccesfull = false;
        qDebug() << "User doesn't exists" << queryStr << query.lastError() << query.lastQuery() << db.databaseName() << query.isSelect();
        ui_Auth->setErrorMessage("Такого пользователя не существует");
        return;
    }

    user_id   = query.value("user_id").toInt();
    uname    = query.value("name").toString();
    upass    = query.value("pass").toString();
    if(uname != username || upass != userpass)
    {
        //qDebug() << "Password missmatch" << uname << " " << username;
        //qDebug() << "Password missmatch" << upass << " " << userpass;
        m_loginSuccesfull = false;
        ui_Auth->setErrorMessage("Введенный пароль не правильный!");
    }
    else
  {
      m_loginSuccesfull = true;
      xPos    = query.value("xpos").toInt();
      yPos    = query.value("ypos").toInt();
      width1   = query.value("width").toInt();
      length  = query.value("length").toInt();
      username = uname;
      userpass = upass;
      on_calendarWidget_selectionChanged();
      ui_Auth->close();
      ui_Reg->close();
      this->setGeometry(xPos,yPos,width1, length);

      ui_Auth->hide();
      QDesktopWidget desktop;
      QRect rect = desktop.availableGeometry(this);
      QPoint center = rect.center();
      int x = center.x() - (width()/2);
      int y = center.y() - (height()/2);
      center.setX(x);
      center.setY(y);
      move(center);
      this->show();

      ui->progressBar->setAlignment(Qt::AlignCenter);
      ui->progressBar->setStyleSheet("QProgressBar{"
                                     "border: 1px solid transparent; text-align: center;"
                                     "color: rgba(120, 65, 81);"
                                     "border-radius: 20px;"
                                     "border-width: 2px;"
                                     "background-color: white;"
                                      "}"
                                     "QProgressBar::chunk {background-color: rgb(234, 6, 120); border-radius: 20px;}");
      ui->calendarWidget->setStyleSheet("QToolButton {"
                                        "height: 80px;"
                                        "width: 700px;"
                                        "color: white;"
                                        "font: italic 14pt \"Montserrat\";"
                                        "icon-size: 0px;"
                                        "background-color: rgb(120, 65, 81);"
                                        "}"
                                        "QAbstractItemView:enabled {"
                                        "font: italic 10pt \"Montserrat\";"
                                        "color: white;"
                                        "background-color: rgb(120, 65, 81);"
                                        "selection-background-color: rgba(255, 255, 255, 40);"
                                        "selection-color: white;"
                                        "alternate-background-color: rgb(120, 65, 81);"
                                        "}");
      ui->label_Name_2->setVisible(false);
      ui->label_8->setVisible(false);
      ui->label_9->setVisible(false);
      ui->label_10->setVisible(false);
      ui->label_11->setVisible(false);
      ui->btnAddNote_2->setVisible(false);
      ui->btnDeleteFromDB_2->setVisible(false);
      ui->btnSaveInDB_2->setVisible(false);
      qDebug() << "User authorization success";

      QDate date = ui->calendarWidget->selectedDate();
      QDate cur(date.year(), date.month(), 1);
      int curMonth = date.month();

      // Обнуляем формат
      while(cur.month() == curMonth)
      {
          QTextCharFormat format = ui->calendarWidget->dateTextFormat(cur);
          format.setForeground(QBrush(QColor(255, 255, 255), Qt::SolidPattern));
          ui->calendarWidget->setDateTextFormat(cur, format);
          cur = cur.addDays(1);
      }
      QSqlQuery query2(queryStr, db);
      while(query2.next())
      {
          int day = query2.value("day").toInt();
          int cnt = query2.value("cnt").toInt();
          QString notedate = query2.value("notedate").toString();
          qDebug() << "day " << day << " cnt " << cnt;
          QDate date = QDate::fromString(notedate, "yyyy-MM-dd");
          QTextCharFormat format = ui->calendarWidget->dateTextFormat(date);
          format.setForeground(QBrush(QColor(234, 6, 120), Qt::NoBrush));
          ui->calendarWidget->setDateTextFormat(date, format);
      }
  }
}

void MainWindow::registerWindowShow()
{
    ui_Auth->hide();
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(ui_Reg);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
    ui_Reg->show();
}



void MainWindow::registerUser()
{
    QSqlQuery query(db);
    QString name = ui_Reg->getName();
    QString pass = ui_Reg->getPass();

    queryStr = QString(
                "SELECT * "
                "FROM users2 "
                "WHERE name = '%1';")
            .arg(name);
    if(!query.exec(queryStr))
    {
        qDebug() << "Unable to get number " << query.lastError() << " : " << query.lastQuery();
        ui_Reg->setErrorText(tr("Произошла ошибка при регистрации пользователя %1. Попробуйте позже.").arg(name));
        return;
    }

    // Если пользователь уже существует
    if(query.size() > 0)
    {
        qDebug() << "User already exists";
        ui_Reg->setErrorText(tr("Пользователь %1 уже существует. Выберите другое имя пользователя или войти в свою учетную запись.").arg(name));
        return;
    }

    // Добавляем нового пользователя в БД
    username          = ui_Reg->getName();
    userpass          = ui_Reg->getPass();

    queryStr =  QString(
                "INSERT INTO users2(name, pass, xpos, ypos, width, length) "
                "VALUES('%1', '%2', %3, %4, %5, %6);")
                .arg(username)
                .arg(userpass)
                .arg(0)
                .arg(0)
                .arg(800)
                .arg(400);

    if(!query.exec(queryStr))
    {
        qDebug() << "Unable to insert user on reg "  << query.lastError() << " : " << query.lastQuery();
        ui_Reg->setErrorText(tr("Произошла ошибка при регистрации пользователя %1. Попробуйте позже.").arg(name));
        return;
    }
    else
    {
        ui_Reg->hide();

        ui_Auth->hide();
        QDesktopWidget desktop;
        QRect rect = desktop.availableGeometry(ui_Auth);
        QPoint center = rect.center();
        int x = center.x() - (width()/2);
        int y = center.y() - (height()/2);
        center.setX(x);
        center.setY(y);
        move(center);

        ui_Auth->show();
        //QMessageBox::information(this, "Регистрация завершена успешно!", "Регистрация завершена успешно. Теперь Вы можете войти в свою учетную запись!");
    }
}


void MainWindow::display()                                                              //реализация пользотвальского метода отображения главного окна
{
    this->hide();
    ui_Auth->hide();
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(ui_Auth);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    ui_Auth->show();//отобразить окно авторизации(НЕ главное окно)
}


MainWindow::~MainWindow()                                                               //реализация деструктора
{
   if(m_loginSuccesfull)
    {
        QString str_t       =   "UPDATE users2 "
                                "SET xpos = %2, ypos = %3, width = %4, length = %5 "
                                "WHERE name = '%1';";
        queryStr            = str_t .arg(username)
                                    .arg(this->x())
                                    .arg(this->y())
                                    .arg(this->width())
                                    .arg(this->height());
        QSqlQuery query;
        if(!query.exec(queryStr))
        {
            qDebug() << "Unable to update data on exit "  << query.lastError() << " : " << query.lastQuery() ;
        }
    }
    qDebug() << "MainWindow Destroyed";
    delete ui;                                                                     //удалить указатель на экземпляр главного окна
    //exit(0);                                                                       //завершить приложение
}

void MainWindow::connectDB()
{
    dbName = "db";
    db = QSqlDatabase::addDatabase("QSQLITE", dbName);
    qDebug() << "db is valid " << db.isValid();
    db.setDatabaseName(qApp->applicationDirPath() + "/" + dbName + ".db");
    bool opened =  db.open();

    if(!opened)
        qDebug() << "Failed to connect DB";

    // Создание таблиц базы данных
    // Сначала проверям, существует ли таблица.
    // Если не существует, то создаем заново

    QStringList tables = db.tables();
    QSqlQuery query(db);

    if(!tables.contains("users2"))
    {
        queryStr = "CREATE TABLE users2 ( "
                   "user_id INTEGER,"
                   "name TEXT NOT NULL, "
                   "pass TEXT NOT NULL, "
                   "xpos INTEGER, "
                   "ypos INTEGER, "
                   "width INTEGER, "
                   "length INTEGER, "
                   "PRIMARY KEY (user_id));";
         if(!query.exec(queryStr))
            qDebug() << "Unable to create a table" << query.lastError() << queryStr;
    }

    if(!tables.contains("notes"))
    {
        queryStr = "CREATE TABLE notes ( "
                   "note_id INTEGER,"
                   "note_num INTEGER NOT NULL,"
                   "user_id INTEGER NOT NULL,"
                   "notedate DATETIME NOT NULL, "
                   "note TEXT NOT NULL, "
                   "done INTEGER NOT NULL,"
                   "progres INTEGER,"
                   "real_progres INTEGER,"
                   "PRIMARY KEY (note_id),"
                   "UNIQUE(user_id, notedate, note_num));";
         if(!query.exec(queryStr))
            qDebug() << "Unable to create a table" << query.lastError() << queryStr;
    }
}

void MainWindow::clearLine(int line)
{
    if(line < 1 || line > 10)   return;
    lineEdits.at(line-1)->setStyleSheet("");
    lineEdits.at(line-1)->setText("");
    labels.at(line-1)->setVisible(true);
    checkBoxes.at(line-1)->setChecked(false);
    ui->progressBar->setValue(0);
    ui->progressBar->repaint();
    return;
}

void MainWindow::on_checkBoxes_clicked()
{
    QCheckBox *checkBox = qobject_cast<QCheckBox*>(sender());
    if(!checkBox) return;

    int index = checkBoxes.indexOf(checkBox);
    if(index == -1) return;

    if (checkBox->isChecked())
    {
        lineEdits.at(index)->setStyleSheet("QLineEdit {color: rgb(160, 160, 160); background-color: rgba(255, 255, 255, 0); text-decoration: line-through; font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: rgb(160, 160, 160); border-bottom-width: 1px;}");
        real_progres += 100;
        double i = real_progres/(number_click - 1);
        ui->progressBar->setValue((int)i);
        ui->progressBar->repaint();
    }
    else
    {
        if (status_theme == 1)
            lineEdits.at(index)->setStyleSheet("QLineEdit {color: rgb(120, 65, 81); background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: rgb(120, 65, 81); border-bottom-width: 1px;}");
        else
            lineEdits.at(index)->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
        real_progres -= 100;
        double i = real_progres/(number_click - 1);
        ui->progressBar->setValue((int)i);
        ui->progressBar->repaint();
    }
    changed = true;
}



void MainWindow::on_btnAddNote_clicked()
{
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);

    ui->label_3->clear();
    if(number_click < 11)
    {
        if (status_theme == 1)
            lineEdits.at(number_click-1)->setStyleSheet("QLineEdit {color: rgb(120, 65, 81); background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: rgb(120, 65, 81); border-bottom-width: 1px;}");
        else
            lineEdits.at(number_click-1)->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
        labels.at(number_click-1)->setVisible(false);
        number_click++;
       // if (number_click == 11)
       //    return;
        progres++;
    }
    double i = real_progres/(progres);
    ui->progressBar->setValue((int)i);
    ui->progressBar->repaint();
    changed = true;
    return;
}

void MainWindow::on_btnSaveInDB_clicked()
{
    QDate date = ui->calendarWidget->selectedDate();
    QString dateStr = date.toString("yyyy-MM-dd");
    qDebug() << "date " << dateStr;
    bool success = true;

    qDebug() << "sender " << sender();
    if(sender() == ui->calendarWidget)
        dateStr = lastDateStr;

    // Добавляем или обновляем заметки
    for(int i = 1; i < number_click; i++)
    {
        queryStr = QString(
                    "INSERT OR REPLACE INTO notes (user_id, note_num, notedate, note, done) "
                    "VALUES (%1, %2, '%3', '%4', %5)"
                    )
                .arg(user_id)
                .arg(i)
                .arg(dateStr)
                .arg(lineEdits.at(i-1)->text())
                .arg(checkBoxes.at(i-1)->isChecked() ? 1 : 0)
                ;

        QSqlQuery query(queryStr, db);
        if(!query.exec())
        {
            qDebug() << "Error to save notes " << query.lastError() << " query " << queryStr;
            success = false;
        }
    }


    // Удаляем лишние заметки
    for(int i = number_click; i <= 11; i++)
    {
        queryStr = QString(
                    "DELETE FROM notes "
                    "WHERE notedate = '%1' "
                    "  AND user_id = %2 "
                    "  AND note_num = %3;")
                .arg(dateStr)
                .arg(user_id)
                .arg(i)
                ;

        QSqlQuery query(queryStr, db);
        if(!query.exec())
        {
            qDebug() << "Error to delete notes " << query.lastError() << " query " << queryStr;
            success = false;
        }
    }

    if(success)
    {
        if (status_theme==0)
            ui->label_3->setStyleSheet("QLabel {color: white; background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
        else
            ui->label_3->setStyleSheet("QLabel {color: rgb(120, 65, 81); background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");

        ui->label_3->setText(tr("Записи успешно сохранены"));
        changed = false;
    }
    else
        ui->label_3->setText(tr("Произошла ошибка при сохранении записей в базе данных"));

}



void MainWindow::on_btnDeleteFromDB_clicked()
{
    QDate date = ui->calendarWidget->selectedDate();
    QString dateStr = date.toString("yyyy-MM-dd");
    qDebug() << "date " << dateStr;

    // Удаляем все записи за текущую дату
    queryStr = QString(
                "DELETE FROM notes "
                "WHERE notedate = '%1' "
                "  AND user_id = %2;")
            .arg(dateStr)
            .arg(user_id)
            ;

    QSqlQuery query(queryStr, db);
    if(!query.exec())
    {
        ui->label_3->setText(tr("Произошла ошибка при удалении записей из базы данных"));
        return;
    }

    for(int i = 1; i < 11; i++)
    {
        clearLine(i);
    }
    number_click = 1;
    progres = 0;
    real_progres = 0;
    changed = false;
    ui->label_3->setText(tr("Записи успешно удалены"));
}

void MainWindow::on_calendarWidget_selectionChanged()
{
    ui->label_3->clear();
    QDate date = ui->calendarWidget->selectedDate();
    QString dateStr = date.toString("yyyy-MM-dd");
    qDebug() << "date " << dateStr;

    for(int i = 1; i < 11; i++)
    {
        clearLine(i);
    }
    number_click = 1;
    progres = 0;
    real_progres = 0;

    queryStr = QString(
                "SELECT * FROM notes "
                "WHERE notedate = '%1' "
                "  AND user_id = %2 "
                "  ORDER BY note_num ASC;")
            .arg(dateStr)
            .arg(user_id)
            ;

    QSqlQuery query(queryStr, db);
    if(!query.exec())
    {
        qDebug() << "Error to select notes " << query.lastError() << " query " << queryStr;
        return;
    }

    qDebug() << "query " << queryStr;

    int line = 0;
    while(query.next())
    {
        qDebug() << "note " << line+1;
        on_btnAddNote_clicked();
        QString text = query.value("note").toString();
        lineEdits.at(line)->setText(text);
        bool done = query.value("done").toBool();
        if(done)
            checkBoxes.at(line)->click();

        line++;
    }

    QString dateStr2 = date.toString("MM");
    qDebug() << "date " << dateStr2;

    queryStr = QString(
                "SELECT strftime('%d', notedate) AS day, COUNT(*) AS cnt, notedate "
                "FROM notes "
                "WHERE strftime('%m', notedate) = '%1' "
                " AND  user_id = %2 "
                "GROUP BY strftime('%d', notedate)")
            .arg(dateStr2)
            .arg(user_id)
            ;

    QSqlQuery query2(queryStr, db);
    if(!query2.exec())
    {
        qDebug() << "Error to select notes " << query2.lastError() << " query " << queryStr;
        return;
    }
    QDate cur(date.year(), date.month(), 1);
    int curMonth = date.month();

    // Обнуляем формат
    if (status_theme == 0)
    {
        while(cur.month() == curMonth)
        {
            QTextCharFormat format = ui->calendarWidget->dateTextFormat(cur);
            format.setForeground(QBrush(QColor(255, 255, 255), Qt::SolidPattern));
            ui->calendarWidget->setDateTextFormat(cur, format);
            cur = cur.addDays(1);
        }
    }
    else
    {
        while(cur.month() == curMonth)
        {
            QTextCharFormat format = ui->calendarWidget->dateTextFormat(cur);
            format.setForeground(QBrush(QColor(120, 65, 81), Qt::SolidPattern));
            ui->calendarWidget->setDateTextFormat(cur, format);
            cur = cur.addDays(1);
        }
    }
    // Устнаваливаем формат для дат, где есть записи
    while(query2.next())
    {
        int day = query2.value("day").toInt();
        int cnt = query2.value("cnt").toInt();
        QString notedate = query2.value("notedate").toString();
        qDebug() << "day " << day << " cnt " << cnt;
        QDate date = QDate::fromString(notedate, "yyyy-MM-dd");
        QTextCharFormat format = ui->calendarWidget->dateTextFormat(date);
        format.setForeground(QBrush(QColor(234, 6, 120), Qt::NoBrush));
        ui->calendarWidget->setDateTextFormat(date, format);
    }
    changed = false;
    lastDateStr = dateStr;
}

void MainWindow::on_themeButton_clicked()
{
    if (status_theme == 0)
    {
        MainWindow::setStyleSheet("QMainWindow {background-color: rgb(234, 204,215)}");
        ui->themeButton->setText("Темная тема");
        ui->themeButton->setStyleSheet("QPushButton {background-color: rgba(255, 255, 255, 0);border-width: 1.5px; color: rgb(120, 65, 81); font:  italic 10pt \"Montserrat\"; border-style: solid; border-color: rgb(120, 65, 81); border-radius: 15px;}");
        ui->progressBar->setStyleSheet("QProgressBar{"
                                       "border: 1px solid transparent; text-align: center;"
                                       "color: rgb(120, 65, 81);"
                                       "border-radius: 20px;"
                                       "border-width: 2px;"
                                       "background-color: white;"
                                        "}"
                                       "QProgressBar::chunk {background-color: rgba(234, 6, 120); border-radius: 20px;}");
        ui->calendarWidget->setStyleSheet("QToolButton {"
                                          "height: 80px;"
                                          "width: 700px;"
                                          "color: rgb(120, 65, 81);"
                                          "font: italic 14pt \"Montserrat\";"
                                          "icon-size: 0px;"
                                          "background-color: rgb(234, 204,215);"
                                          "}"
                                          "QAbstractItemView:enabled {"
                                          "font: italic 10pt \"Montserrat\";"
                                          "color: rgb(120, 65, 81);"
                                          "background-color: rgb(234, 204,215);"
                                          "selection-background-color: rgba(255, 255, 255, 40);"
                                          "selection-color: rgb(120, 65, 81);"
                                          "alternate-background-color: rgb(234, 204,215);"
                                          "}");
        for (int i = 0; i < 10; i++)
        {
            labels.at(i)->setStyleSheet("QLabel {background-color: rgb(234, 204,215)}");
        }
        ui->label_Name->setVisible(false);
        ui->label_Name_2->setVisible(true);
        ui->label_2->setVisible(false);
        ui->label_8->setVisible(true);
        ui->label_7->setVisible(false);
        ui->label_9->setVisible(true);
        ui->label_5->setVisible(false);
        ui->label_10->setVisible(true);
        ui->label_6->setVisible(false);
        ui->label_11->setVisible(true);
        ui->btnAddNote->setVisible(false);
        ui->btnDeleteFromDB->setVisible(false);
        ui->btnSaveInDB->setVisible(false);
        ui->btnAddNote_2->setVisible(true);
        ui->btnDeleteFromDB_2->setVisible(true);
        ui->btnSaveInDB_2->setVisible(true);
        status_theme = 1;
    }
    else
    {
        MainWindow::setStyleSheet("QMainWindow {background-color: rgb(120, 65, 81)}");
        ui->themeButton->setText("Светлая тема");
        ui->themeButton->setStyleSheet("QPushButton {background-color: rgba(255, 255, 255, 0);border-width: 1.5px; color: white; font:  italic 10pt \"Montserrat\"; border-style: solid; border-color: white; border-radius: 15px;}");
        ui->progressBar->setStyleSheet("QProgressBar{"
                                       "border: 1px solid transparent; text-align: center;"
                                       "color: rgb(120, 65, 81);"
                                       "border-radius: 20px;"
                                       "border-width: 2px;"
                                       "background-color: white;"
                                        "}"
                                       "QProgressBar::chunk {background-color: rgb(234, 6, 120); border-radius: 20px;}");
        ui->calendarWidget->setStyleSheet("QToolButton {"
                                          "height: 80px;"
                                          "width: 700px;"
                                          "color: white;"
                                          "font: italic 14pt \"Montserrat\";"
                                          "icon-size: 0px;"
                                          "background-color: rgb(120, 65, 81);"
                                          "}"
                                          "QAbstractItemView:enabled {"
                                          "font: italic 10pt \"Montserrat\";"
                                          "color: white;"
                                          "background-color: rgb(120, 65, 81);"
                                          "selection-background-color: rgba(255, 255, 255, 40);"
                                          "selection-color: white;"
                                          "alternate-background-color: rgb(120, 65, 81);"
                                          "}");
        for (int i = 0; i < 10; i++)
        {
            labels.at(i)->setStyleSheet("QLabel {background-color: rgb(120, 65, 81)}");
        }
        ui->label_Name->setVisible(true);
        ui->label_Name_2->setVisible(false);
        ui->label_2->setVisible(true);
        ui->label_8->setVisible(false);
        ui->label_7->setVisible(true);
        ui->label_9->setVisible(false);
        ui->label_5->setVisible(true);
        ui->label_10->setVisible(false);
        ui->label_6->setVisible(true);
        ui->label_11->setVisible(false);
        ui->btnAddNote->setVisible(true);
        ui->btnDeleteFromDB->setVisible(true);
        ui->btnSaveInDB->setVisible(true);
        ui->btnAddNote_2->setVisible(false);
        ui->btnDeleteFromDB_2->setVisible(false);
        ui->btnSaveInDB_2->setVisible(false);
        status_theme = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        if (status_theme == 1)
            lineEdits.at(i)->setStyleSheet("QLineEdit {color: rgb(120, 65, 81); background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: rgb(120, 65, 81); border-bottom-width: 1px;}");
        else
            lineEdits.at(i)->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
    }
    on_calendarWidget_selectionChanged();
}

void MainWindow::on_btnSaveInDB_2_clicked()
{
    on_btnSaveInDB_clicked();
    ui->label_3->setText(tr("Записи успешно сохранены"));
    return;
}

void MainWindow::on_btnAddNote_2_clicked()
{
    ui->label_3->clear();

    on_btnAddNote_clicked();

    return;
}

void MainWindow::on_btnDeleteFromDB_2_clicked()
{
    ui->label_3->setText(tr("Записи успешно удалены"));
    on_btnDeleteFromDB_clicked();
    return;
}

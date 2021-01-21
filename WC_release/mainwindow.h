#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include "auth_window.h"
#include "reg_window.h"
#include "note.h"
#include <QMainWindow>
#include <QString>
#include <QWidget>
#include <QSqlDatabase>
#include <QList>
#include <QLineEdit>
#include <QCheckBox>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();
    void display();     //прототип функции отображения
    void connectDB();

private:
    Ui::MainWindow *ui;
    //Ui::MainWindow* mainLayout;
    auth_window *  ui_Auth;     //композит - экземпляр класса Auth_Window
    reg_window *   ui_Reg;
    Note    *      ui_Note;
    QString username;
    QString userpass;
    QString queryStr;
    QSqlDatabase db;
    QString lastDateStr;
    QString dbName; // имя базы данных (файла базы данных)
    int number_click = 1;
    int progres = 0;
    int real_progres = 0;
    int status_theme = 0;
    bool changed;

    int user_id;
    bool m_loginSuccesfull;

    QList<QLineEdit *> lineEdits;
    QList<QCheckBox *> checkBoxes;
    QList<QLabel *> labels;

    void clearLine(int line);
private slots:
    void authorizeUser();
    void registerWindowShow();
    void registerUser();
    //void on_pushButton_clicked();



    void on_checkBoxes_clicked();
    void on_btnAddNote_clicked();
    void on_btnSaveInDB_clicked();
    void on_btnDeleteFromDB_clicked();
    void on_calendarWidget_selectionChanged();
    void on_themeButton_clicked();
    void on_btnSaveInDB_2_clicked();
    void on_btnAddNote_2_clicked();
    void on_btnDeleteFromDB_2_clicked();
};

#endif // MAINWINDOW_H

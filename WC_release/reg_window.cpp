#include "reg_window.h"
#include "ui_reg_window.h"
#include <QtDebug>

reg_window::reg_window(QWidget *parent) :                               //реализация конструктора окна регистрации
    QDialog(parent),                                                    //список инициализации
    ui(new Ui::reg_window)
{
    ui->setupUi(this);
    ui->registerPushButton->setText("Регистрация");
    ui->registerPushButton->setStyleSheet("QPushButton {color: rgb(120, 65, 81); background-color: white; border-width: 1px; font: italic 12pt \"Montserrat\"; border-color: white; border-radius: 45px;}");
    ui->registerPushButton->setFixedHeight(90);
    ui->registerPushButton->setFixedWidth(230);
    ui->nameLineEdit->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
    ui->passwordLineEdit->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
    ui->confirmLineEdit->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
    ui->label_Name->setStyleSheet("QLabel {color: white; background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
    ui->label_Pass->setStyleSheet("QLabel {color: white; background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
    ui->label_Confirm->setStyleSheet("QLabel {color: white; background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
    ui->label_Error->setStyleSheet("QLabel {color: rgb(234, 6, 120); background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
}

reg_window::~reg_window()                                               //реализация деструктора
{
    delete ui;                                                          //удалить указатель на экземпляр окна регистрации
}

void reg_window::on_registerPushButton_clicked()                        //реализация слота нажатия кнопки регистрации
{
    // Проверяем, что имя пользователя и пароль введены
    if(ui->nameLineEdit->text().isEmpty())
    {
        ui->nameLineEdit->setFocus(Qt::OtherFocusReason);               //Установка фокуса в сторку ввода логина
        ui->label_Error->setText(tr("Введите имя пользователя"));
        return;
    }
    if(ui->passwordLineEdit->text().isEmpty())
    {
        ui->passwordLineEdit->setFocus(Qt::OtherFocusReason);           //Установка фокуса в сторку ввода пароля
        ui->label_Error->setText(tr("Введите пароль"));
        return;
    }
    //Проверяем, что пароли совпадают
    if(!checkPass())
    {
        ui->passwordLineEdit->setFocus(Qt::OtherFocusReason);
        ui->label_Error->setText(tr("Пароли не совпадают"));
        return;
    }
    emit register_button_clicked2();
}

void reg_window::on_nameLineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userName = arg1;
}

void reg_window::on_passwordLineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userPass = arg1;
}

void reg_window::on_confirmLineEdit_textEdited(const QString &arg1)
{
    reg_window::m_confirmation = arg1;
}

QString reg_window::getName()
{
    return m_userName;
}

QString reg_window::getPass()
{
    return m_userPass;
}

bool reg_window::checkPass()
{
    return (m_confirmation == m_userPass);
}

void reg_window::setErrorText(QString msg)
{
    ui->label_Error->setText(msg);
}


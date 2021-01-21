#include "auth_window.h"
#include "ui_auth_window.h"

auth_window::auth_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auth_window)
{
    ui->setupUi(this);
    ui->loginPushButton->setFixedHeight(90);
    ui->loginPushButton->setFixedWidth(230);
    ui->loginPushButton->setStyleSheet("QPushButton {color: rgb(120, 65, 81); background-color: white; border-width: 1px; font: italic 12pt \"Montserrat\"; border-color: white; border-radius: 45px;}");
    ui->registerPushButton_2->setText("Регистрация");
    ui->registerPushButton_2->setStyleSheet("QPushButton {color: white; background-color: rgba(255, 255, 255, 0); border-width: 1px; font: italic 12pt \"Montserrat\"; border-style: solid;  border-color: white; border-radius: 45px;}");
    ui->registerPushButton_2->setFixedHeight(90);
    ui->registerPushButton_2->setFixedWidth(230);
    ui->nameLineEdit->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
    ui->passwordLineEdit->setStyleSheet("QLineEdit {color: white; background-color: rgba(255, 255, 255, 0); font: italic 12pt \"Montserrat\"; border-top-width: 0px;  border-style: solid; border-color: white; border-bottom-width: 1px;}");
    ui->label_Name_2->setStyleSheet("QLabel {color: white; background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
    ui->label_Name_3->setStyleSheet("QLabel {color: white; background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
    ui->label_Error->setStyleSheet("QLabel {color: rgb(234, 6, 120); background-color: rgba(255, 255, 255, 0); font: italic 8pt \"Montserrat\";}");
}

auth_window::~auth_window()
{
    delete ui;
}

void auth_window::on_loginPushButton_clicked()
{
    // Проверяем, что имя пользователя и пароль введены
    if(ui->nameLineEdit->text().isEmpty())
    {
        ui->nameLineEdit->setFocus(Qt::OtherFocusReason);
        ui->label_Error->setText(tr("Введите имя пользователя"));
        return;
    }
    if(ui->passwordLineEdit->text().isEmpty())
    {
        ui->passwordLineEdit->setFocus(Qt::OtherFocusReason);
        ui->label_Error->setText(tr("Введите пароль"));
        return;
    }
    m_username = ui->nameLineEdit->text();
    m_userpass = ui->passwordLineEdit->text();
    emit login_button_clicked();
}

void auth_window::on_registerPushButton_2_clicked()
{
    emit register_button_clicked();
}

QString auth_window::getLogin()
{
    return auth_window::m_username;
}

QString auth_window::getPass()
{
    return auth_window::m_userpass;
}

void auth_window::setErrorMessage(QString msg)
{
    ui->label_Error->setText(msg);
}

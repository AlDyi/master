/********************************************************************************
** Form generated from reading UI file 'auth_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_WINDOW_H
#define UI_AUTH_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_auth_window
{
public:
    QPushButton *registerPushButton_2;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label_Password;
    QLabel *label_Name;
    QPushButton *loginPushButton;
    QLabel *label_Name_2;
    QLabel *label_Name_3;
    QLabel *label_Error;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *auth_window)
    {
        if (auth_window->objectName().isEmpty())
            auth_window->setObjectName(QString::fromUtf8("auth_window"));
        auth_window->setWindowModality(Qt::NonModal);
        auth_window->setEnabled(true);
        auth_window->resize(1080, 700);
        auth_window->setMinimumSize(QSize(1080, 700));
        auth_window->setMaximumSize(QSize(1080, 700));
        auth_window->setWindowTitle(QString::fromUtf8("notes"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/images/\320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272-10.png"), QSize(), QIcon::Normal, QIcon::Off);
        auth_window->setWindowIcon(icon);
        auth_window->setLayoutDirection(Qt::LeftToRight);
        auth_window->setAutoFillBackground(false);
        auth_window->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);\n"
""));
        registerPushButton_2 = new QPushButton(auth_window);
        registerPushButton_2->setObjectName(QString::fromUtf8("registerPushButton_2"));
        registerPushButton_2->setGeometry(QRect(550, 470, 231, 91));
        registerPushButton_2->setAutoFillBackground(false);
        registerPushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-width: 1px;\n"
"font:  italic 12pt \"Montserrat\";\n"
"border-style: solid; \n"
"border-color: white;\n"
"border-radius: 45px;\n"
""));
        label = new QLabel(auth_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, -140, 1041, 621));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\277\320\270\321\201\320\260\320\275\320\270\320\275\320\2602-04.png")));
        label->setScaledContents(true);
        nameLineEdit = new QLineEdit(auth_window);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(450, 280, 221, 41));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: italic 12pt \"Montserrat\";\n"
"border-top-width: 0px; \n"
"border-style: solid; \n"
"border-color: white;\n"
"border-bottom-width: 1px;"));
        passwordLineEdit = new QLineEdit(auth_window);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(450, 350, 221, 41));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: italic 12pt \"Montserrat\";\n"
"border-top-width: 0px; \n"
"border-style: solid; \n"
"border-color: white;\n"
"border-bottom-width: 1px;"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        label_Password = new QLabel(auth_window);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setGeometry(QRect(390, 335, 71, 71));
        label_Password->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_Password->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\270\320\272\320\276\320\275\320\272\320\270_Log_pas2-02.png")));
        label_Password->setScaledContents(true);
        label_Name = new QLabel(auth_window);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(390, 265, 71, 71));
        label_Name->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_Name->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\270\320\272\320\276\320\275\320\272\320\270_Log_pas2-03.png")));
        label_Name->setScaledContents(true);
        loginPushButton = new QPushButton(auth_window);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(300, 470, 231, 91));
        loginPushButton->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"font: italic 12pt \"Montserrat\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: white;\n"
"border-radius: 45px;"));
        label_Name_2 = new QLabel(auth_window);
        label_Name_2->setObjectName(QString::fromUtf8("label_Name_2"));
        label_Name_2->setGeometry(QRect(460, 320, 181, 20));
        label_Name_2->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Montserrat\";\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_Name_2->setAlignment(Qt::AlignCenter);
        label_Name_3 = new QLabel(auth_window);
        label_Name_3->setObjectName(QString::fromUtf8("label_Name_3"));
        label_Name_3->setGeometry(QRect(460, 390, 181, 20));
        label_Name_3->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Montserrat\";\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_Name_3->setAlignment(Qt::AlignCenter);
        label_Error = new QLabel(auth_window);
        label_Error->setObjectName(QString::fromUtf8("label_Error"));
        label_Error->setGeometry(QRect(10, 440, 1061, 20));
        label_Error->setStyleSheet(QString::fromUtf8("color:red;"));
        label_Error->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(auth_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1080, 700));
        label_2->setMinimumSize(QSize(1080, 700));
        label_2->setMaximumSize(QSize(1080, 700));
        label_3 = new QLabel(auth_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 440, 371, 151));
        label_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\321\202\320\265\320\275\321\214-05.png")));
        label_3->setScaledContents(true);
        label_2->raise();
        label->raise();
        label_Password->raise();
        label_Name->raise();
        registerPushButton_2->raise();
        nameLineEdit->raise();
        passwordLineEdit->raise();
        label_Name_2->raise();
        label_Name_3->raise();
        label_Error->raise();
        label_3->raise();
        loginPushButton->raise();
        QWidget::setTabOrder(loginPushButton, registerPushButton_2);

        retranslateUi(auth_window);

        QMetaObject::connectSlotsByName(auth_window);
    } // setupUi

    void retranslateUi(QDialog *auth_window)
    {
        registerPushButton_2->setText(QCoreApplication::translate("auth_window", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QString());
        label_Name->setText(QString());
        loginPushButton->setText(QCoreApplication::translate("auth_window", "\320\222\321\205\320\276\320\264", nullptr));
        label_Name_2->setText(QCoreApplication::translate("auth_window", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_Name_3->setText(QCoreApplication::translate("auth_window", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_Error->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        (void)auth_window;
    } // retranslateUi

};

namespace Ui {
    class auth_window: public Ui_auth_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_WINDOW_H

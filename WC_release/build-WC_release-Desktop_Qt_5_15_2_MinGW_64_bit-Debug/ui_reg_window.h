/********************************************************************************
** Form generated from reading UI file 'reg_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_WINDOW_H
#define UI_REG_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_reg_window
{
public:
    QLabel *label_Name;
    QLabel *label_Pass;
    QLabel *label_Confirm;
    QLabel *label_Name_2;
    QLabel *label_Pass_2;
    QLabel *label_Confirm_2;
    QLabel *label;
    QLineEdit *passwordLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *confirmLineEdit;
    QPushButton *registerPushButton;
    QLabel *label_Error;
    QLabel *label_2;

    void setupUi(QDialog *reg_window)
    {
        if (reg_window->objectName().isEmpty())
            reg_window->setObjectName(QString::fromUtf8("reg_window"));
        reg_window->resize(1080, 700);
        reg_window->setMinimumSize(QSize(1080, 700));
        reg_window->setMaximumSize(QSize(1080, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/images/\320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272-10.png"), QSize(), QIcon::Normal, QIcon::Off);
        reg_window->setWindowIcon(icon);
        reg_window->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);\n"
""));
        label_Name = new QLabel(reg_window);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(470, 300, 181, 20));
        label_Name->setStyleSheet(QString::fromUtf8("font: italic 8pt \"Montserrat\";\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_Name->setAlignment(Qt::AlignCenter);
        label_Pass = new QLabel(reg_window);
        label_Pass->setObjectName(QString::fromUtf8("label_Pass"));
        label_Pass->setGeometry(QRect(460, 380, 201, 20));
        label_Pass->setStyleSheet(QString::fromUtf8("font: italic 8pt \"Montserrat\";\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_Pass->setAlignment(Qt::AlignCenter);
        label_Confirm = new QLabel(reg_window);
        label_Confirm->setObjectName(QString::fromUtf8("label_Confirm"));
        label_Confirm->setGeometry(QRect(470, 460, 181, 20));
        label_Confirm->setStyleSheet(QString::fromUtf8("font: italic 8pt \"Montserrat\";\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_Confirm->setAlignment(Qt::AlignCenter);
        label_Name_2 = new QLabel(reg_window);
        label_Name_2->setObjectName(QString::fromUtf8("label_Name_2"));
        label_Name_2->setGeometry(QRect(390, 245, 71, 71));
        label_Name_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_Name_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\270\320\272\320\276\320\275\320\272\320\270_Log_pas2-03.png")));
        label_Name_2->setScaledContents(true);
        label_Pass_2 = new QLabel(reg_window);
        label_Pass_2->setObjectName(QString::fromUtf8("label_Pass_2"));
        label_Pass_2->setGeometry(QRect(390, 325, 71, 71));
        label_Pass_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_Pass_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\270\320\272\320\276\320\275\320\272\320\270_Log_pas2-02.png")));
        label_Pass_2->setScaledContents(true);
        label_Confirm_2 = new QLabel(reg_window);
        label_Confirm_2->setObjectName(QString::fromUtf8("label_Confirm_2"));
        label_Confirm_2->setGeometry(QRect(390, 410, 71, 71));
        label_Confirm_2->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Montserrat\";\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_Confirm_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\277\320\276\320\262\321\202\320\276\321\200-09.png")));
        label_Confirm_2->setScaledContents(true);
        label_Confirm_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Confirm_2->setWordWrap(false);
        label = new QLabel(reg_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, -140, 1041, 621));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\277\320\270\321\201\320\260\320\275\320\270\320\275\320\2602-04.png")));
        label->setScaledContents(true);
        passwordLineEdit = new QLineEdit(reg_window);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(450, 340, 221, 41));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border-top-width: 0px; \n"
"border-style: solid; \n"
"border-color: white;\n"
"border-bottom-width: 1px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        nameLineEdit = new QLineEdit(reg_window);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(450, 260, 221, 41));
        nameLineEdit->setStyleSheet(QString::fromUtf8("border-top-width: 0px; \n"
"border-style: solid; \n"
"border-color: white;\n"
"border-bottom-width: 1px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        confirmLineEdit = new QLineEdit(reg_window);
        confirmLineEdit->setObjectName(QString::fromUtf8("confirmLineEdit"));
        confirmLineEdit->setGeometry(QRect(450, 420, 220, 41));
        confirmLineEdit->setStyleSheet(QString::fromUtf8("border-top-width: 0px; \n"
"border-style: solid; \n"
"border-color: white;\n"
"border-bottom-width: 1px;\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        confirmLineEdit->setEchoMode(QLineEdit::Password);
        registerPushButton = new QPushButton(reg_window);
        registerPushButton->setObjectName(QString::fromUtf8("registerPushButton"));
        registerPushButton->setGeometry(QRect(430, 530, 231, 91));
        registerPushButton->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"font: italic 12pt \"Montserrat\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: white;\n"
"border-radius: 45px;"));
        label_Error = new QLabel(reg_window);
        label_Error->setObjectName(QString::fromUtf8("label_Error"));
        label_Error->setGeometry(QRect(20, 490, 1061, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("MS UI Gothic"));
        label_Error->setFont(font);
        label_Error->setStyleSheet(QString::fromUtf8(""));
        label_Error->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(reg_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 510, 371, 141));
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\321\202\320\265\320\275\321\214-05.png")));
        label_2->setScaledContents(true);
        label->raise();
        confirmLineEdit->raise();
        label_Name->raise();
        label_Pass->raise();
        label_Confirm->raise();
        label_Confirm_2->raise();
        label_Name_2->raise();
        label_Pass_2->raise();
        passwordLineEdit->raise();
        nameLineEdit->raise();
        label_Error->raise();
        label_2->raise();
        registerPushButton->raise();
        QWidget::setTabOrder(nameLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, confirmLineEdit);
        QWidget::setTabOrder(confirmLineEdit, registerPushButton);

        retranslateUi(reg_window);

        QMetaObject::connectSlotsByName(reg_window);
    } // setupUi

    void retranslateUi(QDialog *reg_window)
    {
        reg_window->setWindowTitle(QCoreApplication::translate("reg_window", "notes", nullptr));
        label_Name->setText(QCoreApplication::translate("reg_window", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", nullptr));
        label_Pass->setText(QCoreApplication::translate("reg_window", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_Confirm->setText(QCoreApplication::translate("reg_window", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_Name_2->setText(QString());
        label_Confirm_2->setText(QString());
        label->setText(QString());
        registerPushButton->setText(QCoreApplication::translate("reg_window", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label_Error->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reg_window: public Ui_reg_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_WINDOW_H

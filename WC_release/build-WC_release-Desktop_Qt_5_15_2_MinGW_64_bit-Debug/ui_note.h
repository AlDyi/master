/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName(QString::fromUtf8("Note"));
        Note->resize(360, 170);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Note->sizePolicy().hasHeightForWidth());
        Note->setSizePolicy(sizePolicy);
        Note->setMinimumSize(QSize(360, 170));
        Note->setMaximumSize(QSize(360, 170));
        Note->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        label = new QLabel(Note);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 360, 89));
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Montserrat\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Note);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 110, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(120, 65, 81);\n"
"background-color: white;\n"
"width: 50px; \n"
"border-width: 1px; \n"
"border-color: white; \n"
"border-radius: 20px;\n"
""));
        pushButton->setIconSize(QSize(40, 40));

        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QWidget *Note)
    {
        Note->setWindowTitle(QCoreApplication::translate("Note", "\320\243\320\262\320\265\320\264\320\276\320\274\320\273\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("Note", "\320\227\320\260\320\277\320\270\321\201\320\270 \321\203\321\201\320\277\320\265\321\210\320\275\320\276 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("Note", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H

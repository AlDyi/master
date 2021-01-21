/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCalendarWidget *calendarWidget;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *mainLayout2_10;
    QCheckBox *checkBox10;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainLayout2;
    QCheckBox *checkBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *mainLayout_2;
    QLineEdit *lineEdit2;
    QProgressBar *progressBar;
    QPushButton *btnDeleteFromDB;
    QWidget *layoutWidget_3;
    QVBoxLayout *mainLayout_3;
    QLineEdit *lineEdit3;
    QLabel *label7;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *mainLayout2_4;
    QCheckBox *checkBox4;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *mainLayout2_8;
    QCheckBox *checkBox8;
    QLabel *label_Name;
    QWidget *layoutWidget_8;
    QVBoxLayout *mainLayout_8;
    QLineEdit *lineEdit8;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *mainLayout2_9;
    QCheckBox *checkBox9;
    QWidget *layoutWidget;
    QVBoxLayout *mainLayout;
    QLineEdit *lineEdit;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *mainLayout2_5;
    QCheckBox *checkBox5;
    QWidget *layoutWidget_10;
    QVBoxLayout *mainLayout_10;
    QLineEdit *lineEdit10;
    QPushButton *btnAddNote;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *mainLayout2_2;
    QCheckBox *checkBox2;
    QWidget *layoutWidget_9;
    QVBoxLayout *mainLayout_9;
    QLineEdit *lineEdit9;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *mainLayout2_7;
    QCheckBox *checkBox7;
    QWidget *layoutWidget_7;
    QVBoxLayout *mainLayout_7;
    QLineEdit *lineEdit7;
    QLabel *label_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *mainLayout_4;
    QLineEdit *lineEdit4;
    QWidget *layoutWidget_5;
    QVBoxLayout *mainLayout_5;
    QLineEdit *lineEdit5;
    QLabel *label9;
    QWidget *layoutWidget_6;
    QVBoxLayout *mainLayout_6;
    QLineEdit *lineEdit6;
    QLabel *label8;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *mainLayout2_3;
    QCheckBox *checkBox3;
    QPushButton *btnSaveInDB;
    QLabel *label;
    QLabel *label10;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *mainLayout2_6;
    QCheckBox *checkBox6;
    QLabel *label6;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *themeButton;
    QLabel *label_Name_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *btnSaveInDB_2;
    QPushButton *btnAddNote_2;
    QPushButton *btnDeleteFromDB_2;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 768);
        MainWindow->setMinimumSize(QSize(1200, 768));
        MainWindow->setMaximumSize(QSize(1200, 768));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/images/\320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272-10.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(639, 16, 540, 370));
        calendarWidget->setMinimumSize(QSize(540, 370));
        calendarWidget->setMaximumSize(QSize(540, 370));
        calendarWidget->setSizeIncrement(QSize(0, 0));
        calendarWidget->setBaseSize(QSize(530, 330));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setLayoutDirection(Qt::LeftToRight);
        calendarWidget->setAutoFillBackground(false);
        calendarWidget->setStyleSheet(QString::fromUtf8("QCalendarWidget QToolButton {\n"
"height: 80px;\n"
"width: 700px;\n"
"color: white;\n"
"font: italic 14pt \"Montserrat\";\n"
"icon-size: 0px;\n"
"background-color: rgb(120, 65, 81);\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"font: italic 10pt \"Montserrat\";\n"
"color: white;\n"
"background-color: rgb(120, 65, 81);\n"
"selection-background-color: rgba(255, 255, 255, 40);\n"
"selection-color: white;\n"
"alternate-background-color: rgb(120, 65, 81);\n"
"}\n"
""));
        calendarWidget->setInputMethodHints(Qt::ImhNone);
        calendarWidget->setGridVisible(false);
        calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        verticalLayoutWidget_10 = new QWidget(centralwidget);
        verticalLayoutWidget_10->setObjectName(QString::fromUtf8("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(50, 550, 22, 41));
        mainLayout2_10 = new QVBoxLayout(verticalLayoutWidget_10);
        mainLayout2_10->setObjectName(QString::fromUtf8("mainLayout2_10"));
        mainLayout2_10->setContentsMargins(0, 0, 0, 0);
        checkBox10 = new QCheckBox(verticalLayoutWidget_10);
        checkBox10->setObjectName(QString::fromUtf8("checkBox10"));
        checkBox10->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_10->addWidget(checkBox10);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 100, 22, 41));
        mainLayout2 = new QVBoxLayout(verticalLayoutWidget);
        mainLayout2->setObjectName(QString::fromUtf8("mainLayout2"));
        mainLayout2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8(""));
        checkBox->setCheckable(true);

        mainLayout2->addWidget(checkBox);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(69, 150, 551, 43));
        mainLayout_2 = new QVBoxLayout(layoutWidget_2);
        mainLayout_2->setObjectName(QString::fromUtf8("mainLayout_2"));
        mainLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit2 = new QLineEdit(layoutWidget_2);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
        lineEdit2->setStyleSheet(QString::fromUtf8(""));

        mainLayout_2->addWidget(lineEdit2);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(50, 650, 571, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        font.setPointSize(12);
        font.setItalic(true);
        progressBar->setFont(font);
        progressBar->setStyleSheet(QString::fromUtf8("border-radius: 70px;"));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        btnDeleteFromDB = new QPushButton(centralwidget);
        btnDeleteFromDB->setObjectName(QString::fromUtf8("btnDeleteFromDB"));
        btnDeleteFromDB->setGeometry(QRect(550, 43, 61, 41));
        btnDeleteFromDB->setCursor(QCursor(Qt::PointingHandCursor));
        btnDeleteFromDB->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/images/\320\267\320\260\320\274\320\265\321\202\320\272\320\270-21.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteFromDB->setIcon(icon1);
        btnDeleteFromDB->setIconSize(QSize(35, 35));
        btnDeleteFromDB->setCheckable(true);
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(69, 200, 551, 41));
        mainLayout_3 = new QVBoxLayout(layoutWidget_3);
        mainLayout_3->setObjectName(QString::fromUtf8("mainLayout_3"));
        mainLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit3 = new QLineEdit(layoutWidget_3);
        lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));
        lineEdit3->setStyleSheet(QString::fromUtf8(""));

        mainLayout_3->addWidget(lineEdit3);

        label7 = new QLabel(centralwidget);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(50, 400, 571, 41));
        label7->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(50, 250, 22, 41));
        mainLayout2_4 = new QVBoxLayout(verticalLayoutWidget_4);
        mainLayout2_4->setObjectName(QString::fromUtf8("mainLayout2_4"));
        mainLayout2_4->setContentsMargins(0, 0, 0, 0);
        checkBox4 = new QCheckBox(verticalLayoutWidget_4);
        checkBox4->setObjectName(QString::fromUtf8("checkBox4"));
        checkBox4->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_4->addWidget(checkBox4);

        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(50, 450, 21, 41));
        mainLayout2_8 = new QVBoxLayout(verticalLayoutWidget_8);
        mainLayout2_8->setObjectName(QString::fromUtf8("mainLayout2_8"));
        mainLayout2_8->setContentsMargins(0, 0, 0, 0);
        checkBox8 = new QCheckBox(verticalLayoutWidget_8);
        checkBox8->setObjectName(QString::fromUtf8("checkBox8"));
        checkBox8->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_8->addWidget(checkBox8);

        label_Name = new QLabel(centralwidget);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(60, 40, 201, 41));
        label_Name->setStyleSheet(QString::fromUtf8("color: white; \n"
"background-color: \n"
"rgba(255, 255, 255, 0); \n"
"font: italic 12pt Montserrat; \n"
"text-align: center;\n"
""));
        label_Name->setAlignment(Qt::AlignCenter);
        layoutWidget_8 = new QWidget(centralwidget);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(70, 450, 551, 41));
        mainLayout_8 = new QVBoxLayout(layoutWidget_8);
        mainLayout_8->setObjectName(QString::fromUtf8("mainLayout_8"));
        mainLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit8 = new QLineEdit(layoutWidget_8);
        lineEdit8->setObjectName(QString::fromUtf8("lineEdit8"));
        lineEdit8->setStyleSheet(QString::fromUtf8(""));

        mainLayout_8->addWidget(lineEdit8);

        verticalLayoutWidget_9 = new QWidget(centralwidget);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(50, 500, 22, 41));
        mainLayout2_9 = new QVBoxLayout(verticalLayoutWidget_9);
        mainLayout2_9->setObjectName(QString::fromUtf8("mainLayout2_9"));
        mainLayout2_9->setContentsMargins(0, 0, 0, 0);
        checkBox9 = new QCheckBox(verticalLayoutWidget_9);
        checkBox9->setObjectName(QString::fromUtf8("checkBox9"));
        checkBox9->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_9->addWidget(checkBox9);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 100, 551, 44));
        mainLayout = new QVBoxLayout(layoutWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8(""));

        mainLayout->addWidget(lineEdit);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(50, 300, 22, 41));
        mainLayout2_5 = new QVBoxLayout(verticalLayoutWidget_5);
        mainLayout2_5->setObjectName(QString::fromUtf8("mainLayout2_5"));
        mainLayout2_5->setContentsMargins(0, 0, 0, 0);
        checkBox5 = new QCheckBox(verticalLayoutWidget_5);
        checkBox5->setObjectName(QString::fromUtf8("checkBox5"));
        checkBox5->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_5->addWidget(checkBox5);

        layoutWidget_10 = new QWidget(centralwidget);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(69, 550, 551, 41));
        mainLayout_10 = new QVBoxLayout(layoutWidget_10);
        mainLayout_10->setObjectName(QString::fromUtf8("mainLayout_10"));
        mainLayout_10->setContentsMargins(0, 0, 0, 0);
        lineEdit10 = new QLineEdit(layoutWidget_10);
        lineEdit10->setObjectName(QString::fromUtf8("lineEdit10"));
        lineEdit10->setStyleSheet(QString::fromUtf8(""));

        mainLayout_10->addWidget(lineEdit10);

        btnAddNote = new QPushButton(centralwidget);
        btnAddNote->setObjectName(QString::fromUtf8("btnAddNote"));
        btnAddNote->setGeometry(QRect(270, 43, 51, 41));
        QPalette palette;
        QLinearGradient gradient(0.5, 0.869318, 0.499, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(0.5, 0.869318, 0.499, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient1.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(0.5, 0.869318, 0.499, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient2.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(0.5, 0.869318, 0.499, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient3.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(0.5, 0.869318, 0.499, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient4.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(0.5, 0.869318, 0.499, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient5.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(0.5, 0.869318, 0.499, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient6.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(0.5, 0.869318, 0.499, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient7.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(0.5, 0.869318, 0.499, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient8.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        btnAddNote->setPalette(palette);
        btnAddNote->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddNote->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border: none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/images/\320\267\320\260\320\274\320\265\321\202\320\272\320\270-20.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddNote->setIcon(icon2);
        btnAddNote->setIconSize(QSize(35, 35));
        btnAddNote->setCheckable(true);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 150, 22, 41));
        mainLayout2_2 = new QVBoxLayout(verticalLayoutWidget_2);
        mainLayout2_2->setObjectName(QString::fromUtf8("mainLayout2_2"));
        mainLayout2_2->setContentsMargins(0, 0, 0, 0);
        checkBox2 = new QCheckBox(verticalLayoutWidget_2);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));
        checkBox2->setStyleSheet(QString::fromUtf8(""));
        checkBox2->setCheckable(true);

        mainLayout2_2->addWidget(checkBox2);

        layoutWidget_9 = new QWidget(centralwidget);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(70, 500, 551, 43));
        mainLayout_9 = new QVBoxLayout(layoutWidget_9);
        mainLayout_9->setObjectName(QString::fromUtf8("mainLayout_9"));
        mainLayout_9->setContentsMargins(0, 0, 0, 0);
        lineEdit9 = new QLineEdit(layoutWidget_9);
        lineEdit9->setObjectName(QString::fromUtf8("lineEdit9"));
        lineEdit9->setStyleSheet(QString::fromUtf8(""));

        mainLayout_9->addWidget(lineEdit9);

        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(50, 400, 22, 41));
        mainLayout2_7 = new QVBoxLayout(verticalLayoutWidget_7);
        mainLayout2_7->setObjectName(QString::fromUtf8("mainLayout2_7"));
        mainLayout2_7->setContentsMargins(0, 0, 0, 0);
        checkBox7 = new QCheckBox(verticalLayoutWidget_7);
        checkBox7->setObjectName(QString::fromUtf8("checkBox7"));
        checkBox7->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_7->addWidget(checkBox7);

        layoutWidget_7 = new QWidget(centralwidget);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(70, 400, 551, 41));
        mainLayout_7 = new QVBoxLayout(layoutWidget_7);
        mainLayout_7->setObjectName(QString::fromUtf8("mainLayout_7"));
        mainLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEdit7 = new QLineEdit(layoutWidget_7);
        lineEdit7->setObjectName(QString::fromUtf8("lineEdit7"));
        lineEdit7->setStyleSheet(QString::fromUtf8(""));

        mainLayout_7->addWidget(lineEdit7);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(56, 609, 571, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"font: italic 12pt \"Montserrat\";\n"
"color: white;"));
        label_2->setAlignment(Qt::AlignCenter);
        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(69, 250, 551, 41));
        mainLayout_4 = new QVBoxLayout(layoutWidget_4);
        mainLayout_4->setObjectName(QString::fromUtf8("mainLayout_4"));
        mainLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit4 = new QLineEdit(layoutWidget_4);
        lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));
        lineEdit4->setStyleSheet(QString::fromUtf8(""));

        mainLayout_4->addWidget(lineEdit4);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(70, 300, 551, 41));
        mainLayout_5 = new QVBoxLayout(layoutWidget_5);
        mainLayout_5->setObjectName(QString::fromUtf8("mainLayout_5"));
        mainLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit5 = new QLineEdit(layoutWidget_5);
        lineEdit5->setObjectName(QString::fromUtf8("lineEdit5"));
        lineEdit5->setStyleSheet(QString::fromUtf8(""));

        mainLayout_5->addWidget(lineEdit5);

        label9 = new QLabel(centralwidget);
        label9->setObjectName(QString::fromUtf8("label9"));
        label9->setGeometry(QRect(50, 500, 571, 41));
        label9->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        layoutWidget_6 = new QWidget(centralwidget);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(69, 350, 551, 41));
        mainLayout_6 = new QVBoxLayout(layoutWidget_6);
        mainLayout_6->setObjectName(QString::fromUtf8("mainLayout_6"));
        mainLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit6 = new QLineEdit(layoutWidget_6);
        lineEdit6->setObjectName(QString::fromUtf8("lineEdit6"));
        lineEdit6->setStyleSheet(QString::fromUtf8(""));

        mainLayout_6->addWidget(lineEdit6);

        label8 = new QLabel(centralwidget);
        label8->setObjectName(QString::fromUtf8("label8"));
        label8->setGeometry(QRect(50, 450, 571, 41));
        label8->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(50, 200, 22, 41));
        mainLayout2_3 = new QVBoxLayout(verticalLayoutWidget_3);
        mainLayout2_3->setObjectName(QString::fromUtf8("mainLayout2_3"));
        mainLayout2_3->setContentsMargins(0, 0, 0, 0);
        checkBox3 = new QCheckBox(verticalLayoutWidget_3);
        checkBox3->setObjectName(QString::fromUtf8("checkBox3"));
        checkBox3->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_3->addWidget(checkBox3);

        btnSaveInDB = new QPushButton(centralwidget);
        btnSaveInDB->setObjectName(QString::fromUtf8("btnSaveInDB"));
        btnSaveInDB->setGeometry(QRect(500, 43, 61, 41));
        btnSaveInDB->setCursor(QCursor(Qt::PointingHandCursor));
        btnSaveInDB->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border: none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/images/\320\267\320\260\320\274\320\265\321\202\320\272\320\270-22.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveInDB->setIcon(icon3);
        btnSaveInDB->setIconSize(QSize(35, 35));
        btnSaveInDB->setCheckable(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 100, 571, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        label10 = new QLabel(centralwidget);
        label10->setObjectName(QString::fromUtf8("label10"));
        label10->setGeometry(QRect(50, 550, 571, 41));
        label10->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(50, 350, 22, 41));
        mainLayout2_6 = new QVBoxLayout(verticalLayoutWidget_6);
        mainLayout2_6->setObjectName(QString::fromUtf8("mainLayout2_6"));
        mainLayout2_6->setContentsMargins(0, 0, 0, 0);
        checkBox6 = new QCheckBox(verticalLayoutWidget_6);
        checkBox6->setObjectName(QString::fromUtf8("checkBox6"));
        checkBox6->setStyleSheet(QString::fromUtf8(""));

        mainLayout2_6->addWidget(checkBox6);

        label6 = new QLabel(centralwidget);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(50, 350, 571, 41));
        label6->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(50, 150, 571, 41));
        label2->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        label3 = new QLabel(centralwidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(50, 200, 571, 41));
        label3->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        label4 = new QLabel(centralwidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(50, 250, 571, 41));
        label4->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        label5 = new QLabel(centralwidget);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(50, 300, 571, 41));
        label5->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 65, 81);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1050, 110, 161, 31));
        label_7->setCursor(QCursor(Qt::PointingHandCursor));
        label_7->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Montserrat\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(120, 65, 81);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1130, 50, 21, 21));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\241\321\202\321\200\320\265\320\273\320\272\320\270-23.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(669, 46, 21, 21));
        label_6->setCursor(QCursor(Qt::PointingHandCursor));
        label_6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\241\321\202\321\200\320\265\320\273\320\272\320\270-24.png")));
        label_6->setScaledContents(true);
        themeButton = new QPushButton(centralwidget);
        themeButton->setObjectName(QString::fromUtf8("themeButton"));
        themeButton->setGeometry(QRect(920, 650, 191, 41));
        themeButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-width: 1.5px;\n"
"color: white;\n"
"font:  italic 10pt \"Montserrat\";\n"
"border-style: solid; \n"
"border-color: white;\n"
"border-radius: 15px;"));
        label_Name_2 = new QLabel(centralwidget);
        label_Name_2->setObjectName(QString::fromUtf8("label_Name_2"));
        label_Name_2->setGeometry(QRect(60, 40, 201, 41));
        label_Name_2->setStyleSheet(QString::fromUtf8("color: rgb(120, 65, 81); \n"
"background-color: \n"
"rgba(255, 255, 255, 0); \n"
"font: italic 12pt Montserrat; \n"
"text-align: center;\n"
""));
        label_Name_2->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(56, 609, 571, 31));
        label_8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"font: italic 12pt \"Montserrat\";\n"
"color: rgb(120, 65, 81);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1050, 110, 161, 31));
        label_9->setCursor(QCursor(Qt::PointingHandCursor));
        label_9->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Montserrat\";\n"
"color: rgb(120, 65, 81);\n"
"background-color: rgb(234, 204, 215);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(669, 46, 21, 21));
        label_10->setCursor(QCursor(Qt::PointingHandCursor));
        label_10->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\241\320\262\320\265\321\202\320\273\320\260\321\217 \321\202\320\265\320\274\320\260-19.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1130, 50, 21, 21));
        label_11->setCursor(QCursor(Qt::PointingHandCursor));
        label_11->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/\320\241\320\262\320\265\321\202\320\273\320\260\321\217 \321\202\320\265\320\274\320\260-18.png")));
        label_11->setScaledContents(true);
        btnSaveInDB_2 = new QPushButton(centralwidget);
        btnSaveInDB_2->setObjectName(QString::fromUtf8("btnSaveInDB_2"));
        btnSaveInDB_2->setGeometry(QRect(500, 43, 61, 41));
        btnSaveInDB_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnSaveInDB_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border: none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resource/images/\320\241\320\262\320\265\321\202\320\273\320\260\321\217 \321\202\320\265\320\274\320\260-17.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveInDB_2->setIcon(icon4);
        btnSaveInDB_2->setIconSize(QSize(35, 35));
        btnSaveInDB_2->setCheckable(true);
        btnAddNote_2 = new QPushButton(centralwidget);
        btnAddNote_2->setObjectName(QString::fromUtf8("btnAddNote_2"));
        btnAddNote_2->setGeometry(QRect(270, 43, 51, 41));
        QPalette palette1;
        QLinearGradient gradient9(0.5, 0.869318, 0.499, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient9.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush9(gradient9);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QLinearGradient gradient10(0.5, 0.869318, 0.499, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient10.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush10(gradient10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        QLinearGradient gradient11(0.5, 0.869318, 0.499, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient11.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush11(gradient11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush11);
        QLinearGradient gradient12(0.5, 0.869318, 0.499, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient12.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush12(gradient12);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        QLinearGradient gradient13(0.5, 0.869318, 0.499, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient13.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush13(gradient13);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        QLinearGradient gradient14(0.5, 0.869318, 0.499, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient14.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush14(gradient14);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        QLinearGradient gradient15(0.5, 0.869318, 0.499, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient15.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush15(gradient15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        QLinearGradient gradient16(0.5, 0.869318, 0.499, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient16.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush16(gradient16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        QLinearGradient gradient17(0.5, 0.869318, 0.499, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0.741573, QColor(0, 0, 0, 0));
        gradient17.setColorAt(1, QColor(255, 255, 255, 0));
        QBrush brush17(gradient17);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        btnAddNote_2->setPalette(palette1);
        btnAddNote_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddNote_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border: none;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/images/Button+.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddNote_2->setIcon(icon5);
        btnAddNote_2->setIconSize(QSize(35, 35));
        btnAddNote_2->setCheckable(true);
        btnDeleteFromDB_2 = new QPushButton(centralwidget);
        btnDeleteFromDB_2->setObjectName(QString::fromUtf8("btnDeleteFromDB_2"));
        btnDeleteFromDB_2->setGeometry(QRect(550, 43, 61, 41));
        btnDeleteFromDB_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnDeleteFromDB_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0.869318, x2:0.499, y2:1, stop:0.741573 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"border: none;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resource/images/\320\241\320\262\320\265\321\202\320\273\320\260\321\217 \321\202\320\265\320\274\320\260-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteFromDB_2->setIcon(icon6);
        btnDeleteFromDB_2->setIconSize(QSize(35, 35));
        btnDeleteFromDB_2->setCheckable(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 710, 301, 20));
        MainWindow->setCentralWidget(centralwidget);
        label_8->raise();
        label_Name_2->raise();
        calendarWidget->raise();
        verticalLayoutWidget_10->raise();
        verticalLayoutWidget->raise();
        layoutWidget_2->raise();
        progressBar->raise();
        layoutWidget_3->raise();
        verticalLayoutWidget_4->raise();
        verticalLayoutWidget_8->raise();
        label_Name->raise();
        layoutWidget_8->raise();
        verticalLayoutWidget_9->raise();
        layoutWidget->raise();
        verticalLayoutWidget_5->raise();
        layoutWidget_10->raise();
        verticalLayoutWidget_2->raise();
        layoutWidget_9->raise();
        verticalLayoutWidget_7->raise();
        layoutWidget_7->raise();
        label_2->raise();
        layoutWidget_4->raise();
        layoutWidget_5->raise();
        label9->raise();
        layoutWidget_6->raise();
        label8->raise();
        verticalLayoutWidget_3->raise();
        label10->raise();
        verticalLayoutWidget_6->raise();
        label6->raise();
        label->raise();
        label7->raise();
        label2->raise();
        label3->raise();
        label4->raise();
        label5->raise();
        label_5->raise();
        label_6->raise();
        btnAddNote->raise();
        btnSaveInDB->raise();
        btnDeleteFromDB->raise();
        label_7->raise();
        themeButton->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        btnSaveInDB_2->raise();
        btnAddNote_2->raise();
        btnDeleteFromDB_2->raise();
        label_3->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "notes", nullptr));
#if QT_CONFIG(statustip)
        calendarWidget->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        checkBox10->setText(QString());
        checkBox->setText(QString());
#if QT_CONFIG(tooltip)
        btnDeleteFromDB->setToolTip(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        btnDeleteFromDB->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        btnDeleteFromDB->setWhatsThis(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \320\267\320\260 \321\215\321\202\320\276\321\202 \320\264\320\265\320\275\321\214 \320\270\320\267 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnDeleteFromDB->setText(QString());
        label7->setText(QString());
        checkBox4->setText(QString());
        checkBox8->setText(QString());
        label_Name->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        checkBox9->setText(QString());
        checkBox5->setText(QString());
#if QT_CONFIG(tooltip)
        btnAddNote->setToolTip(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddNote->setText(QString());
        checkBox2->setText(QString());
        checkBox7->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\320\275\320\276:", nullptr));
        label9->setText(QString());
        label8->setText(QString());
        checkBox3->setText(QString());
#if QT_CONFIG(tooltip)
        btnSaveInDB->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        btnSaveInDB->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        btnSaveInDB->setWhatsThis(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnSaveInDB->setText(QString());
        label->setText(QString());
        label10->setText(QString());
        checkBox6->setText(QString());
        label6->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261          \320\222\321\201", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        themeButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\262\320\265\321\202\320\273\320\260\321\217 \321\202\320\265\320\274\320\260", nullptr));
        label_Name_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\320\275\320\276:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261          \320\222\321\201", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
#if QT_CONFIG(tooltip)
        btnSaveInDB_2->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        btnSaveInDB_2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        btnSaveInDB_2->setWhatsThis(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnSaveInDB_2->setText(QString());
#if QT_CONFIG(tooltip)
        btnAddNote_2->setToolTip(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddNote_2->setText(QString());
#if QT_CONFIG(tooltip)
        btnDeleteFromDB_2->setToolTip(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        btnDeleteFromDB_2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        btnDeleteFromDB_2->setWhatsThis(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \320\267\320\260 \321\215\321\202\320\276\321\202 \320\264\320\265\320\275\321\214 \320\270\320\267 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnDeleteFromDB_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

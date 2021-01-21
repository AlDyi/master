#include "mainwindow.h"

#include <QApplication>


int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    MainWindow w;
    w.connectDB();
    //w.show();
    w.display();
    return a.exec();
}

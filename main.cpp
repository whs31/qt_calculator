#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile STYLESHEET_FILE(":MaterialDark.qss");
    STYLESHEET_FILE.open(QFile::ReadOnly);
    QString STYLESHEET = QLatin1String(STYLESHEET_FILE.readAll());

    a.setStyleSheet(STYLESHEET);
    w.show();
    return a.exec();
}

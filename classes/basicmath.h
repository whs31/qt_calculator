#ifndef BASICMATH_H
#define BASICMATH_H

#include <QObject>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class MainWindow;

class BasicMath : public QObject
{
    Q_OBJECT
public:
    explicit BasicMath(QObject *parent = nullptr);

signals:

private:
    MainWindow * mainWindow;

};

#endif // BASICMATH_H

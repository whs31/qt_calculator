#ifndef ADVANCEDMATH_H
#define ADVANCEDMATH_H

#include <QObject>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class MainWindow;

class AdvancedMath : public QObject
{
    Q_OBJECT
public:
    explicit AdvancedMath(QObject *parent = nullptr);

signals:

private:
    MainWindow * mainWindow;

};

#endif // ADVANCEDMATH_H

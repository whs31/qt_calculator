#include "basicmath.h"

BasicMath::BasicMath(QObject *parent) : QObject(parent)
{
    mainWindow = MainWindow::getMainWinPtr();
}

#include "advancedmath.h"

AdvancedMath::AdvancedMath(QObject *parent) : QObject(parent)
{
    mainWindow = MainWindow::getMainWinPtr();
}

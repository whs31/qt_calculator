#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "classes/advancedmath.h"
#include "classes/basicmath.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class BasicMath;
class AdvancedMath;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow * getMainWinPtr();
    friend class BasicMath;
    friend class AdvancedMath;

private:
    Ui::MainWindow *ui;
    static MainWindow * pMainWindow;
};
#endif // MAINWINDOW_H

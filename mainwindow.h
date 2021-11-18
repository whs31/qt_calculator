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

private slots:
    void on_oneButton_clicked();
    void on_twoButton_clicked();
    void on_threeButton_clicked();
    void on_fourButton_clicked();
    void on_fiveButton_clicked();
    void on_sixButton_clicked();
    void on_sevenButton_clicked();
    void on_eightButton_clicked();
    void on_nineButton_clicked();
    void on_zeroButton_clicked();
    void on_clearButton_clicked();
    void on_allClearButton_clicked();
    void on_dotButton_clicked();
    void on_expButton_clicked();
    void on_percentButton_clicked();
    void on_divButton_clicked();
    void on_multyplyButton_clicked();
    void on_minusButton_clicked();
    void on_plusButton_clicked();
    void on_leftBracketButton_clicked();
    void on_rightBracketButton_clicked();
    void on_lbButton_clicked();
    void on_logButton_clicked();
    void on_powButton_clicked();
    void on_sqrtButton_clicked();
    void on_factorialButton_clicked();
    void on_inverseButton_clicked();
    void on_piButton_clicked();

    void on_resultButton_clicked();

    void on_inputField_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    static MainWindow * pMainWindow;
    BasicMath * mathClass;
};
#endif // MAINWINDOW_H

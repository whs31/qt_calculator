#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow * MainWindow::pMainWindow;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pMainWindow = this;
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow *MainWindow::getMainWinPtr()
{
    return pMainWindow;
}

void MainWindow::on_oneButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"1");
}

void MainWindow::on_twoButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"2");
}

void MainWindow::on_threeButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"3");
}

void MainWindow::on_fourButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"4");
}

void MainWindow::on_fiveButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"5");
}

void MainWindow::on_sixButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"6");
}

void MainWindow::on_sevenButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"7");
}

void MainWindow::on_eightButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"8");
}

void MainWindow::on_nineButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"9");
}

void MainWindow::on_zeroButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"0");
}

void MainWindow::on_clearButton_clicked()
{
    QString choppedText = ui->inputField->text();
    choppedText.chop(1);
    ui->inputField->setText(choppedText);
}

void MainWindow::on_allClearButton_clicked()
{
    ui->inputField->clear();
}

void MainWindow::on_dotButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+".");
}

void MainWindow::on_expButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"e");
}

void MainWindow::on_percentButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"%");
}

void MainWindow::on_divButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"/");
}

void MainWindow::on_multyplyButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"×");
}

void MainWindow::on_minusButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"-");
}

void MainWindow::on_plusButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"+");
}

void MainWindow::on_leftBracketButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"(");
}

void MainWindow::on_rightBracketButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+")");
}

void MainWindow::on_lbButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"ln");
}

void MainWindow::on_logButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"log");
}

void MainWindow::on_powButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"^");
}

void MainWindow::on_sqrtButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"√");
}

void MainWindow::on_factorialButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"!");
}

void MainWindow::on_inverseButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"^(-1)");
}

void MainWindow::on_piButton_clicked()
{
    QString currentText = ui->inputField->text();
    ui->inputField->setText(currentText+"π");
}

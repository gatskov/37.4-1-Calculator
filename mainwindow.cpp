#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add()
{
    double value_1 {0};
    double value_2 {0};
    if (getValues(value_1, value_2))
    {
        ui->lcd_result->display(value_1 + value_2);
    }
    else
    {
        ui->lcd_result->display("ERR");
    }
}

void MainWindow::subtract()
{
    double value_1 {0};
    double value_2 {0};
    if (getValues(value_1, value_2))
    {
        ui->lcd_result->display(value_1 - value_2);
    }
    else
    {
        ui->lcd_result->display("ERR");
    }
}

void MainWindow::multiply()
{
    double value_1 {0};
    double value_2 {0};
    if (getValues(value_1, value_2))
    {
        ui->lcd_result->display(value_1 * value_2);
    }
    else
    {
        ui->lcd_result->display("ERR");
    }
}

void MainWindow::divide()
{
    double value_1 {0};
    double value_2 {0};
    if (getValues(value_1, value_2) && value_2 != 0)
    {
        ui->lcd_result->display(value_1 / value_2);
    }
    else
    {
        ui->lcd_result->display("ERR");
    }
}

bool MainWindow::getValues(double& v1, double& v2)
{
    bool* noError_1 = new bool (true);
    bool* noError_2 = new bool (true);
    v1 = ui->value_1->text().toDouble(noError_1);
    v2 = ui->value_2->text().toDouble(noError_2);
    return (*noError_1 && *noError_2);
    delete noError_1;
    noError_1 = nullptr;
    delete noError_2;
    noError_2 = nullptr;
}

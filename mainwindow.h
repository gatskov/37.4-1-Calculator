#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit *value_1 {nullptr};
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void add();
    void subtract();
    void multiply();
    void divide();

private:
    Ui::MainWindow *ui;
    bool getValues(double&, double&);
};
#endif // MAINWINDOW_H

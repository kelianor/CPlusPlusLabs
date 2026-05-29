#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::calc(double x, double c)
{
    double sqrt = qSqrt(c);
    if(sqrt == 0)
    {
        QMessageBox::critical(this, "Деление на 0", "Поменяйте значение c!");
        ui->result->setText("-");
    }
    else
    {
        double result = (qPow(x, 3) - 1.5 * qPow(c, 2)) / sqrt;
        ui->result->setText(QString::number(result));
    }
}

void MainWindow::on_x_valueChanged(double x)
{
    calc(x, ui->c->value());
}

void MainWindow::on_c_valueChanged(double c)
{
    calc(ui->x->value(), c);
}


void MainWindow::on_aquamarineBackground_clicked()
{
    this->setStyleSheet("background-color: aquamarine;");
}

void MainWindow::on_redBackground_clicked()
{
    this->setStyleSheet("background-color: red;");
}

void MainWindow::author(Qt::CheckState fullName, Qt::CheckState group)
{
    QString author = "";
    if(fullName)
    {
        author.append("Климов Илья Андреевич");
    }

    if(group)
    {
        if(fullName)
            author.append(" - ");
        author.append("Т-493");
    }

    this->setWindowTitle(author);
}

void MainWindow::on_fullName_checkStateChanged(const Qt::CheckState &state)
{
    author(state, ui->groupName->checkState());
}


void MainWindow::on_groupName_checkStateChanged(const Qt::CheckState &state)
{
    author(ui->fullName->checkState(), state);
}


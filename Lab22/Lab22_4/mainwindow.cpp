#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->author->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_showAuthor_clicked()
{
    ui->author->show();
}


void MainWindow::on_calc_clicked()
{
    double a = ui->a->value();
    double b = ui->b->value();
    double c = ui->c->value();
    double S = 2*(a*b + b*c + a*c);
    ui->result->setText("Результат: " + QString::number(S) + " м2");
}


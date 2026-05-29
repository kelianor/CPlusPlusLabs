#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->processedStr->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString str = ui->stringEdit->text();
    std::reverse(str.begin(), str.end());
    str.append(".Клімаў");
    ui->processedStr->setText(str);
    this->setWindowTitle(str);
    ui->processedStr->show();
}


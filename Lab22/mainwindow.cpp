#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label->hide();
}


void MainWindow::on_pushButton_3_clicked()
{

    if(!ui->checkBox->isChecked())
    {
        ui->checkBox->setCheckState(Qt::Checked);
    }
    else
    {
        ui->checkBox->setCheckState(Qt::Unchecked);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}


void MainWindow::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->checkBox_2->setCheckState(Qt::Unchecked);
        ui->checkBox_3->setCheckState(Qt::Unchecked);
        setStyleSheet("background-color: red;");
    }
    else
    {
        setStyleSheet("");
    }

}

void MainWindow::on_checkBox_2_checkStateChanged(const Qt::CheckState &arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->checkBox->setCheckState(Qt::Unchecked);
        ui->checkBox_3->setCheckState(Qt::Unchecked);
        setStyleSheet("background-color: green;");
    }
    else
    {
        setStyleSheet("");
    }
}


void MainWindow::on_checkBox_3_checkStateChanged(const Qt::CheckState &arg1)
{
    if(arg1 == Qt::Checked)
    {

        ui->checkBox->setCheckState(Qt::Unchecked);
        ui->checkBox_2->setCheckState(Qt::Unchecked);
        setStyleSheet("background-color: yellow;");
    }
    else
    {
        setStyleSheet("");
    }
}
void MainWindow::on_Calculate_clicked()
{
    bool dividendIsDouble = false;
    bool divisorIsDouble = false;

    double dividend = ui->lineEdit->text().toDouble(&dividendIsDouble);
    double divisor = ui->lineEdit_2->text().toDouble(&divisorIsDouble);

    if(!dividendIsDouble | !divisorIsDouble)
    {
        QMessageBox::critical(this, "Ошибка формата данных!", "Входная строка имела неверный формат.");
        return;
    }

    if(divisor == 0 | dividend / divisor < 0)
    {
        QMessageBox::critical(this, "Ошибка!", "Попытка деления на ноль или извлечения корня из отрицательного числа.");
        return;
    }

    ui->lineEdit_3->setText(QString::number(qSqrt(dividend / divisor)));
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit_3->setText("");
}


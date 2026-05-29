#include "widgetswindow.h"
#include "ui_widgetswindow.h"

WidgetsWindow::WidgetsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WidgetsWindow)
{
    ui->setupUi(this);
}

WidgetsWindow::~WidgetsWindow()
{
    delete ui;
}

void WidgetsWindow::on_dial_valueChanged(int value)
{
    ui->horizontalSlider->blockSignals(true);
    ui->progressBar->setValue(value);
    ui->horizontalSlider->setValue(value);
    ui->horizontalSlider->blockSignals(false);
}


void WidgetsWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->dial->blockSignals(true);
    ui->progressBar->setValue(value);
    ui->dial->setValue(value);
    ui->dial->blockSignals(false);
}


void WidgetsWindow::on_calendarWidget_activated(const QDate &date)
{
    ui->dateEdit->setDate(date);
}


void WidgetsWindow::on_dateEdit_dateChanged(const QDate &date)
{
    ui->calendarWidget->setSelectedDate(date);
}


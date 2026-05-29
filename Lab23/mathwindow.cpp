#include "mathwindow.h"
#include "ui_mathwindow.h"

MathWindow::MathWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MathWindow)
{
    ui->setupUi(this);
    updateChart(ui->x1->value(), ui->x2->value(), ui->step->value());
}

MathWindow::~MathWindow()
{
    delete ui;
}

void MathWindow::updateChart(double x1, double x2, double step)
{
    if (step <= 0 | x1 > x2) return;

    QLineSeries* series = new QLineSeries(this);
    ui->chartView->chart()->removeAllSeries();

    for(double x = x1; x <= x2; x += step)
    {
        series->append(x, (2 - x * x) / qSqrt(9 * x * x - 4));
    }

    ui->chartView->chart()->setTitle("График функции");
    ui->chartView->chart()->addSeries(series);
    ui->chartView->chart()->createDefaultAxes();
    ui->chartView->chart()->legend()->hide();
}

void MathWindow::on_x1_valueChanged(double x1)
{
    updateChart(x1, ui->x2->value(), ui->step->value());
}


void MathWindow::on_x2_valueChanged(double x2)
{
    updateChart(ui->x1->value(), x2, ui->step->value());
}


void MathWindow::on_step_valueChanged(double step)
{
    updateChart(ui->x1->value(), ui->x2->value(), step);
}


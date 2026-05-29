#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    table = ui->tableWidget;
    chart = ui->chartView->chart();
    series = new QBarSeries(this); // Сгруппированные по названию даннеы для диаграммы

    MainWindow::updateChart();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_widgets_clicked()
{
    AuthorWindow *authWindow = new AuthorWindow(this);
    authWindow->show();
}


void MainWindow::on_mathFunc_clicked()
{
    MathWindow *mathWindow = new MathWindow(this);
    mathWindow->show();
}


void MainWindow::on_author_clicked()
{
    WidgetsWindow *widgetsWindow = new WidgetsWindow(this);
    widgetsWindow->show();
}

void MainWindow::updateChart()
{
    chart->removeSeries(series);
    series->clear();

    for (int i = 0; i < table->rowCount() - 1; i++)
    {
        QTableWidgetItem *nameItem = table->item(i, 0);
        QTableWidgetItem *heightItem = table->item(i, 1);

        if (nameItem && heightItem)
        {
            QString name = nameItem->text().trimmed();
            QString heightStr = heightItem->text().trimmed().replace(",", ".");
            double height = heightStr.toDouble();

            if (!name.isEmpty() && height > 0)
            {
                QBarSet *set = new QBarSet(name, this);
                *set << height;
                series->append(set);
            }
        }
    }

    chart->addSeries(series);
    QList<QAbstractAxis*> axes = chart->axes();
    for (QAbstractAxis *axis : axes)
    {
        chart->removeAxis(axis);
        delete axis;
    }

    chart->setTitle("Высота гор");
    chart->createDefaultAxes();
}

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    table->blockSignals(true);

    if(row == table->rowCount()-1)
    {
        table->insertRow(table->rowCount());
    }
    else
    {
        QTableWidgetItem *nameItem = table->item(row, 0);
        QTableWidgetItem *heightItem = table->item(row, 1);

        QString name = nameItem ? nameItem->text().trimmed() : "";
        QString height = heightItem ? heightItem->text().trimmed() : "";

        if (name.isEmpty() && height.isEmpty())
        {
            table->removeRow(row);
        }
    }

    updateChart();

    table->blockSignals(false);
}


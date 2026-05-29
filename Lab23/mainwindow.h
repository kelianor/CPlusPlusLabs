#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "authorwindow.h"
#include "mathwindow.h"
#include "widgetswindow.h"

#include <QMainWindow>
#include <QtCharts>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_widgets_clicked();

    void on_mathFunc_clicked();

    void on_author_clicked();

    void on_tableWidget_cellChanged(int row, int column);

private:
    Ui::MainWindow *ui;

    QTableWidget *table;

    QChart *chart;

    QBarSeries *series;

    void updateChart();
};
#endif // MAINWINDOW_H

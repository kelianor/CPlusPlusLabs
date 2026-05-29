#ifndef MATHWINDOW_H
#define MATHWINDOW_H

#include <QMainWindow>
#include <QtCharts>
#include <QLineSeries>
#include <QtMath>

namespace Ui {
class MathWindow;
}

class MathWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MathWindow(QWidget *parent = nullptr);
    ~MathWindow();

private slots:
    void on_x1_valueChanged(double arg1);

    void on_x2_valueChanged(double arg1);

    void on_step_valueChanged(double arg1);

private:
    Ui::MathWindow *ui;

    void updateChart(double x1, double x2, double step);
};

#endif // MATHWINDOW_H

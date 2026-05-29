#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMath>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_x_valueChanged(double arg1);

    void on_c_valueChanged(double arg1);

    void on_aquamarineBackground_clicked();

    void on_redBackground_clicked();

    void on_fullName_checkStateChanged(const Qt::CheckState &arg1);

    void on_groupName_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::MainWindow *ui;

    void calc(double x, double c);

    void author(Qt::CheckState, Qt::CheckState);
};
#endif // MAINWINDOW_H

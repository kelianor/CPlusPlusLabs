#ifndef WIDGETSWINDOW_H
#define WIDGETSWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>

namespace Ui {
class WidgetsWindow;
}

class WidgetsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WidgetsWindow(QWidget *parent = nullptr);
    ~WidgetsWindow();

private slots:
    void on_dial_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_calendarWidget_activated(const QDate &date);

    void on_dateEdit_dateChanged(const QDate &date);

private:
    Ui::WidgetsWindow *ui;
};

#endif // WIDGETSWINDOW_H

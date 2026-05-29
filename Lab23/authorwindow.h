#ifndef AUTHORWINDOW_H
#define AUTHORWINDOW_H

#include <QMainWindow>
#include <QPixmap>

namespace Ui {
class AuthorWindow;
}

class AuthorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AuthorWindow(QWidget *parent = nullptr);
    ~AuthorWindow();

private:
    Ui::AuthorWindow *ui;
};

#endif // AUTHORWINDOW_H

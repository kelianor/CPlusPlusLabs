#include "authorwindow.h"
#include "ui_authorwindow.h"

AuthorWindow::AuthorWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AuthorWindow)
{
    ui->setupUi(this);
}

AuthorWindow::~AuthorWindow()
{
    delete ui;
}

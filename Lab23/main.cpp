#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qDebug() << "Supported formats:" << QImageReader::supportedImageFormats();
    w.show();
    return a.exec();
}

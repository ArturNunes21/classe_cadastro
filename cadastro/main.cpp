#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    Cadastro p1;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

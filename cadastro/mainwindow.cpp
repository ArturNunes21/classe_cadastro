#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    p1.setNome();
    p1.setIdade();
    p1.setCpf();

    p1.getNome();




}


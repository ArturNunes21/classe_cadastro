#include "ui_mainwindow.h"
#include "cadastro.h"
#include <QTextEdit>

cadastro::cadastro()
{

}

void cadastro::setNome()
{
    this->nome = ui->lineEdit->text();
}

void cadastro::setIdade()
{
    this->idade = ui->lineEdit_2->text();
}

void cadastro::setCpf()
{
    this->cpf = ui->lineEdit_3->text();
}

void cadastro::getNome()
{
    ui->textEdit->setText(nome);
}

void cadastro::getIdade()
{
    ui->textEdit->setText(idade);
}

void cadastro::getCpf()
{
    ui->textEdit->setText(cpf);
}


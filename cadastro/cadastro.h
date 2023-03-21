#ifndef CADASTRO_H
#define CADASTRO_H
#include <QString>

class cadastro
{
    private:
    QString nome, idade, cpf;

    public:
        cadastro();

        void setNome();
        void setIdade();
        void setCpf();

        void getNome();
        void getIdade();
        void getCpf();



};

#endif // CADASTRO_H

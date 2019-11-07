#ifndef FISICA_H
#define FISICA_H
#include <iostream>
#include "cliente.h"

using namespace std;

class Fisica : public Cliente{
    protected:

    string cpf;
    string rg;
    string nascimento;

    public:

    void setCpf(string c);
    void setRg(string c);
    void setNascimento(string c);

    string getCpf();
    string getRg();
    string getNascimento();

    void obterDados();
    void mostraDados();


};
#endif
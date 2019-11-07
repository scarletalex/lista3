#ifndef JURIDICA_H
#define JURIDICA_H
#include <iostream>
#include "cliente.h"

using namespace std;

class Juridica : public Cliente{
    protected:

    string cnpj;
    string inscricao;
    string nomef;

    public:

    void setCnpj(string n);
    void setInscricao(string n);
    void setNomeF(string n);
    
    string getCnpj();
    string getInscricao();
    string getNomeF();

    void obterDados();
    void mostraDados();

};
#endif
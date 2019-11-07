#ifndef QUESTAO3_H
#define QUESTAO3_H

#include <iostream>

using namespace std;

class Conta{
    protected:
    float saldo;

    public:

    Conta(float si);
    Conta();

    void fazerDeposito();
    void fazerSaque();
    void mostrarSaldo();

};
#endif
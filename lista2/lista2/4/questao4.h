#ifndef QUESTAO4_H
#define QUESTAO4_H
#include <iostream>
#include "questao3.h"

using namespace std;

class ContaCorrente : public Conta{

    protected:

    float limite;
    float saldoTotal;

    public:
    ContaCorrente(float s,float l);
    ContaCorrente();

    void setLimite(float l);
    float getLimite();

    void mostrarSaldo();
  
};
#endif
#include <iostream>
#include "questao4.h"

int main(){
    float s,l;

    cout<<"Digite seu saldo inicial:";
    cin>>s;

    cout<<"Digite seu limite:";
    cin>>l;

    ContaCorrente cc(s,l);
    cc.fazerDeposito();
    cc.fazerSaque();
    cc.mostrarSaldo();
}
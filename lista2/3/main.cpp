#include <iostream>
#include "questao3.h"

using namespace std;

int main(){
    Conta Conta1();
    Conta Conta2();

    float saldo1;
    float saldo2;

    cout<<"Cliente 1:";

    cout << "informe o saldo da conta1: ";
    cin >> saldo1;
    Conta conta1(saldo1);
  
    conta1.fazerDeposito();
    conta1.fazerSaque();
    conta1.mostrarSaldo();

    cout<<"Cliente 2:";
    cout << "informe o saldo da conta 2: ";
    cin >> saldo2;
    Conta conta2(saldo2);

    conta2.fazerDeposito();
    conta2.fazerSaque();
    conta2.mostrarSaldo();

    return 0;
}
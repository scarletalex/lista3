#include <iostream>
#include "questao3.h"

using namespace std;

Conta::Conta(float si){
        saldo=si;
        if(si<0){
        cout<<"Valor inválido de saldo, saldo será 0."<<endl;
        saldo=0; } 
    }

Conta::Conta(){
   saldo=0;
}

 void Conta::fazerDeposito(){
    float d;
    
    cout<<"Digite o valor do seu deposito:";
    cin>>d;
    saldo+=d;
 }

 void Conta::fazerSaque(){
    float saque;

    cout<<"Digite o valor para saque:";
    cin>>saque;
     if(saque>saldo){
        cout<<"Não há saldo suficiente."<<endl;
        saldo=saldo;
     } else {saldo-=saque;}
 }

 void Conta::mostrarSaldo(){
      cout<<"O seu saldo atual é:"<<saldo;
 }
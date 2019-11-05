#include <iostream>
#include "questao4.h"

 ContaCorrente::ContaCorrente(float s,float l):Conta(s){
    limite=l;
   
 }
 ContaCorrente::ContaCorrente(){
    limite=0;
    saldo=0;
 }
 void ContaCorrente::mostrarSaldo(){
    saldoTotal= saldo+limite;
   cout<<"O seu saldo total na sua conta é: "<< saldoTotal<<endl;
     
 }

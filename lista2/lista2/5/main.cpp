#include <iostream>
#include <locale.h>
#include "questao5.h"

using namespace std;

int main(){
    
    
    string ns;
    string d;
    int q;
    float p;

    cout<<"Digite o numero de serie do produto:";
    cin>>ns;
 
    cout<<"Digite a quantidade desse produto:";
    cin>>q;

    cout<<"Digite o preço desse produto:";
    cin>>p;

    Fatura Fatura(ns,d,q,p);
    Fatura.faturaTotal();


    
return 0;
}
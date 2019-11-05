#include <iostream>  
#include "questao6.h"  

using namespace std;

int main(){

int v, f;

cout<<"Digite o valor do sensor:"<<endl;
cin>>v;

cout<<"Digite a frequência:"<<endl;
cin>>f;

DadosSensor dadosSensor(v,f);

dadosSensor.printDados();

    return 0;
}
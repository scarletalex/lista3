#include <iostream>  
#include "questao6.h"  

using namespace std;

DadosSensor::DadosSensor(int v,int f){
    valor=v;
    frequencia=f;
}

int DadosSensor::getValor(){
    return valor;
}
int DadosSensor::getFrequencia(){
    return frequencia;
}

void DadosSensor::printDados(){
    cout<<"O sensor tem valor: "<<valor<< " e frequência: "<<frequencia<< endl;
}

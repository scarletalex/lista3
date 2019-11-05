#include <iostream>  
#include "questao11.h"  
#include <iomanip>

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
    cout<< getValor () << setw(17) <<getFrequencia() << endl;
}
#ifndef QUESTAO6_H
#define QUESTAO6_H 
#include <iostream>    

using namespace std;

class DadosSensor{
private:
    int valor, frequencia;

public:
    DadosSensor(int v, int f);
    int getValor();
    int getFrequencia();
    void printDados();
};
#endif


#include  <iostream>
#ifndef EX_H
#define  EX_H

using namespace std;

class  DadosSensor {

    private:

        int valor;
        int frequencia;

    public:

        DadosSensor();
        DadosSensor (int v, int f);

        int  getValor ();
        int  getFrequencia ();
        
        void  printDados ();
};

# endif
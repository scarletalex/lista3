#include  "ex.h"
#define  START  0

DadosSensor:: DadosSensor () {

    valor =0;
    frequencia = 0;
}
DadosSensor:: DadosSensor ( int v, int f) {

    valor = v;
    frequencia = f;
}

int  DadosSensor :: getValor () {

    return valor ;
}
int  DadosSensor :: getFrequencia () {

    return frequencia;
}

void  DadosSensor :: printDados () {

    cout << " \n Valor = " << getValor () << endl;
    cout << " Frequência = " << getFrequencia () << endl;
}
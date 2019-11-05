#include  <iostream>
#include "dadosSensor.h"  
#include  "funcao.h"

using namespace std;

int  main () {

    vector <int> valor;
    vector <DadosSensor> dados;

    ordenarVetor (valor);

    extremosVetor (valor);

    contarElementos (valor, dados);

    mostrarDados(dados);

    return  0 ;
}
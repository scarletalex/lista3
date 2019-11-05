#include  <iostream>
#include "dadosSensor.h"  
#include  "funcao.h"

using namespace std;

int  main () {

    vector <int> vetor;
    vector <DadosSensor> dados;

    ordenarVetor (vetor);

    extremosVetor (vetor);

    contarElementos (vetor, dados);

    mostrarDados(dados);

    return  0 ;
}
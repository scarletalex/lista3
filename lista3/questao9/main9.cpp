#include  <iostream>
#include  "questao9.h"
#include  "funcao.h"

using namespace std;

int  main () {

    vector <int> vetor;
    vector <DadosSensor> dados;

    ordenarVetor (vetor);

    extremosVetor (vetor);

    contarElementos (vetor, dados);
    
    entrada(dados);

    return  0 ;
}
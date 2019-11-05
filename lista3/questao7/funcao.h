#ifndef FUNCAO_H
#define FUNCAO_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "dadosSensor.h"  

using namespace std;

void ordenarVetor(vector <int> &v);

void extremosVetor(vector <int> v);

void contarElementos(vector <int> v, vector <DadosSensor> &a);

void mostrarDados(vector<DadosSensor>a);


#endif

    
 
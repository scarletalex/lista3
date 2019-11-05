#include "funcao.h"
#include <algorithm>
#include <fstream>
#include <vector>

ifstream arquivo;

void ordenarVetor(vector <int> &v){
    int valor;
    arquivo.open("questao2.txt");

    while(arquivo>>valor){
        v.push_back(valor);
    }
    sort(v.begin(), v.end());
}

void extremosVetor(vector <int> v){
    cout<<"Maior valor:"<<v[v.size()-1]<< endl;
    cout<<"Menor valor:"<<v[0]<<endl;
    cout<<endl;
}

void contarElementos(vector <int> v, vector <DadosSensor> &a){
    for(int i=0 ; i<1000; i++) {
        int f;
        f=count(v.begin(), v.end(), i);
        if(f>0)a.push_back(DadosSensor(i,f));
         arquivo.close();
    }
}

void mostrarDados(vector<DadosSensor>a){
     for(int i=0;i<a.size();i++){ 
        a[i].printDados();
        }
}
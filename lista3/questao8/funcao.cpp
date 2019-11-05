#include "funcao.h"
#include <algorithm>
#include <fstream>
#include <vector>

ifstream arquivo;

void ordenarVetor(vector <int> &v){
    int valor;
    arquivo.open("questao2.txt",ios::in);
    while(arquivo>>valor){
        v.push_back(valor);
    }
}

void extremosVetor(vector <int> v){
    sort(v.begin(), v.end());
    cout<<"Maior valor:"<<v[v.size()-1]<< endl;
    cout<<"Menor valor:"<<v[0]<<endl;
    cout<<endl;
}

void contarElementos(vector <int> v, vector <DadosSensor> &a){
    for(int i=0 ; i<1000; i++) {
        int f;
        f=count(v.begin(), v.end(), i);
        sort(a.begin(), a.end(),ordenar);
        if(f>0)a.push_back(DadosSensor(i,f));
         arquivo.close();
    }
}
bool ordenar(DadosSensor &a, DadosSensor &b){
    return a.getFrequencia()>b.getFrequencia();
}

void mostrarDados(vector<DadosSensor>a){
     for(int i=0;i<a.size();i++){ 
        a[i].printDados();
        }
}
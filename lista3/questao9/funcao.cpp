#include "funcao.h"
#include "questao9.h"
#include <algorithm>
#include <fstream>
#include <vector>
#include <iomanip>

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
void entrada(vector <DadosSensor>&a){
    ofstream entrada;
    entrada.open("dados.txt",ios::app);

    entrada<< " Valor " << setw (20) << " Frequência " << endl << endl;

    for( int i = 0 ; i <a. size (); i ++){
         entrada << a [i]. getValor () << setw (17) << a [i]. getFrequencia () << endl;  
    }
    entrada.close();
}

bool ordenar(DadosSensor &a, DadosSensor &b){
    return a.getFrequencia()>b.getFrequencia();
}
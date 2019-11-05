#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream arquivo;
    arquivo.open("questao2.txt",ios::in);

    int valor;
    vector <int> vetor;

    cout<<"valores inteiros: ";

    while(arquivo>>valor){
        vetor.push_back(valor);
    }
    
    sort(vetor.begin(), vetor.end());

    cout<<"Menor valor: "<<vetor[0]<<endl;
    cout<<"Maior valor: "<<vetor[vetor.size()-1]<<endl<<endl;
    
    for ( int i = 0 ; i <1000; i++) {
        int f;
        f=count(vetor.begin(), vetor.end(), i);
        if(f>0){cout << " O número: " << i << " se repete " <<f<< " vezes. " << endl ;}
    }
    arquivo.close();
    return 0;
}
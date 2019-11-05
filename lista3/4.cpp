#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){

    ifstream arquivo;
    arquivo.open("questao2.txt");

    int valor;
    vector <int> vetor;

    cout<<"valores inteiros: ";

    while(arquivo>>valor){
        vetor.push_back(valor);
    }
    sort(vetor.begin(), vetor.end());

    cout<<"Menor valor: "<<vetor[0]<<endl;
    cout<<"Maior valor: "<<vetor[vetor.size()-1]<<endl;
    
    for(auto elemento : vetor){
        cout<<elemento<<" " ;
    }
    arquivo.close();
    return 0;
}
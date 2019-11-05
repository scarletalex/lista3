#include <iostream>
#include <vector>
#include <fstream>

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

    for(auto elemento : vetor){
        cout<<elemento<<" "<< endl;
    }
    arquivo.close();
    return 0;
}
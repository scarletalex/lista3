#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    int valor, frequencia, temp, j;
    string v;
    ifstream entrada;

    entrada.open("dados.txt");

    getline (entrada, v);

    cout << "Qual o numero para pesquisar: ";
    cin >> temp;

    for(int i = 0; i < 500; i++){
        
        entrada >> valor;
        entrada >> frequencia;

        if(valor == temp){
            cout << temp<< " tem frequência: " << frequencia << endl;
            j++;
        } 
    }

    if(j== 0){
        cout << "O valor não consta no arquivo." << endl;
    }

    return 0;
}
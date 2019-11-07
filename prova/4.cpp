#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <float > valor;
    float v, media=0,mediana=0,somador=0, contador=0;
    string op = "nao";

    while(op!="sair"){

        cout << "Digite um valor inteiro:"<<endl;
        cin >> v;

        valor.push_back(v);

        cout << "Parar de adicinar, digite [sair]: " << endl;
        cin >> op;

        contador ++;
    }

    sort(valor.begin(),valor.end());

    cout<< "Valores ordenados: " << endl;
    
    for(auto elemento : valor ){
        cout<< elemento << endl;
        somador+=elemento;
    }

    media=somador/contador;

    cout<<"Media: "<< media << endl;
    
    if(valor.size()%2!=0){

       mediana= valor[valor.size()/2];

    }else{
        mediana= (valor[(valor.size()/2)] + valor[(valor.size()/2)-1])/2;
    }
    cout << "Mediana: "<< mediana << endl;

    return 0;
}
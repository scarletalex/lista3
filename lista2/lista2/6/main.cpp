#include <iostream>
#include <vector>
#include "questao6.h"

using namespace std;

int main(){

    vector <Empregado> emp;
    bool cadastro=true;
    string saida;

    while(cadastro){
        Empregado temp;
        temp.obterDados();
        

        emp.push_back(temp);
        cout<<"Cadastrar novo funcionario(sim/nao)? ";
        cin>>saida;
        if(saida=="nao"){ break;}
    }

    for(int i=0;i<emp.size();i++){
        emp[i].mostrarDados();
    }

    for(int i=0;i<emp.size();i++){
        emp[i].mostrarAumento();
    }
    
return 0;
}
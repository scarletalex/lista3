#include <iostream>
#include "questao6.h"
#define meses 12
#define porcento 1.1


using namespace std;


    void Empregado::setNome(string n){
        nome=n;
    }

    void Empregado::setSobrenome(string sn){
        sobrenome=sn;

    }

    void Empregado::setSalario(float s){
        salario=s;
        if(s<0){
            s=0;    
        } else {salario=s;}
    }

    string Empregado::getNome(){
        return nome;

    }
    string Empregado::getSobrenome(){
        return sobrenome;

    }
    float Empregado::getSalario(){
        return salario;
    }

    void Empregado::obterDados(){
        string n;
        string sn;
        float s;

        cout<<"Informe o nome do empregado:";
        cin>>n;

        cout<<"Informe o sobrenome do empregado:";
        cin>>sn;

        cout<<"Informe o salario do empregado:";
        cin>>s;

        setNome(n);
        setSobrenome(sn);
        setSalario(s);
    }
    
    void Empregado::mostrarDados(){
        
        cout<<"O empregado "<<nome<<" "<<sobrenome<<" tem salario anual é igual a "<< meses*salario <<endl;
    }

    void Empregado::mostrarAumento(){
        cout<<"O empregado "<<nome<<" "<<sobrenome;
        cout<<" tem salario anual com aumento de 10% é igual a "<< (float)porcento*meses*salario<<endl;
    }
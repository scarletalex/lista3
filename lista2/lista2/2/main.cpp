#include <iostream>
#include "questao2.h"

using namespace std;

int main(){

    int mes=0, dia=0, ano=0;

    cout<<"Data escolhida"<<endl;

    cout<<"Digite o dia:"<<endl;
    cin>>dia;

    cout<<"Digite o mês:"<<endl;
    cin>>mes;

    cout<<"Digite o ano:"<<endl;
    cin>>ano;
    
    Data data(dia,mes,ano);
 
    data.motrarDados();


    return 0;
}
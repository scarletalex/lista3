#include "menu.h"

#include <iostream>
#include <map>

using namespace std;

int main(){
    int i;
    
    do{
        cout<<"Digite [1] para inserir o nome e email"<<endl;
        cout<<"Digite [2] para apagar o nome ou email"<<endl;
        cout<<"Digite [3] para modificar o nome ou email"<<endl;
        cout<<"Digite [4] para mostrar os nomes e email"<<endl;
        cout<<"Digite [5] para sair"<<endl;
        cin>>i;
        menu(i);
    }while(i!=5);

    return 0;
}
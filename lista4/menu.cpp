#include "menu.h"

using namespace std;

string nome, email;
map <string, string> catalogo;

void menu(int a){
    switch(a){
        case 1: inserir(); break;
        case 2: apagar(); break;
        case 3: modificar(); break;
        case 4: show(); break;
        case 5: break;
        default: cout << "digite um numero de 1 a 5!" << endl;
        break;
    }
}

void inserir(){
    cin.ignore();
    cout << "Digite o nome: ";
    cin>>nome;

    cout << "Digite o email: ";
    cin>>email;

    catalogo[nome] = email;
}

void apagar(){

    cin.ignore();
    cout << "Digite o nome que deseja apagar: ";
    cin>> nome;

    if(catalogo.find(nome) != catalogo.end()){
        catalogo.erase(nome);
    }else cout << "Esse nome nao existe!" << endl; 
}

void modificar(){

    string temp;

    cin.ignore();
    cout << "Digite o nome que deseja modificar: ";
    cin>>nome;

    if(catalogo.find(nome) != catalogo.end()){

        cout << "Deseja alterar nome ou endereco(e-endereço,n-nome?";
        cin>>temp;

        if(temp == "n"){

            email = catalogo[nome];
            catalogo.erase(nome);

            cout << "Digite o novo nome: ";
            cin>> nome;
            catalogo[nome] = email;

        }else if(temp == "e"){
            
            cout << "Digite o novo email: ";
            cin>> email;
            catalogo[nome] = email;
        }
    }
}

void show(){
    for(auto i : catalogo) cout << "Nome: " << i.first << ", email: " << i.second << endl;
}


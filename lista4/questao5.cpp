#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    string local;
    map< string, map<string,string> > ocorrencia;
    string op;

    do{
        cout << "Insira o local: ";
        cin>>local;

        cout << "Insira o responsável: ";
        cin>>ocorrencia[local]["RESPONSAVEL"];

        cout << "Insira a prioridade: ";
        cin>>ocorrencia[local]["PRIORIDADE"];

        cout << "Se deseja parar, digite 'sim': ";
        cin >> op;
        cin.ignore();
    }while(op != "sim");

    cout <<"Local" << setw(20)<< "Responsável"<<setw(20)<< "Prioridade: " << endl;

    for (auto elemento : ocorrencia){
        cout <<elemento.first <<setw(20)<< elemento.second["RESPONSAVEL"] << setw(20)<< elemento.second["PRIORIDADE"] << endl;

    }

    return 0;
}
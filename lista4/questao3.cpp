#include <iostream>
#include <map>

using namespace std;

int main(){
    string op,nome;
    map<string, string> telefones;

    while(op!="sair"){
        cout<<"Digite o nome:"<<endl;
        cin>>nome;

        if(telefones.find(nome)!=telefones.end()){
            cout<<"Telefone:"<<telefones[nome]<<endl;
        }else{
            cout<<"Digite o telefone:"<<endl;
            cin>>telefones[nome];
        }
        cout<<"Digite 'sair'para parar de adicionar:"<<endl;
        cin>>op;
    }
    for(auto e : telefones){
        cout <<endl<<"Nome: "<< e.first  <<endl<<" Telefone:"<< e.second <<endl;
    }
    
    return 0;
}
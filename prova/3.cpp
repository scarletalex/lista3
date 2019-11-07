#include <iostream>
#include <map>

using namespace std;

int main(){
map<string,string>cadastro;
string op="nao",sobrenome,teste;

while(op!="sair"){

    cout << "Digite um sobrenome:"<<endl;
    cin >> sobrenome;

    if(cadastro.find(sobrenome)!=cadastro.end()){
        cout <<"Sobrenome ja usado."<<endl; 
        cout <<"Digite [sim] para sobescrevÊ-lo:"<<endl; 
        cin >> teste;

        if(teste=="sim"){
            cout << "Nome: "<< cadastro[sobrenome]<<endl;
            
        }
    }else{
        cout << "Digite um nome:"<<endl;
        cin >> cadastro[sobrenome];
    }

    cout << "Para não adiciona, digite [sair]"<<endl;
    cin>>op;
}

for(auto elemento : cadastro){
    cout<<" Nome: "<< elemento.first << " Sobrenome: "<< elemento.second<<endl;
}
return 0;
}
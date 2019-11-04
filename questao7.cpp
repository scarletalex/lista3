#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,map<string,string>> feira;
    string produto;

    while(produto!="sair"){
    cout<<"Digite o produto ou [sair] para não digitar:"<<endl;
    cin>>produto;

    cout<<"Digite o preço:"<<endl;
    cin>>feira[produto]["preco"];

    cout<<"Digite a quantidade:"<<endl;
    cin>>feira[produto]["quantidade"];
    
    }

    return 0;
}
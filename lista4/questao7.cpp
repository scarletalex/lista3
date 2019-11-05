#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,map<string,double>> feira;
    string produto, op;
    double valor=0,media=0,total=0,menor=10000000,maior=-1000000;

    while(op!="sair"){
        cout<<"Digite o produto:"<<endl;
        cin>>produto;

        cout<<"Digite o preco:"<<endl;
        cin>>feira[produto]["preco"];

        cout<<"Digite a quantidade:"<<endl;
        cin>>feira[produto]["quantidade"];

        cout<<"Digite [sair] para não adiconar:"<<endl;
        cin>>op;
        cin.ignore();
    }

    for(auto i: feira){
        valor+= feira[i.first]["preco"]*feira[i.first]["quantidade"];
        total+= feira[i.first]["quantidade"];

        if(feira[i.first]["preco"]*feira[i.first]["quantidade"] < menor){
            menor = feira[i.first]["preco"]*feira[i.first]["quantidade"];
        }
         if(feira[i.first]["preco"]*feira[i.first]["quantidade"] >maior){
           maior = feira[i.first]["preco"]*feira[i.first]["quantidade"];
        }
    }

    media= valor/total;

    for(auto i:feira){
       if(feira[i.first]["preco"]*feira[i.first]["quantidade"] == menor){
           cout<<"O produto mais barato: "<<i.first << ", com valor: "<<menor<<endl;
           continue;
       }
       if(feira[i.first]["preco"]*feira[i.first]["quantidade"] == maior){
           cout<<"O produto mais caro: "<<i.first << ", com valor: "<<maior<<endl;
           break;
       }
    }

   cout<<"Quantidade total de produtos: "<<total<<endl;
   cout<<"Valor total: "<<valor<<endl;
   cout<<"Media de precos:"<<media;

    return 0;
}
#include "fisica.h"

void Fisica :: setCpf(string c){
    if(c.size()==11){
        cpf=c;
    }else{
        cout<<"Valor invalido"<<endl;
        cpf="00000000000";
    }

}
void Fisica :: setRg(string c){
    if(c.size()==7){
        rg=c;
    }else{
        cout<<"Valor invalido"<<endl;
        rg="0000000";
    }
}
void Fisica :: setNascimento(string c){
    if(c.size()==8){
       nascimento=c;
    }else{
        cout<<"Valor invalido"<<endl;
        rg="00000000";
    }
}


string Fisica :: getCpf(){
    return cpf;
}
string Fisica :: getRg(){
   return rg;
}
string Fisica :: getNascimento(){
    return nascimento;
}

void Fisica :: obterDados(){
    string n,c,t,cp;
    string cpf,rg,d;

    cout<<"Digite o nome:"<< endl;
    cin>>n;
    setNome(n);

    cout<<"Digite o codigo:"<< endl;
    cin>>c;
    setCodigo(c);

    cout<<"Digite o telefone:"<< endl;
    cin>>t;
    setTelefone(t);

    cout<<"Digite o cep:"<< endl;
    cin>>cp;
    setCep(cp);

    cout<<"Digite o cpf:"<< endl;
    cin>>cpf;
    setCpf(n);

    cout<<"Digite o codigo:"<< endl;
    cin>>rg;
    setRg(rg);

    cout<<"Digite o telefone:"<< endl;
    cin>>d;
    setNascimento(d);

    mostraDados();
}
void Fisica :: mostraDados(){

    ofstream fisica;
    fisica.open("pessoa_fisica.txt", ios::app);

    fisica<<"Nome: "<<getNome()<<endl;
    fisica<<"Codigo: "<<getCodigo()<<endl;
    fisica<<"Telefone: "<<getTelefone()<<endl;
    fisica<<"Cep: "<<getCep()<<endl<<endl;

    fisica<<"Cpf: "<<getCpf()<<endl;
    fisica<<"Rg: "<<getRg()<<endl;
    fisica<<"Nascimento: "<<getNascimento()<<endl;
    
    fisica.close();
   
}

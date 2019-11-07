#include "juridica.h"


void Juridica :: setCnpj(string n){
    if(n.size()==12){
        cnpj=n;
    }else{
        cout<<"Valor invalido."<<endl;
        cnpj="000000000000";
    }
    
}
void Juridica::setInscricao(string n){
    if(n.size()==12){
        inscricao=n;
    }else{
        cout<<"Valor invalido."<<endl;
        inscricao="000000000000";
    }

}
void Juridica::setNomeF(string n){
    if(n.size()==12){
        nomef=n;
    }else{
        cout<<"Nome invalido."<<endl;
        nomef="IFPB";
    }

}
    
string Juridica :: getCnpj(){
    return cnpj;
}

string Juridica :: getInscricao(){
    return inscricao;
}

string Juridica :: getNomeF(){
    return nomef;
}

void Juridica::obterDados(){

string n,c,t,cp;
string cnpj,i,nf;

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

    cout<<"Digite o cnpj:"<< endl;
    cin>>cnpj;
    setCnpj(cnpj);

    cout<<"Digite o inscricao:"<< endl;
    cin>>i;
    setInscricao(i);

    cout<<"Digite o nome fantasia:"<< endl;
    cin>>nf;
    setNomeF(nf);
    
    mostraDados();
}
void Juridica::mostraDados(){

    ofstream juridica;
    juridica.open("pessoa_juridica.txt", ios::app);

    juridica<<"Nome: "<<getNome()<<endl;
    juridica<<"Codigo: "<<getCodigo()<<endl;
    juridica<<"Telefone: "<<getTelefone()<<endl;
    juridica<<"Cep: "<<getCep()<<endl<<endl;

    juridica<<"Cnpj: "<<getCnpj()<<endl;
    juridica<<"Inscricao estadual: "<<getInscricao()<<endl;
    juridica<<"Nome Fantasia: "<<getNomeF()<<endl;
    
    juridica.close();
}

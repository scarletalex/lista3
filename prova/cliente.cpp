  #include "cliente.h"

    void Cliente::setCodigo(string c){
        codigo=c;
    }

    void Cliente::setNome(string n){

        if(n.size() > 5){
            nome = n;
        }

        else {
            cout << "Nome invalido"<< endl;
            nome = "invalido";
        }
    }

    void Cliente::setTelefone(string t){

        if(t.size() == 9){
            telefone = t;
        } else{ 
            cout << "telefone invalido" << endl;
            telefone="000000000";
        }
    }

    void Cliente::setCep(string c){

        if(c.size()==8){
            cep=c;
        } else{
            cout << "cep invalido" << endl;
            cep="000000000";
        }
    }

    string Cliente::getCodigo(){
        return codigo;
    }
    string Cliente::getNome(){
        return nome;
    }
    string Cliente::getTelefone(){
        return telefone;
    }
    string Cliente::getCep(){
        return cep;
    }
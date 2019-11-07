#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <fstream>

using namespace std;

class Cliente{
    protected:

    string codigo;
    string nome;
    string telefone;
    string cep;

    public:

    void setCodigo(string c);
    void setNome(string n);
    void setTelefone(string t);
    void setCep(string c);

    string getCodigo();
    string getNome();
    string getTelefone();
    string getCep();

};
#endif
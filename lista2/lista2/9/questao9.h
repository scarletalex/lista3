#ifndef QUESTAO9_H
#define QUESTAO9_H
#include <iostream>

using namespace std;

class Fruta{
    protected:

    string nome;
    string cor;

    public:

    void setNome(string n);
    void setCor(string c);

    string getNome();
    string getCor();
};



#endif
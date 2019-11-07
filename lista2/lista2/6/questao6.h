#ifndef QUESTAO6_H
#define QUESTAO6_H
#include <iostream>

using namespace std;

class Empregado{
    private:
    string nome;
    string sobrenome;
    float salario;

    public:

    void setNome(string n);
    void setSobrenome(string sn);
    void setSalario(float s);

    void obterDados();
    void mostrarAumento();
    void mostrarDados();

    string getNome();
    string getSobrenome();
    float getSalario();

};
#endif
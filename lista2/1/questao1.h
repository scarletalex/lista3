#ifndef QUESTAO1_H
#define QUESTAO1_H
#include <iostream>

using namespace std;

class Aluno{
    private:
    string nome;
    string disciplina[100];
    float media;
    float nota[100];
    int contador;

    public:
    void coletaAluno();
    void mostrarAluno();

};
#endif
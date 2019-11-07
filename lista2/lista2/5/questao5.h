#ifndef QUESTAO5_H
#define QUESTAO5_H
#include <iostream>
#include <locale.h>

using namespace std;

class Fatura{
   
    private:
    string numeroSerie, descricao;
    int quantidade;
    float preco;

    public:
    Fatura(string ns,string d,int q,float p);
    
    void setNumeroSerie(string ns);
    void setDescricao(string d);
    void setQuantidade(int q);
    void setPreco(float p);

    string getNumeroSerie();
    string getDescricao();
    int getQuantidade();
    float getPreco();

    void faturaTotal();
    
};
#endif
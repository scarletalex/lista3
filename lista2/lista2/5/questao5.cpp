#include <iostream>
#include "questao5.h"
#include <locale.h>

using namespace std;

Fatura::Fatura(string ns,string d,int q,float p){
        setNumeroSerie(ns);
        setDescricao(d);
        setQuantidade(q);
        setPreco(p);
    }

void Fatura::setNumeroSerie(string ns){
    numeroSerie=ns;
}
void Fatura::setDescricao(string d){
    d="Resistores são dispositivos elétricos que transforma energia elétrica em calor";
    descricao=d;
}
void Fatura::setQuantidade(int q){
    quantidade=q;

    if(q<0){
        quantidade=0;
    }
}
void Fatura::setPreco(float p){
    preco=p;

    if(p<0){
        preco=0;
    }
}

string Fatura::getNumeroSerie(){
    return numeroSerie;
}
string Fatura::getDescricao(){
    return descricao;
}
int Fatura::getQuantidade(){
    return quantidade;
}
float Fatura::getPreco(){
    return preco;
}

void Fatura::faturaTotal(){
    cout<<endl;
    cout<<"Seu produto: "<<numeroSerie<<endl<<descricao<<endl<<" Sua Fatura é:"<<quantidade*preco;
 }
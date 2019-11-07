#ifndef QUESTAO2_H
#define QUESTAO2_H
#include <iostream>

using namespace std;

class Data{
    private:
        int dia,mes,ano;
    
    public:
        Data(int d, int m, int a);

        void motrarDados();

        void setMes(int m);
        int getMes();

        void setDia(int d);
        int getDia();

        void setAno(int a);
        int getAno(); 
};
#endif
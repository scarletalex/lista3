#include "questao1.h"
using namespace std;

void Aluno::coletaAluno(){

    float somador=0;

    cout<< "Digite o nome do aluno:"<<endl;
    getline(cin,nome);
    cout<<"Digite quantas Disciplinas para analisar:"<<endl;
    cin>>contador;

    
    for(int i=0;i<contador;i++){

        cout<<"Digite o nome da "<< i + 1 << " ª disciplina:"<<endl;
        cin.ignore();
        getline(cin,disciplina[i]);
        cout<<"Digite sua nota nessa disciplina:"<<endl;
        cin>>nota[i];
        somador= somador + nota[i]; 
    }

    media= somador/contador;
    
}

void Aluno::mostrarAluno(){
    cout<< "Aluno(a) " << nome;
    cout<< " tem média geral " << media << endl; 
   
      for(int i=0;i<contador;i++){
        cout<< " Na disciplina " << disciplina[i] << " nota= " <<nota[i] << endl; 
    }
}

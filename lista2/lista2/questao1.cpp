#include "aluno.h"
#include <iostream>

using namespace std;

//******VERIFICACAO DOS DADOS**********
string Aluno::setsequencia(string s){
  if(s.size() > 3){
      return s;
  }else{
      return "Erro";
  }
}

//*******VERIFICACAO DE NOTAS ENTRE 0 E 100*******
float Aluno::setNota(float nota){
  if(nota >= 0 or nota <= 100){
    return nota;
  }else{
    return 0;
  }
}

//********recebendo disciplina**********
string Aluno::getDisciplina(){
  return disciplinas;
}

///********CALCULO DAS MEDIAS*********
float Aluno::setMedia(vector <float> nota){

  float soma_notas = 0;
  
  for(int i = 0; i < nota.size(); i++){
      soma_notas += nota[i]; 
      }

  media = soma_notas/nota.size();
}

//*******PEGANDO AS NOTAS CALCULADAS******
float Aluno::getMedia(){
  return media;
}

//******COLETANDO OS DADOS***********
void Aluno::coleta_dados(){
    string nome_aluno, disciplina, op;
    float nota, temp_nota;

    cout << "Digite Nome do Aluno: ";
    cin >> nome_aluno;
    nome = nome_aluno;

    cout << "Digite o nome da diciplina: ";
    cin >> disciplina;

    do{      
    cout <<"Digite a nota: ";
      cin >> temp_nota;
      notas.push_back(setNota(temp_nota));

      cout << "Deseja colocar outra nota? " << endl;
      cin >> op;
      cin.ignore();

      }while(op == "sim");

}

  void Aluno::print(){
  cout << "Aluno: " << nome << endl;
  cout << "Disciplina: " << getDisciplina() <<endl;
  cout << "Media: " << getMedia() << endl;
}#include "aluno.h"
#include <iostream>

using namespace std;

//******VERIFICACAO DOS DADOS**********
string Aluno::setsequencia(string s){
  if(s.size() > 3){
      return s;
  }else{
      return "Erro";
  }
}

//*******VERIFICACAO DE NOTAS ENTRE 0 E 100*******
float Aluno::setNota(float nota){
  if(nota >= 0 or nota <= 100){
    return nota;
  }else{
    return 0;
  }
}

//********recebendo disciplina**********
string Aluno::getDisciplina(){
  return disciplinas;
}

///********CALCULO DAS MEDIAS*********
float Aluno::setMedia(vector <float> nota){

  float soma_notas = 0;
  
  for(int i = 0; i < nota.size(); i++){
      soma_notas += nota[i]; 
      }

  media = soma_notas/nota.size();
}

//*******PEGANDO AS NOTAS CALCULADAS******
float Aluno::getMedia(){
  return media;
}

//******COLETANDO OS DADOS***********
void Aluno::coleta_dados(){
    string nome_aluno, disciplina, op;
    float nota, temp_nota;

    cout << "Digite Nome do Aluno: ";
    cin >> nome_aluno;
    nome = nome_aluno;

    cout << "Digite o nome da diciplina: ";
    cin >> disciplina;

    do{      
    cout <<"Digite a nota: ";
      cin >> temp_nota;
      notas.push_back(setNota(temp_nota));

      cout << "Deseja colocar outra nota? " << endl;
      cin >> op;
      cin.ignore();

      }while(op == "sim");

}

  void Aluno::print(){
  cout << "Aluno: " << nome << endl;
  cout << "Disciplina: " << getDisciplina() <<endl;
  cout << "Media: " << getMedia() << endl;
}
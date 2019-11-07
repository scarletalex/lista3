#include <iostream>
#include <locale.h>
#include "questao1.h"

using namespace std;

int main(){
    
    setlocale(LC_ALL,"portuguese");

    Aluno aluno;

    aluno.coletaAluno();

    aluno.mostrarAluno();
    
    

    

return 0;
}
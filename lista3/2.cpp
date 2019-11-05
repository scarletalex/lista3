#include <iostream>   
#include <ctime>   
#include <fstream>

using namespace std;

int main(){

  int i=0;  
  ofstream arquivo;
  arquivo.open("questao2.txt");

  for(i;i<500;i++){
      arquivo<<rand()%1000<<endl;
  }

   arquivo.close();

  return 0;
}
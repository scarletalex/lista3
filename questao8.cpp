#include <iostream>
#include <map>
#include <fstream>

using namespace std;

int main(){
    
    ifstream arquivo;
    map <string,int> frequencia;
    string palavra;
    
    arquivo.open("texto.txt");
    
    while(arquivo>>palavra) frequencia[palavra]++;
    
    cout<<"Frequencia:" << endl;

    for(auto elemento : frequencia){
        cout << elemento.first << " -> frequencia: "<< elemento.second<<endl;
    } 

    return 0;
}
#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    map<string, string> ocorrencia;

    cout<<"Digite o local:"<<endl;
    cin>>ocorrencia["local"];

    cout<<"Digite a prioridade:"<<endl;
    cin>>ocorrencia["prioridade"];

    cout<<"Digite o responsavel:"<<endl;
    cin>>ocorrencia["responsavel"];

    for(auto e : ocorrencia){
        cout << endl<<e.first  << ":"<<setw(10)<< e.second <<endl;
    }
    
    return 0;
}
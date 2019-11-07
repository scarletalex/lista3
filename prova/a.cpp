#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparar(string a, string b){
    return a.size()>b.size();
}

int main(){
    vector<string>palavra;

    cout<<"Informe tres palavra"<<endl;
    for(int i=0; i<3; i++){
        string ent;
        cin >> ent;

        palavra.push_back(ent);
    }

    sort(palavra.begin(),palavra.end(),comparar);
    if(palavra[0].size()==palavra[1].size()&&palavra[0].size()==palavra[2].size()){
        cout<<"As palavras tem o mesmo tamanho"<<endl;
    }
    else{
    cout << "maior palavra: "<<palavra[0]<<endl;
    cout << "menor palavra: "<<palavra[2]<<endl;
    }

return 0;
}

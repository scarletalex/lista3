#include <iostream>
#include <map>
#include <math.h> 

using namespace std;
int main(){
    int n;
    map<int,int>lista;

    cout<<"Digite o valor para n:"<<endl;
    cin>>n;

    for(int i=1; i<=n;i++){
        lista[i]= pow(i,2);
    }
    
    for(auto elemento:lista){
        cout<<elemento.first<<">>"<<elemento.second<<endl;
    }

    return 0;
}
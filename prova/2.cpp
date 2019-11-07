#include <iostream>
#include <vector>
#include "cliente.h"
#include "fisica.h"
#include "juridica.h"

int main(){
    for(int i=0; i<3; i++){
        Fisica fisica;

        fisica.obterDados();
        cout<<endl;

        Juridica juridica;

        juridica.obterDados();
        cout<<endl;
}

    return 0;
}
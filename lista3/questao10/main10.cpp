# include  <iostream>
# include  <fstream>
# include  <iomanip>

using namespace std;

int  main () {
    int valor, frequencia;
    string v;
    ifstream entrada;

    entrada.open ("dados.txt" );

    getline (entrada, v);

    cout<< " Valor " << setw (20) << " Frequência " << endl << endl; 

    for (int i=0 ; i< 10 ;i ++) {
        
        entrada >> valor;
        entrada >> frequencia;

        cout << valor << setw (17)  << frequencia << endl;
    }

    return 0 ;
}
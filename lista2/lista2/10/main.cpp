#include <iostream>
#include "questao10.h"
#include "macaverde.h"
#include "banana.h"
#include "maca.h"

using namespace std;

int main(){

    Maca a ("vermelha");
	Banana b;
    MacaVerde c;
 
	cout << "A " << a.getNome() << " é " << a.getCor() << ".\n";
	cout << "A " << b.getNome() << " é " << b.getCor() << ".\n";
    cout << "A " << c.getNome() << " é " << c.getCor() << ".\n";

    return 0;
}
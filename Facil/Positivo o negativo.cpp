#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{  
    int numero;
    cout << "Introduce numero: ";
    cin >> numero;
    if(numero > 0)
       cout << endl << numero <<" es positivo\n";
    else if(numero < 0)
       cout << endl << numero <<" es negativo\n";
    else
       cout << endl << numero <<" no es positivo ni negativo\n";
}
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    float n1, n2;
    float suma, resta, multiplicacion;
    cout << "\nIntroduzca un numero: ";
    cin >> n1 ;
    cout << "\nIntroduzca otro numero: ";
    cin >> n2;
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    cout << fixed << setprecision(2);
    cout << "\nsuma: " << fixed << setprecision(2) << suma;                               
    cout << "\nresta: " << fixed << setprecision(2) << resta;
    cout << "\nmultiplicacion: " << fixed << setprecision(2) << multiplicacion;
}

// fixed= Es para que muestre la salida de numeros de punto flotante en notacion decimal fija
//setprecision(2)= dos cifras decimales despues del punto

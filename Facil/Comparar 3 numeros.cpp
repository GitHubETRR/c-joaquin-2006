#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    int n1, n2, n3;
    cout << "\nIntroduzca tres numeros enteros distintos ";
    cout << "\nPrimer numero: ";
    cin >> n1;
    cout << "\nSegundo numero: ";
    cin >> n2;
    cout << "\nTercer numero: ";
    cin >> n3;
    if(n1 > n2)
       if(n2 > n3)
          cout << "\nel mayor es " << n1 << endl;
       else
          cout << "\nel mayor es " << n3 << endl;
    else if(n2 > n3)
            cout << "\nel mayor es " << n2 << endl;
         else
            cout << "\nel mayor es " << n3 << endl;
}
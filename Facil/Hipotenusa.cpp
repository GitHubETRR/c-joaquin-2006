#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{  
    float cateto1, cateto2;
    cout << "Introduce cateto 1: ";
    cin >> cateto1;
    cout << "Introduce cateto 2: ";
    cin >> cateto2;
    cout << fixed << setprecision(2);
    cout << "\nLongitud de la hipotenusa: " << sqrt(pow(cateto1,2)+pow(cateto2,2)) << endl;     
}
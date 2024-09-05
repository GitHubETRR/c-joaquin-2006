#include <iostream>
using namespace std;
int main()
{
    int num,cont,ultimo;
    cont=1;     
    ultimo=0;
    do
    {
            cout << "Introduce numero positivo: ";
            cin >> num;
    }while(num<=0);  
	
	
    while(num>=ultimo)                          
    {
            ultimo=num;     
            do              
            {               
                cout << "Introduce numero positivo: ";
                cin >> num;
            }while(num<=0);
            cont++;        
    }                   
    cout << "\nEl numero que rompe la secuencia ascendente es " << num << endl;
    cout << "\nSe han introducido " << cont << " numeros" << endl;
}
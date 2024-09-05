#include <iostream>
using namespace std;
void pasa_a_mayusculas(char *);
int main (void)
{
    char cadena[80];
    cout << "Escriba una cadena de caracteres  ";
    cin.getline(cadena,80);
    pasa_a_mayusculas(cadena);
    cout << "Cadena en mayusculas: " << cadena << endl;
}
void pasa_a_mayusculas(char *s)
{
     while(*s)
     {
        *s=toupper(*s);
        s++;
     }
}
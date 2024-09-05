#include <iostream>
using namespace std;
int main(void)
{
   char nombre[40];
   cout << "Introduzca nombre: "; 
   cin.getline(nombre,40);   
   cout << "\nBuenos dias " << nombre << endl;   
}

//cin.getline(nombre,40), se utiliza para leer una linea completa de texto ingresada 
//por el usuario, y almacenarla en la variable "nombre" 
//cin.getline es una funcion de la biblioteca estandar de C++ que se utiliza para leer una linea completa 
//de texto desde la entrada estandar 
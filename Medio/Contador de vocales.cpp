#include <iostream>
using namespace std;

int cuenta_vocales(char *);

int main()
{
   char cadena[80];
   cout << "Introduce cadena: ";
   cin.getline(cadena, 80);  
   cout << "Numero de vocales: " << cuenta_vocales(cadena) << endl;
}
int cuenta_vocales(char *s) 
{
 int cont=0;
 while(*s) 
 {
    switch(toupper(*s)) 
     {                          
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':  cont++;
     }
     s++;
  }
  return cont;
}

//char cadena[80];: Declara un arreglo de caracteres llamado cadena que puede almacenar hasta 79 caracteres más el carácter nulo ('\0'), que marca el final de la cadena. El tamaño total del arreglo es 80.
//cin.getline(cadena, 80);: Lee una línea completa de texto ingresada por el usuario y la almacena en la variable cadena. Se leerán hasta 79 caracteres, dejando el espacio final para el carácter nulo.
//Función cuenta_vocales(char *s)
//Esta función cuenta cuántas vocales (a, e, i, o, u, tanto mayúsculas como minúsculas) hay en la cadena que se le pasa como argumento.
//Parámetros y Variables:
//char *s: Es un puntero que apunta al primer carácter de la cadena pasada a la función.
//int cont = 0;: Declara e inicializa una variable cont que se usará para contar las vocales.
//while(*s): Este bucle while continúa ejecutándose mientras *s no sea el carácter nulo ('\0'), es decir, mientras no haya llegado al final de la cadena.
//toupper(*s): Convierte el carácter actual a mayúscula. Esto permite que la función trate tanto las vocales minúsculas como mayúsculas de la misma manera.
//switch(toupper(*s)): Evalúa el carácter actual (convertido a mayúscula) para ver si es una vocal.
//Casos case:
//case 'A':, case 'E':, case 'I':, case 'O':, case 'U':: Si el carácter es una de las vocales, se incrementa el contador cont.
//s++: Avanza el puntero al siguiente carácter de la cadena.
//Después de recorrer toda la cadena, la función devuelve el valor de cont, que es el número total de vocales encontradas.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#define SALIR 4

struct Figura {
    string nombre;
    double diametro;
    double radio;
};

void menu(void);
void imprimir_Figura(const Figura& figura);
void calcular_area_circulo(void);
void calcular_area_cuadrado(void);
void calcular_area_triangulo(void);

int main() {
    menu();
    return 0;
}

void imprimir_Figura(const Figura& figura) {
    cout << "----------------------------------\n";
    cout << "Figura:" << figura.nombre << "\n";
    cout << "Diámetro: " << figura.diametro << "\n";
    cout << "Radio: " << figura.radio << "\n";
}

void menu(void) {
    int opcion;
    do {
        cout << "Opción N°1 = Calcular el área de un círculo\n";
        cout << "Opción N°2 = Calcular el área de un cuadrado\n";
        cout << "Opción N°3 = Calcular el área de un triángulo\n";
        cout << "Opción N°4 = Salir\n\n";
        cout << "Tu opción elegida es: ";
        cin >> opcion;
        if(opcion == 1) calcular_area_circulo();
        if(opcion == 2) calcular_area_cuadrado();
        if(opcion == 3) calcular_area_triangulo();
    } while(opcion != SALIR);
}

void calcular_area_circulo(void) {
    double radio;
    cout << "\nIngresa el radio del círculo: ";
    cin >> radio;
    double area = M_PI * radio * radio;
    Figura circulo = {"Círculo", 2 * radio, radio};
    imprimir_Figura(circulo);
    cout << "El área del círculo es: " << area << "\n\n";
}

void calcular_area_cuadrado(void) {
    double lado;
    cout << "\nIngresa el lado del cuadrado: ";
    cin >> lado;
    double area = lado * lado;
    Figura cuadrado = {"Cuadrado", lado, lado / sqrt(2)};
    imprimir_Figura(cuadrado);
    cout << "El área del cuadrado es: " << area << "\n\n";
}

void calcular_area_triangulo(void) {
    double base, altura;
    cout << "\nIngresa la base del triángulo: ";
    cin >> base;
    cout << "Ingresa la altura del triángulo: ";
    cin >> altura;
    double area = (base * altura) / 2.0;
    Figura triangulo = {"Triángulo", base, altura / 2};
    imprimir_Figura(triangulo);
    cout << "El área del triángulo es: " << area << "\n\n";
}









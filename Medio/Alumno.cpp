#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    float calificacion;

public:
    Estudiante(string n, int e, float c) {
        nombre = n;
        edad = e;
        calificacion = c;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Calificación: " << calificacion << endl;
    }

    void verificarAprobacion() {
        if (calificacion >= 6.0)
            cout << nombre << " ha aprobado." << endl;
        else
            cout << nombre << " no ha aprobado." << endl;
    }
};

int main() {
    Estudiante estudiante1("Luka Tiziano", 17, 8.5);
    Estudiante estudiante2("Valen", 12, 5.2);

    // Mostrar datos del primer estudiante
    cout << "Datos del primer estudiante:" << endl;
    estudiante1.mostrarDatos();
    estudiante1.verificarAprobacion();

    cout << endl;

    cout << "Datos del segundo estudiante:" << endl;
    estudiante2.mostrarDatos();
    estudiante2.verificarAprobacion();

    return 0;
}

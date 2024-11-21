#include <iostream>
#include <vector>
#include <string>

class Alumno {
private:
    std::string nombre;
    int edad;
    int anio;
    float calificacionTotal;

public:
    Alumno(std::string _nombre, int _edad, int _anio, float _calificacionTotal)
        : nombre(_nombre), edad(_edad), anio(_anio), calificacionTotal(_calificacionTotal) {}

    std::string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    int getAnio() const { return anio; }
    float getCalificacionTotal() const { return calificacionTotal; }

    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad
                  << ", Año: " << anio << ", Calificación Total: " << calificacionTotal << std::endl;
    }
};

Alumno ingresarAlumno(int num) {
    std::string nombre;
    int edad;
    int anio;
    float calificacionTotal;

    std::cout << "Ingrese el nombre del alumno " << num << ": ";
    std::cin.ignore(); // Limpiar el buffer de entrada
    std::getline(std::cin, nombre);
    
    std::cout << "Ingrese la edad del alumno " << num << ": ";
    std::cin >> edad;
    
    std::cout << "Ingrese el año en el que cursa el alumno " << num << ": ";
    std::cin >> anio;
    
    std::cout << "Ingrese la calificación total del alumno " << num << ": ";
    std::cin >> calificacionTotal;
    
    return Alumno(nombre, edad, anio, calificacionTotal);
}

int main() {
    const int numAlumnos = 2;
    std::vector<Alumno> listaAlumnos;

    // Ingresar información para 10 alumnos
    for (int i = 0; i < numAlumnos; ++i) {
        std::cout << "\n--- Ingresar información para el alumno " << (i + 1) << " ---\n";
        Alumno alumno = ingresarAlumno(i + 1);
        listaAlumnos.push_back(alumno);
    }

    // Mostrar información de todos los alumnos
    std::cout << "\n--- Información de los alumnos ---\n";
    for (const Alumno& alumno : listaAlumnos) {
        alumno.mostrarInformacion();
    }

    return 0;
}

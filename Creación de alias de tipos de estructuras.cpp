#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

typedef Estudiante MiEstudiante;
int main() {
    // Crear una instancia del alias de la estructura Estudiante
    MiEstudiante miEstudiante = {"Juan Perez", 20, 85.5};

    std::cout << "Estudiante:" << std::endl;
    std::cout << "Nombre: " << miEstudiante.nombre << std::endl;
    std::cout << "Edad: " << miEstudiante.edad << " años" << std::endl;
    std::cout << "Promedio: " << miEstudiante.promedio << std::endl;

    return 0;
}
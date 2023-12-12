#include <iostream>
#include <string>
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};
int main() {
    // Crear una instancia de la estructura Estudiante
    Estudiante estudiante1;
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 85.5;

    // Imprimir la información del estudiante
    std::cout << "Nombre: " << estudiante1.nombre << std::endl;
    std::cout << "Edad: " << estudiante1.edad << " años" << std::endl;
    std::cout << "Promedio: " << estudiante1.promedio << std::endl;

    return 0;
}

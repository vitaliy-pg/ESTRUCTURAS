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
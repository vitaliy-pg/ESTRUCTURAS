#include <iostream>
#include <string>
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};
Estudiante copiarEstudiante(const Estudiante& original) {
    Estudiante copia;  // Se crea una nueva instancia de Estudiante

    copia.nombre = original.nombre;
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    return copia;
}

int main() {
#include <iostream>
#include <string>
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};
Estudiante copiarEstudiante(const Estudiante& original) {
    Estudiante copia;  // Se crea una nueva instancia de Estudiante
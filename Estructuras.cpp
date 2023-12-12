#include <iostream>
#include <string>
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};
void agregarEstudiante(std::vector<Estudiante>& listaEstudiantes, const Estudiante& nuevoEstudiante) {
    listaEstudiantes.push_back(nuevoEstudiante);
}


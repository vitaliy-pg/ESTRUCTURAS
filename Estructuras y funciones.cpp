#include <iostream>
#include <string>
#include <vector>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// a. Pasar una estructura por valor como argumento
void imprimirEstudiantePorValor(Estudiante estudiante) {
    std::cout << "Estudiante (por valor):" << std::endl;
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << " años" << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

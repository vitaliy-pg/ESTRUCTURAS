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

    Estudiante estudianteOriginal = {"Juan Perez", 20, 85.5};
}
Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

// Imprimir la información del estudiante original
std::cout << "Estudiante Original:" << std::endl;
std::cout << "Nombre: " << estudianteOriginal.nombre << std::endl;
std::cout << "Edad: " << estudianteOriginal.edad << " años" << std::endl;
std::cout << "Promedio: " << estudianteOriginal.promedio << std::endl;


std::cout << "\nEstudiante Copiado:" << std::endl;
std::cout << "Nombre: " << estudianteCopia.nombre << std::endl;
std::cout << "Edad: " << estudianteCopia.edad << " años" << std::endl;
std::cout << "Promedio: " << estudianteCopia.promedio << std::endl;

return 0;
}

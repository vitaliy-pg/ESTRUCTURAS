#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Función para copiar una estructura Estudiante
Estudiante copiarEstudiante(const Estudiante& original) {
    Estudiante copia;  // Se crea una nueva instancia de Estudiante

    // Se copian los valores de la estructura original a la copia
    copia.nombre = original.nombre;
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}

int main() {
    // Crear una instancia de la estructura Estudiante
    Estudiante estudianteOriginal = {"Juan Perez", 20, 85.5};

    // Llamar a la función para copiar el estudiante
    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    // Imprimir la información del estudiante original
    std::cout << "Estudiante Original:" << std::endl;
    std::cout << "Nombre: " << estudianteOriginal.nombre << std::endl;
    std::cout << "Edad: " << estudianteOriginal.edad << " años" << std::endl;
    std::cout << "Promedio: " << estudianteOriginal.promedio << std::endl;

    // Imprimir la información del estudiante copiado
    std::cout << "\nEstudiante Copiado:" << std::endl;
    std::cout << "Nombre: " << estudianteCopia.nombre << std::endl;
    std::cout << "Edad: " << estudianteCopia.edad << " años" << std::endl;
    std::cout << "Promedio: " << estudianteCopia.promedio << std::endl;

    return 0;
}

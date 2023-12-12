#include <iostream>
#include <string>
#include <vector>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Función para agregar un estudiante a la lista
void agregarEstudiante(std::vector<Estudiante>& listaEstudiantes, const Estudiante& nuevoEstudiante) {
    listaEstudiantes.push_back(nuevoEstudiante);
}

// Función para imprimir la lista de estudiantes
void imprimirListaEstudiantes(const std::vector<Estudiante>& listaEstudiantes) {
    for (const auto& estudiante : listaEstudiantes) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << " años, Promedio: " << estudiante.promedio << std::endl;
    }
}

// Función para eliminar un estudiante de la lista por índice
void eliminarEstudiante(std::vector<Estudiante>& listaEstudiantes, int indice) {
    if (indice >= 0 && indice < listaEstudiantes.size()) {
        listaEstudiantes.erase(listaEstudiantes.begin() + indice);
        std::cout << "Estudiante eliminado correctamente." << std::endl;
    } else {
        std::cout << "Índice no válido." << std::endl;
    }
}

int main() {
    // Crear una lista de estudiantes
    std::vector<Estudiante> listaEstudiantes;

    // Parte a: Instanciación de estructuras
    Estudiante estudiante1 = {"Juan Perez", 20, 85.5};

    // Parte b: Instanciación con el operador malloc (NO RECOMENDADO EN C++)
    Estudiante* estudiante2 = new Estudiante{"Ana Gomez", 21, 90.0};

    // Parte c: Punteros y estructuras
    Estudiante* estudiante3 = new Estudiante();
    estudiante3->nombre = "Carlos Rodriguez";
    estudiante3->edad = 19;
    estudiante3->promedio = 88.8;

    // Parte d: Organización de la programación
    agregarEstudiante(listaEstudiantes, estudiante1);
    agregarEstudiante(listaEstudiantes, *estudiante2);
    agregarEstudiante(listaEstudiantes, *estudiante3);

    std::cout << "Lista de Estudiantes:" << std::endl;
    imprimirListaEstudiantes(listaEstudiantes);

    // Eliminar un estudiante de la lista por índice
    eliminarEstudiante(listaEstudiantes, 1);

    std::cout << "\nLista de Estudiantes después de la eliminación:" << std::endl;
    imprimirListaEstudiantes(listaEstudiantes);

    // Liberar memoria asignada con new
    delete estudiante2;
    delete estudiante3;

    return 0;
}
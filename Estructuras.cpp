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

oid imprimirListaEstudiantes(const std::vector<Estudiante>& listaEstudiantes) {
    for (const auto& estudiante : listaEstudiantes) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << " años, Promedio: " << estudiante.promedio << std::endl;
    }
}
void eliminarEstudiante(std::vector<Estudiante>& listaEstudiantes, int indice) {
    if (indice >= 0 && indice < listaEstudiantes.size()) {
        listaEstudiantes.erase(listaEstudiantes.begin() + indice);
        std::cout << "Estudiante eliminado correctamente." << std::endl;
    } else {
        std::cout << "Índice no válido." << std::endl;
    }
}
int main() {
    // Parte a: Constitución de una estructura
    struct Estudiante {
        std::string nombre;
        int edad;
        float promedio;
    };

    // Parte b: Instanciación de estructuras
    Estudiante estudiante1;
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 85.5;

    // Parte c: Instanciación con el operador malloc
    Estudiante *estudiante2 = static_cast<Estudiante*>(malloc(sizeof(Estudiante)));
    estudiante2->nombre = "Ana Gomez";
    estudiante2->edad = 21;
    estudiante2->promedio = 90.0;
    free(estudiante2);

    // Parte d: Punteros y estructuras
    Estudiante *estudiante3 = new Estudiante();
    estudiante3->nombre = "Carlos Rodriguez";
    estudiante3->edad = 19;
    estudiante3->promedio = 88.8;
    delete estudiante3;

    // Parte e: Organización de la programación
    std::vector<Estudiante> listaEstudiantes;

    agregarEstudiante(listaEstudiantes, estudiante1);
    agregarEstudiante(listaEstudiantes, estudiante2);
    agregarEstudiante(listaEstudiantes, estudiante3);

    std::cout << "Lista de Estudiantes:" << std::endl;
    imprimirListaEstudiantes(listaEstudiantes);

    eliminarEstudiante(listaEstudiantes, 1);

    std::cout << "\nLista de Estudiantes después de la eliminación:" << std::endl;
    imprimirListaEstudiantes(listaEstudiantes);

    return 0;
}
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
    // Crear una lista de estudiantes
    std::vector<Estudiante> listaEstudiantes;
    Estudiante estudiante1 = {"Juan Perez", 20, 85.5};
    Estudiante estudiante2 = {"Ana Gomez", 21, 90.0};
    Estudiante estudiante3 = {"Carlos Rodriguez", 19, 88.8};
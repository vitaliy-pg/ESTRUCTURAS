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

// b. Pasar una estructura por referencia como argumento
void imprimirEstudiantePorReferencia(const Estudiante& estudiante) {
    std::cout << "Estudiante (por referencia):" << std::endl;
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << " años" << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

// c. Pasar una estructura por dirección como argumento
void imprimirEstudiantePorDireccion(const Estudiante* estudiante) {
    if (estudiante) {
        std::cout << "Estudiante (por direccion):" << std::endl;
        std::cout << "Nombre: " << estudiante->nombre << std::endl;
        std::cout << "Edad: " << estudiante->edad << " años" << std::endl;
        std::cout << "Promedio: " << estudiante->promedio << std::endl;
    } else {
        std::cout << "Error: Estudiante nulo." << std::endl;
    }
}

// d. De la programación funcional a la programación orientada a objetos
class ListaEstudiantes {
public:
    void agregarEstudiante(const Estudiante& estudiante) {
        listaEstudiantes.push_back(estudiante);
    }

    void imprimirListaEstudiantes() const {
        std::cout << "Lista de Estudiantes:" << std::endl;
        for (const auto& estudiante : listaEstudiantes) {
            std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << " años, Promedio: " << estudiante.promedio << std::endl;
        }
    }
private:
    std::vector<Estudiante> listaEstudiantes;
};

int main() {
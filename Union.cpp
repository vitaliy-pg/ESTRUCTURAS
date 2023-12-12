#include <iostream>
#include <variant>
#include <string>

int main() {
    // Definir un tipo para la variable
    using MiVariable = std::variant<int, float, std::string>;

    // Crear una variable de tipo MiVariable e inicializar con un entero
    MiVariable miVariable = 42;

    // Acceder al valor y mostrarlo
    if (std::holds_alternative<int>(miVariable)) {
        std::cout << "Valor entero: " << std::get<int>(miVariable) << std::endl;
    }

    // Cambiar el valor a un flotante
    miVariable = 3.14f;

    // Acceder al valor y mostrarlo
    if (std::holds_alternative<float>(miVariable)) {
        std::cout << "Valor flotante: " << std::get<float>(miVariable) << std::endl;
    }

    // Cambiar el valor a una cadena de caracteres
    miVariable = std::string("Hola, mundo!");

    // Acceder al valor y mostrarlo
    if (std::holds_alternative<std::string>(miVariable)) {
        std::cout << "Valor cadena: " << std::get<std::string>(miVariable) << std::endl;
    }

    return 0;
}
#include <iostream>
#include <string>
union MiUnion {
    int entero;
    float flotante;
    std::string cadena;
};
int main() {
    MiUnion miVariable;
}
miVariable.entero = 42;
std::cout << "Valor entero: " << miVariable.entero << std::endl;


miVariable.flotante = 3.14f;
std::cout << "Valor flotante: " << miVariable.flotante << std::endl;
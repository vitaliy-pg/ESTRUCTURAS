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
#include <iostream>
#include <string>

struct Alumno {
    std::string nombre;
    std::string codigo;
    int nota[3];
    int promedio[3];
};

int main() {
    Alumno estudiantes[3]; 
    Alumno* ptrEstudiante = estudiantes;

    std::cout << "DATOS DE LOS ESTUDIANTES" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Ingresaremos los datos. "<< std::endl;
        std::cin>>"Ingrese su nombre: ">> std::endl;
        std::cout << "Nombre: " << (ptrEstudiante + i)->nombre << std::endl;
        std::cout << "Notas: ";
        for (int j = 0; j < 3; ++j) {
            std::cout << (ptrEstudiante + i)->nota[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
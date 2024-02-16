#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    std::string nombre;
    std::string codigo;
    int nota[3];
    int promedio;
};

int main() {
    Alumno estudiantes[3];
    Alumno* ptrEstudiante = estudiantes;
    cout << "DATOS DE LOS ESTUDIANTES" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Ingresaremos los datos del estudiante " << i + 1 << ":" << endl;
        cout << "Ingrese su nombre: ";
        cin >> ptrEstudiante[i].nombre;
        cout << "Ingrese su codigo: ";
        cin >> ptrEstudiante[i].codigo;
        int suma_notas = 0;
        for (int j = 0; j < 3; ++j) {
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> ptrEstudiante[i].nota[j];
            suma_notas += ptrEstudiante[i].nota[j];
        }
        ptrEstudiante[i].promedio = suma_notas / 3;
    }

    cout << "\nDATOS FINALES DE LOS ALUMNOS" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "Nombre: " << ptrEstudiante[i].nombre << endl;
        cout << "Codigo: " << ptrEstudiante[i].codigo << endl;
        cout << "Notas: ";
        for (int j = 0; j < 3; j++) {
            cout << ptrEstudiante[i].nota[j] << " ";
        }
        cout << endl;
        cout << "Promedio: " << ptrEstudiante[i].promedio << endl;
    }

    return 0;
}

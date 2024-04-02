#include <iostream>
using namespace std;

struct Notas {
    int codigo;
    float nota1;
    float nota2;
    float nota3;
    float definitiva;
};

int main() {
    Notas estudiantes[10];
    float promedio = 0;

    // Ingreso de datos
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el codigo del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].codigo;
        cout << "Ingrese la primera nota del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nota1;
        cout << "Ingrese la segunda nota del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nota2;
        cout << "Ingrese la tercera nota del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nota3;

        // Cálculo de la nota definitiva
        estudiantes[i].definitiva = (estudiantes[i].nota1 * 0.3) + (estudiantes[i].nota2 * 0.3) + (estudiantes[i].nota3 * 0.4);

        // Suma de las notas para el cálculo del promedio
        promedio += estudiantes[i].definitiva;
    }

    // Impresión de resultados
    cout << "\nNotas definitivas de los estudiantes:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Estudiante " << i+1 << ": " << estudiantes[i].definitiva << endl;
    }

    // Cálculo y impresión del promedio
    promedio /= 10;
    cout << "\nPromedio del curso: " << promedio << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

struct Asignatura {
    string programa;
    int codigo;
    string nombre;
    int nivel;
    int creditos;
    string tipo;
};

int main() 
{
    Asignatura Asig[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese los datos de la asignatura " << i+1 << endl;
        cout << "Programa: ";
        cin >> Asig[i].programa;
        cout << "Código: ";
        cin >> Asig[i].codigo;
        cout << "Nombre: ";
        cin >> Asig[i].nombre;
        cout << "Nivel: ";
        cin >> Asig[i].nivel;
        cout << "Créditos: ";
        cin >> Asig[i].creditos;
        cout << "Tipo: ";
        cin >> Asig[i].tipo;
        cout << endl;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Datos de la asignatura " << i+1 << endl;
        cout << "Programa: " << Asig[i].programa << endl;
        cout << "Código: " << Asig[i].codigo << endl;
        cout << "Nombre: " << Asig[i].nombre << endl;
        cout << "Nivel: " << Asig[i].nivel << endl;
        cout << "Créditos: " << Asig[i].creditos << endl;
        cout << "Tipo: " << Asig[i].tipo << endl;
        cout << endl;
    }

    return 0;
}

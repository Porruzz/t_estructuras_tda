# include <iostream>

using namespace std;

struct Biblioteca{
    string titulo;
    int fechaPublicacion;
    string autor;
    int cantidad;
    float precio;
};

int main(){
    Biblioteca bib[10];

    for(int i = 0; i < 10; i++){
        cout << "Ingrerse el titulo de la publicacion " << i + 1 << ": ";
        cin >> bib[i].titulo;
        cout << "Ingrese la fecha de publicacion de la publicacion " << i + 1 << ": ";
        cin >> bib[i].fechaPublicacion;
        cout << "Ingrese el autor de la publicacion " << i + 1 << ": ";
        cin >> bib[i].autor;
        cout << "Ingrese la cantidad de la publicacion " << i + 1 << ": ";
        cin >> bib[i].cantidad;
        cout << "Ingrese el precio de la publicacion " << i + 1 << ": ";
        cin >> bib[i].precio;
    }
    cout << "\nDatos de las publicaciones registradas:\n";
    for(int i = 0; i < 10; i++){
        cout << "Publicacion " << i + 1 << ":\n";
        cout << "Titulo: " << bib[i].titulo << endl;
        cout << "Fecha de publicacion: " << bib[i].fechaPublicacion << endl;
        cout << "Autor: " << bib[i].autor << endl;
        cout << "Cantidad: " << bib[i].cantidad << endl;
        cout << "Precio: " << bib[i].precio << endl;
    }
    return 0;
}
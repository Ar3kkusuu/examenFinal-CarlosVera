// Carlos Vera
#include <iostream>
#include <string>
using namespace std;

// Prototipos de funciones
void desencriptarPalabra(string palabraEncriptada);

int main() {
    string palabraEncriptada;
    cout << "Carlos Vera" << endl;
    cout << "Ingrese la palabra encriptada: ";
    cin >> palabraEncriptada;

    // Desencriptar la palabra e imprimir todas las posibilidades
    cout << "Las posibles palabras desencriptadas son:" << endl;
    desencriptarPalabra(palabraEncriptada);

    return 0;
}

// Definición de la función para desencriptar
void desencriptarPalabra(string palabraEncriptada) {
    for (int clave = 1; clave <= 5; clave++) {
        string posiblePalabra = palabraEncriptada;
        for (int i = 0; i < posiblePalabra.length(); i++) {
            posiblePalabra[i] = posiblePalabra[i] - clave; // Restar la clave al valor ASCII
        }
        cout << "Con clave " << clave << ": " << posiblePalabra << endl;
    }
}

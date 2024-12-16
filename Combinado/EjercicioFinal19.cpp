// Carlos Vera
#include <iostream>
#include <string>
using namespace std;

// Prototipos de funciones
string encriptarPalabra(string palabra, int clave);

int main() {
    string palabra;
    int clave;
    cout << "Carlos Vera" << endl;
    cout << "Ingresa una palabra para encriptar: ";
    getline(cin, palabra);

    // Validar que la clave esté en el rango 1-5
    do {
        cout << "Ingresa una clave de encriptacion (un numero del 1-5): ";
        cin >> clave;
    } while (clave < 1 || clave > 5);  // Asegurarse que la clave esté entre 1 y 5

    // Encriptar la palabra
    string palabraEncriptada = encriptarPalabra(palabra, clave);

    cout << "La palabra encriptada es: " << palabraEncriptada << endl;

    return 0;
}

// Definición de la función para encriptar
string encriptarPalabra(string palabra, int clave) {
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = palabra[i] + clave; // Sumar la clave al valor ASCII de cada letra
    }
    return palabra;
}



// Carlos Vera
#include <iostream>
using namespace std;

int main() {
    int numeros[5], numeroReferencia;
    cout << "Carlos Vera" << endl;
    cout << "Ingresa un numero de referencia: ";
    cin >> numeroReferencia;

    cout << "Ingresa cinco numeros:" << endl;

    bool todosMayores = true; // Inicialmente asumimos que todos son mayores
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
        // Actualizamos el valor de `todosMayores` sin `if`
        todosMayores = todosMayores && (numeros[i] > numeroReferencia);
    }

    // Usamos operador ternario para imprimir el resultado
    cout << (todosMayores ?
            "Todos estos numeros son mayores que el numero de referencia" :
            "No todos estos numeros son mayores que el numero de referencia")
         << endl;

    return 0;
}

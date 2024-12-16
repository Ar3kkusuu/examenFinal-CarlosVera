// Carlos Vera
#include <iostream>
using namespace std;

void identificadorNumero(int n) {
// Determinar si el número es positivo, negativo o cero
    int tipo;
    if (n > 0) {
        tipo = 1;
    } else if (n < 0) {
        tipo = -1;
    } else {
        tipo = 0;
    }

// Usar switch para manejar los casos
    switch (tipo) {
        case 1:
            cout << "El numero ingresado es positivo" << endl;
            break;
        case -1:
            cout << "El numero ingresado es negativo" << endl;
            break;
        case 0:
            cout << "El numero ingresado es 0" << endl;
            break;
        default:
            cout << "Error inesperado" << endl;
    }
}

int main() {
    int n;
    cout << "Carlos Vera" << endl;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << endl;
    identificadorNumero(n);
    return 0;
}

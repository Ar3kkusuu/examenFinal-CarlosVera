//Carlos Vera
#include <iostream>
using namespace std;
int cuadradoDeUnNumero(int numeroUno) {
    return numeroUno * numeroUno;
}

int cuboDeUnNumero(int numeroUno) {
    return numeroUno * numeroUno * numeroUno;
}

int main() {
    int opcion;
    int numeroUno;

    cout << "Carlos Vera" << endl;
    do {
        cout << "MENU" << endl;
        cout << "1. Cuadrado de un numero" << endl;
        cout << "2. Cubo de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingresa una opcion del (1-3): ";
        cin >> opcion;

        if (opcion < 1 || opcion > 3) {
            cout << "Valor invalido." << endl;
        } else if (opcion == 3) {
            cout << "Bye bye!" << endl;
            break;
        } else {
            cout << "Ingrese un numero:" << endl;
            cin >> numeroUno;

            switch (opcion) {
                case 1:
                    cout << "El resultado es: " << cuadradoDeUnNumero(numeroUno) << endl;
                    break;
                case 2:
                    cout << "El resultado es: " << cuboDeUnNumero(numeroUno) << endl;
                    break;
            }
        }
        cout << endl;
    } while (true);
    return 0;
}

// Carlos Vera
#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Carlos Vera" << endl;
    // Solicitar al usuario un número del 1 al 7
    cout << "Coloca del 1-7 para obtener el dia de la semana: ";
    cin >> dia;

    // Usar switch para imprimir el día correspondiente
    switch (dia) {
        case 1:
            cout << " Es = a Lunes" << endl;
            break;
        case 2:
            cout << " Es = a Martes" << endl;
            break;
        case 3:
            cout << " Es = a Miercoles" << endl;
            break;
        case 4:
            cout << " Es = a Jueves" << endl;
            break;
        case 5:
            cout << " Es = a Viernes" << endl;
            break;
        case 6:
            cout << " Es = a Sabado" << endl;
            break;
        case 7:
            cout << " Es = a Domingo" << endl;
            break;
        default:
            cout << "Solo hay 7 dias en la semana." << endl;
            break;
    }

    return 0;
}

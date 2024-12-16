//Carlos Vera
#include <iostream>
using namespace std;

int suma(int numeroUno, int numeroDos) {
    return numeroUno + numeroDos;
}

int resta(int numeroUno, int numeroDos) {
    return numeroUno - numeroDos;
}

int multiplicacion(int numeroUno, int numeroDos) {
    return numeroUno * numeroDos;
}

float division(int numeroUno, int numeroDos) {
    if (numeroDos == 0) {
        cout << "Indefinida. " << endl;
        return 0;
    }
    return static_cast<float>(numeroUno) / static_cast<float>(numeroDos);
}

int main() {
    int opcion;
    int numeroUno, numeroDos;
        cout << "Carlos Vera" << endl;
    do {
        cout << "Calculadora super basica" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion (1-5): ";
        cin >> opcion;

        if (opcion < 1 || opcion > 5) {
            cout << "Valor invalido. Ingrese un valor valido." << endl;
        } else if (opcion == 5) {
            cout << "Bye bye!" << endl;
            break;
        } else {
            cout << "Ingrese dos numeros:" << endl;
            cout << "Primer numero: ";
            cin >> numeroUno;
            cout << "Segundo numero: ";
            cin >> numeroDos;

            switch (opcion) {
                case 1:
                    cout << "El resultado de la suma es: " << suma(numeroUno, numeroDos) << endl;
                    break;
                case 2:
                    cout << "El resultado de la resta es: " << resta(numeroUno, numeroDos) << endl;
                    break;
                case 3:
                    cout << "El resultado de la multiplicacion es: " << multiplicacion(numeroUno, numeroDos) << endl;
                    break;
                case 4:
                    cout << "El resultado de la division es: " << division(numeroUno, numeroDos) << endl;
                    break;
            }
        }
        cout << endl;
    } while (true);
    return 0;
}

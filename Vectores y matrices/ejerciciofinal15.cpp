//Carlos Vera
#include <iostream>
using namespace std;
int main() {
    int matriz1[2][2], matriz2[2][2], resultado[2][2];
    cout << "Carlos Vera" << endl;
    cout << "Ingresa numeros para la primera matriz 2x2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemento en la fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingresa numeros para la segunda matriz 2x2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemento en la fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "El resultado de x de esas 2 matrices es:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Carlos Vera
#include <iostream>
using namespace std;

void determinarOrden(int numeroUno, int numeroDos, int numeroTres) {
    bool ordenAscendente = (numeroUno <= numeroDos && numeroDos <= numeroTres);
    bool ordenDescendente = (numeroTres <= numeroDos && numeroDos <= numeroUno);

    // Imprimir resultado utilizando ternarios
    cout << (ordenAscendente ? "Los numeros que has ingresado estan en orden ascendente" :
           (ordenDescendente ? "Los numeros que has ingresado estan en orden descendente" :
           "Los numeros que has ingresado estan desordenados"));
}

int main() {
    int numeroUno, numeroDos, numeroTres;
    cout << "Carlos Vera" << endl;
    cout << "Ingrese tres numeros: " << endl;
    cout << "Primer numero: ";
    cin >> numeroUno;
    cout << "Segundo numero: ";
    cin >> numeroDos;
    cout << "Tercer numero: ";
    cin >> numeroTres;
    cout << endl;

    determinarOrden(numeroUno, numeroDos, numeroTres);
    return 0;
}

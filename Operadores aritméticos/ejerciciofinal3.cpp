//Carlos Vera
#include <iostream>
#include <algorithm>
using namespace std;
float promedio(int numeroUno, int numeroDos, int numeroTres){
     return (numeroUno + numeroDos + numeroTres) / 3;
}
float diferenciaEntreMayores(int numeroUno, int numeroDos){
    return numeroUno - numeroDos;
}
int main() {
    float numeroUno, numeroDos, numeroTres;
    cout << "Carlos Vera" << endl;
    cout << "Ingrese tres numeros: " << endl;
    cout << "Primer numero: ";
    cin >> numeroUno;
    cout << "Segundo numero: ";
    cin >> numeroDos;
    cout << "Tercer numero: ";
    cin >> numeroTres;

    float mayor = max({numeroUno, numeroDos, numeroTres});
    float menor = min({numeroUno, numeroDos, numeroTres});

    cout << "El promedio es: " << promedio(numeroUno, numeroDos, numeroTres) << endl;
    cout << "La diferencia entre el mayor numero y el menor numero es: " << diferenciaEntreMayores(mayor, menor) << endl;

    return 0;
}

//Carlos Vera
#include <iostream>
using namespace std;

void compararNumeros(int numeroUno, int numeroDos){
    // Usamos operadores lógicos para determinar el mensaje
    bool esMayor = numeroUno > numeroDos;
    bool esMenor = numeroUno < numeroDos;

    // Operador ternario para imprimir los resultados
    cout << (esMayor ? "El primer numero es mayor al segundo" :
           (esMenor ? "El segundo numero es mayor al primero" : "Ambos numeros son iguales"));
}

int main(){
    int numeroUno, numeroDos;
    cout << "Carlos Vera" << endl;
    cout << "Ingrese dos numeros: " << endl;
    cout << "Primer numero: ";
    cin >> numeroUno;
    cout << "Segundo numero: ";
    cin >> numeroDos;

    compararNumeros(numeroUno, numeroDos);
    return 0;
}

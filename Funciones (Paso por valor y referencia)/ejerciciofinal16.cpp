//Carlos Vera
#include <iostream>
using namespace std;
int sumaDeDosParametros(int numeroUno, int numeroDos){
    return numeroUno + numeroDos;
}
int main(){
    int numeroUno, numeroDos;
    cout << "Carlos Vera" << endl;
    cout << "Ingresa dos numeros" << endl;
    cout << "Primer numero: ";
    cin >> numeroUno;
    cout << "Segundo numero: ";
    cin >> numeroDos;

    cout << "El resultado de la + es: " << sumaDeDosParametros(numeroUno, numeroDos) << endl;
    return 0;
}

//Carlos Vera
#include <iostream>
using namespace std;
int suma(int numeroUno, int numeroDos){
    return numeroUno + numeroDos;
}
int resta(int numeroUno, int numeroDos){
    return numeroUno - numeroDos;
}
int multiplicacion(int numeroUno, int numeroDos){
    return numeroUno * numeroDos;
}
float division(int numeroUno, int numeroDos) {
    if (numeroDos == 0) {
        cout << "Indefinida" << endl;
        return 0;
    }
    return static_cast<float>(numeroUno) / static_cast<float>(numeroDos);
}
int main(){
    int numeroUno, numeroDos;

    cout << "Carlos Vera - Ingresa 2 numeros" << endl;
    cout << "Primer numero: \n";
    cin >> numeroUno;
    cout << "Segundo numero: \n";
    cin >> numeroDos;
    cout << endl;
    cout << "El resultado de la suma es: \n" << suma(numeroUno, numeroDos) << endl;
    cout << "El resultado de la resta es: \n" << resta(numeroUno, numeroDos) << endl;
    cout << "El resultado de la multiplicacion es: \n" << multiplicacion(numeroUno, numeroDos) << endl;
    cout << "El resultado de la division es: \n" << division(numeroUno, numeroDos) << endl;
    return 0;
}



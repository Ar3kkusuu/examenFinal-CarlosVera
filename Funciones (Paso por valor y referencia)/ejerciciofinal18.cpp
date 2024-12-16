//Carlos Vera
#include <iostream>
using namespace std;
void calcularMayor(int numeroUno, int numeroDos, int numeroTres, int &numeroMmayor){
   if (numeroUno >= numeroDos && numeroUno >= numeroTres) {
        numeroMmayor = numeroUno;
    } else if (numeroDos >= numeroUno && numeroDos >= numeroTres) {
        numeroMmayor = numeroDos;
    } else {
        numeroMmayor = numeroTres;
    }
}

int main(){
    int numeroUno, numeroDos, numeroTres, numeroMmayor;
    cout << "Carlos Vera" << endl;
    cout << "Ingresa 3 numeros" << endl;
    cout << "Primer numero: ";
    cin >> numeroUno;
    cout << "Segundo numero: ";
    cin >> numeroDos;
    cout << "Tercer numero: ";
    cin >> numeroTres;
    calcularMayor(numeroUno, numeroDos, numeroTres, numeroMmayor);
    cout << "El numero mayor es: " << numeroMmayor << endl;
    return 0;
}


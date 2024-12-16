//Carlos Vera
#include <iostream>
using namespace std;
void intercambiar(int &numeroUno, int &numeroDos){
    int temp = numeroUno;
    numeroUno = numeroDos;
    numeroDos = temp;
}

int main(){
    int numeroUno = 545, numeroDos = 454;
    cout << "Carlos Vera" << endl;
    cout << "Antes de intercambiar:   " << numeroUno << " - " << numeroDos << endl;
    intercambiar(numeroUno, numeroDos);
    cout << "Despues de intercambiar: " << numeroUno << " - " << numeroDos << endl;
    return 0;
}

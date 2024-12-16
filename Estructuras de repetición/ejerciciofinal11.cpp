//Carlos Vera
#include <iostream>
using namespace std;
int main(){
    int n, suma;
    cout << " Carlos Vera " << endl;

    do{
        cout << "Ingrese un numero (Y el ultimo debe ser negativo): ";
        cin >> n;
        if (n >= 0) {
            suma += n;
        }
    }while(n >= 0);
    cout << "la suma total de los numeros es: " << suma << endl;
   return 0;
}

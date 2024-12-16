//Carlos Vera
#include <iostream>
using namespace std;
#define numero 5
void invertirVector(int vector[numero]) {
    for (int i = 0; i < numero / 2; i++) {
        int temp = vector[i];
        vector[i] = vector[numero - 1 - i];
        vector[numero - 1 - i] = temp;
    }
}

int main() {
    int vector[numero];
    for(int i = 0; i < 5; i++){
        cout << "Carlos Vera" << endl;
        cout << "Numero para la posicion " << i + 1 << ": " <<endl;
        cin >> vector[i];
    }
    invertirVector(vector);
    cout << "Vector invertido: ";
    for (int i = 0; i < numero; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}

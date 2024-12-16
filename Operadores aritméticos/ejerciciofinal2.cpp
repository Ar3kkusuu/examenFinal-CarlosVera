//Carlos Vera
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1416;
    double radio, area, circunferencia;
    cout << "Carlos Vera - Ingresa el radio del circulo: ";
    cin >> radio;

    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    cout << "Area: \n" << area << endl;
    cout << "Circunferencia: \n" << circunferencia << endl;

    return 0;
}

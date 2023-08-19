#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double PI = 3.14159; 
    double radio, perimetro, area;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    perimetro = 2 * PI * radio;
    area = PI * pow(radio, 2); 

    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El area del circulo es: " << area << endl;

    return 0;
}
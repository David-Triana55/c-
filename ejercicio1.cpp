#include <iostream>
#include <cmath> // Incluir la librería para funciones matemáticas

using namespace std;

int main() {
    double PI = 3.14159; // Valor de PI
    double radio, perimetro, area;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Calcular el perímetro y el área
    perimetro = 2 * PI * radio;
    area = PI * pow(radio, 2); // Usar la función pow para elevar al cuadrado

    // Mostrar resultados
    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El area del circulo es: " << area << endl;

    return 0;
}
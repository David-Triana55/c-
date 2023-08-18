#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c,discriminante,solucion1,solucion2,solucion;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    // Calcula el discriminante
    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        solucion1 = (-b + sqrt(discriminante)) / (2 * a);
        solucion2 = (-b - sqrt(discriminante)) / (2 * a);

        cout << "Las soluciones son: " << solucion1 << " y " << solucion2 << endl;
    } else if (discriminante == 0) {
        solucion = -b / (2 * a);

        cout << "La única solución es: " << solucion << endl;
    } else {
        cout << "La ecuación no tiene soluciones reales." << endl;
    }

    return 0;
}

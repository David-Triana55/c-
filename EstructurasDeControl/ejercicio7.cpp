#include <iostream>

using namespace std;

int main() {
    int numero;
    bool esPrimo = true;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 1) {
        esPrimo = false;  // Si el número es 0 o 1, no es primo
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;  // Si encuentra un divisor, no es primo
                break;  // Salir del bucle
            }
        }
    }

    if (esPrimo) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}

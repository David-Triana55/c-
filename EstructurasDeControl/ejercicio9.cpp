#include <iostream>

using namespace std;

int main() {
    int n;
    int suma = 0;

    cout << "Ingrese un numero entero positivo n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingrese un número entero positivo." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            suma = suma + i;
        }
        cout << "La suma de los primeros " << n << " numeros naturales es: " << suma << endl;
    }

    return 0;
}

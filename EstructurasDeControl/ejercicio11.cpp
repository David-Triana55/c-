#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int minimo; // 5

    if (num1 < num2) { // 5 y 10
        minimo = num1;
    } else {
        minimo = num2;
    }

    int mcd = 0;

        for (int i = 1; i <= minimo; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                mcd = i;
            }
        }
        

    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}

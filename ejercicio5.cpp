#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    cout << "Ingresa el valor del primer cateto: ";
    cin >> cateto1;

    cout << "Ingresa el valor del segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}
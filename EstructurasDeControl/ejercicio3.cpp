#include <iostream>

using namespace std;

int main() {
    
    int ingresado = 0;
    int contador = 0;
    int suma = 0;

    while (contador < 5) {
        cout << "ingrese un valor: ";
        cin >> ingresado;
        suma = suma + ingresado;
        contador++;
    }
    cout << suma << endl;

    return 0;
}
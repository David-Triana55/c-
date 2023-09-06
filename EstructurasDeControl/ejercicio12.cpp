#include <iostream>

using namespace std;

void imprimirMultiplosDe7(int n) {
    if (n <= 0) {
        cout << "Por favor, ingrese un valor válido para 'n'." << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        int multiplo = 7 * i;
        cout << multiplo << " ";
    }
    
    cout << endl;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de multiplos de 7 que desea imprimir: ";
    cin >> n;

    if (n < 0) {
        cout << "error";
    } else {
        for(int i = 1; i <= n; i++ ){
            int multiplo = 7 * i;
            cout << multiplo << " ";
        }

    }


    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int cantidad,vecesDivididas;
    int denominaciones[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    cout << "Introduce la cantidad en euros: ";
    cin >> cantidad;


    for (int i = 0; i < 9; i++) {

    vecesDivididas = cantidad / denominaciones[i]; // 543 / 500 = 1 | 43 / 20 = 2 |
    cantidad = cantidad % denominaciones[i]; // 43 | 3 

    // cout << cantidad << endl; 

        if (vecesDivididas > 0) {
            cout << vecesDivididas << " billete de: " << denominaciones[i] << " euros" << endl;
        } 
    }

    return 0;
}

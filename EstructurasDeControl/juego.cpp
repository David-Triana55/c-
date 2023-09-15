#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int numeroAleatorio = rand() % 50 + 1;
    int intentoUsuario;

    cout << "Bienvenido al juego de Adivina el Número!" << endl;

    do {
        cout << "Adivina el número (entre 1 y 50): ";
        cin >> intentoUsuario;

        if (intentoUsuario < numeroAleatorio) {
            cout << "El número es mayor. Intenta de nuevo." << endl;
        } else if (intentoUsuario > numeroAleatorio) {
            cout << "El número es menor. Intenta de nuevo." << endl;
        } else {
            cout << "¡Felicidades!" << endl;
        }
    } while (intentoUsuario != numeroAleatorio);

return 0;
}
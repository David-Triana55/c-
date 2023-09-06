#include <iostream>

using namespace std;

int main() {
    int suma = 0;

    for (int i = 4; i <= 400; i+=4 ) {
        cout << i << " ";
        suma = suma + i;

    }

    cout << "la suma de la serie es: " << suma << endl ;

    return 0;
}

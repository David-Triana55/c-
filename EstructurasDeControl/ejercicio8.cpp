#include <iostream>

using namespace std;

int main()
{
    int numero, suma;


        while(true) {
            cout << "ingrese un numero: " ;
            cin >> numero;

            if(!numero == 0) {
                suma = numero + suma;

            } else {
                cout << suma << endl;
                break;
            }
        }
    
    return 0;
}

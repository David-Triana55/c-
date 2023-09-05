#include <iostream>

using namespace std;

int main()
{   
    int numero1, numero2,numero3, producto;

    cout << "ingrese el primer numero: ";
    cin >> numero1;

    cout << "ingrese el segundo numero: ";
    cin >> numero2;
    cout << "ingrese el tercero numero: ";
    cin >> numero3;

    if(numero1 >= 0) {
       producto =  numero1 * numero2 * numero3 ;
        cout << "el producto de los 3 numeros es: " << producto << endl;
    } else {
        cout << "la suma de los 3 numeros es: " << (numero1 + numero2 +  numero3) << endl ;
    }
    
    return 0;
}

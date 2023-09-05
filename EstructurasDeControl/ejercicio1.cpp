#include <iostream>

using namespace std;


int main()
{   
    int numero1 , numero2, numero3, numero4;

    cout << "ingrese el primer numero: ";
    cin >> numero1;

    cout << "ingrese el segundo numero: ";
    cin >> numero2;
    cout << "ingrese el tercero numero: ";
    cin >> numero3;
    cout << "ingrese cuarto numero: ";
    cin >> numero4;

    if (numero1 > numero2 && numero1 > numero3 && numero1 > numero4){
        cout<< "el numero mayor es: " << numero1;
    } else if(numero2 > numero1 && numero2 > numero3 && numero2 > numero4) {
        cout<< "el numero mayor es: " << numero2;
    } else if (numero3 > numero1 && numero3 > numero2 && numero3 > numero4) {
        cout<< "el numero mayor es: " << numero3;
    } else {
        cout<< "el numero mayor es: " << numero4;

    }
    


    
    return 0;
}

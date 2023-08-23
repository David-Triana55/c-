#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int numero1, numero2, numero3 , numero4, resultado;

    cout<< "ingrese el primer numero: " << endl; 
    cin>> numero1;
    cout<< "ingrese el segundo numero: " << endl; 
    cin>> numero2;
    cout<< "ingrese el tercer numero: " << endl; 
    cin>> numero3;
    cout<< "ingrese el cuarti numero: " << endl; 
    cin>> numero4;

    resultado = numero1 + numero2 + numero3 + numero4;

    cout << "la suma de todos los numeros es:" << resultado << endl;
   

    return 0;
}
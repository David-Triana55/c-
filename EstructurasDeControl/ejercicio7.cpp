#include <iostream>

using namespace std;

int main() {
    int inicio, fin;

    cout << "Ingrese el valor inicial del rango: ";
    cin >> inicio;

    cout << "Ingrese el valor final del rango: ";
    cin >> fin;

    if (inicio <= fin) {
        cout << "Números primos en el rango de " << inicio << " a " << fin << ": ";
        
        for (int numero = inicio; numero <= fin; numero++) {
            if (numero < 2) {
                continue; 
            }
            
            bool esPrimo = true;
            
            for (int divisor = 2; divisor * divisor <= numero; divisor++) {
                if (numero % divisor == 0) {
                        esPrimo = false;
                    break;
                }
            }
            if (esPrimo) {
                cout << numero << " "; 
            }
        }
        
        cout << endl;
    } else {
        cout << "El valor inicial debe ser menor o igual al valor final." << endl;
    }


    return 0;
}

    // ?    int divisor = 2;
    // ?     while (divisor * divisor <= numero) {
    // ?     if (numero % divisor == 0) {
    // ?         esPrimo = false;
    // ?         break;
    // ?     }
    // ?     divisor++;
    // ? }

    // cout << 10 % 4 << endl;



    // ! #include <iostream>
    // !
    // ! int main() {
    // !     int numero, suma = 0;
    // !
    // !     std::cout << "Por favor ingrese un número entero: ";
    // !     std::cin >> numero;
    // !
    // !     // Asegurarse de que el número sea positivo
    // !     if (numero < 0) {
    // !         numero = -numero;
    // !     }
    // !
    // !     while (numero > 0) {
    // !         int digito = numero % 10; // Obtener el último dígito
    // !         suma += digito; // Sumar el último dígito a la suma
    // !         numero /= 10; // Eliminar el último dígito
    // !     }
    // !
    // !     std::cout << "La suma de los dígitos es: " << suma << std::endl;
    // !
    // !     return 0;
    // ! }
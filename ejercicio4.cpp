#include <iostream>
#include <cmath> // Incluir la librería para funciones matemáticas

using namespace std;

int main() {
    double trianguloAltura, trianguloBase, area;

    cout<< "digite la altura del triangulo: " << endl;
    cin>> trianguloAltura;

     cout<< "digite la base del triangulo: " << endl;
    cin>> trianguloBase;


    area = (trianguloAltura * trianguloBase) / 2;
    // Mostrar resultados
    
    cout << "El area del Triangulo es: " << area << endl;

    return 0;
}
#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double trianguloAltura, trianguloBase, area;

    cout<< "digite la altura del triangulo: " << endl;
    cin>> trianguloAltura;

    cout<< "digite la base del triangulo: " << endl;
    cin>> trianguloBase;


    area = (trianguloAltura * trianguloBase) / 2;
    
    cout << "El area del Triangulo es: " << area << endl;

    return 0;
}
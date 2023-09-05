#include <iostream>

using namespace std;

int main() {
    int segundos, minutos, horas, dias;

    cout << "Introduce una cantidad de segundos: ";
    cin >> segundos;

    /* % el modular nos sirve para darnos el residio de la división en entero
     y reasignar los valores de la variable segundos */

    dias =  segundos / (24 * 3600);  // 86.000 segundos => 1 día
    
    segundos = segundos % (24 * 3600);   

    horas = segundos / 3600;        // 3600s => 1 hora

    segundos = segundos % 3600;

    minutos = segundos / 60;  

    segundos = segundos % 60;


    cout << "Dias: " << dias << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}

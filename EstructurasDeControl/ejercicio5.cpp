#include <iostream>

using namespace std;

int main(){
    double horasTrabajadas, valorHora, res;

    cout << "Ingrese el valor de horas trabajas en la semana: ";
    cin >> horasTrabajadas;


    cout << "Ingrese el valor de la hora de trabajo: ";
    cin >> valorHora;


    if(horasTrabajadas <= 40) {
        res = horasTrabajadas * valorHora;
        cout << res << endl;
    } else {
        double suma = (horasTrabajadas - 40) * 1.7 * valorHora;
        res = suma + (40 * valorHora);
        cout << res << endl;
    }
    
    return 0;
}

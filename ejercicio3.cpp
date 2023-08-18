#include <iostream>

using namespace std;


int main() {
    double tarifaHoraria;
    int horasDiarias;


    cout<< "Ingrese la tarifa horaria: ";
    cin>> tarifaHoraria;
    cout<< "Ingrese el número de horas trabajadas diariamente: ";
    cin>> horasDiarias;

    double salarioSemanal = tarifaHoraria * horasDiarias; 

   
    cout << "El salario semanal del trabajador es: " << salarioSemanal << " dinero." << std::endl;

    return 0;
}
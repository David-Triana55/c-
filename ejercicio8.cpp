#include <iostream>

using namespace std;

int main() {
    double notaTeoria, notaPracticas, notaProblemas,calificacionFinal ;

    cout << "Ingrese la nota de teoría: ";
    cin >> notaTeoria;

    cout << "Ingrese la nota de prácticas: ";
    cin >> notaPracticas;

    cout << "Ingrese la nota de problemas: ";
    cin >> notaProblemas;

    calificacionFinal = (notaTeoria * 0.3) + (notaPracticas * 0.3) + (notaProblemas * 0.4);

    cout << "La calificación final es: " << calificacionFinal <<endl;

    return 0;
}

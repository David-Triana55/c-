#include <iostream>

using namespace std;

int main(){
    int nota;

    cout << "Ingrese su nota definitiva: ";
    cin >> nota;

    if(nota >= 0 && nota <= 50) {
        if(nota == 50) {
        cout << "Excelente";
        } else if (nota >= 40 && nota <= 49){
            cout << "sobresaliente";
        } else if(nota >= 30 && nota <= 39 ) {
            cout << "Aprobado";
        } else{
            cout << "Repobrado!!";
        }

    } else {
        cout << "Error!!";
    }

    
    return 0;
}

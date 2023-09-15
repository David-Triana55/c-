#include <iostream>

using namespace std;

int main()
{
    long telefonos[5]; // {"3008550592"} 
    int indice;
    long buscarNumero;

    long numeroTelefono;
    
    for (int i = 0; i < 5; i++){
        cout << "Introduce el numero telefonico del integrante " << (i +1) << ":";
        cin >> numeroTelefono;

        telefonos[i] = numeroTelefono;
    }

    for (int j = 0; j < 5; j++){
        cout << telefonos[j] << endl;
    }
        cout << "digite idice de la posicion del numero telefonico: ";
        cin >> indice;

    if(indice >= 1 && indice <= 5){
        cout <<"el indice " << indice << " es: "  << telefonos[indice - 1]<< endl;
    } else {
        cout << "indice no encontrado" << endl;
    }

    cout << "Indique que numero desea buscar: ";
    cin >> buscarNumero;

    bool numeroEncontrado;

    for(int p = 1; p < 5; p++) {
        if (buscarNumero == telefonos[p - 1] ) {
            cout << "el numero telefonico esta en la posicion" << " " << p << endl;
            numeroEncontrado = true;
        } 
    }

    if(!numeroEncontrado) {
        cout << "error no encontrado en la posicion" << endl;
    } 





    long numeroMaximo = telefonos[1];  // [1,2,3,4,5]
    for (int k = 0; k < 5; k++) {
        if(telefonos[k] > numeroMaximo) {
            numeroMaximo = telefonos[k];
        }
    }
    cout << "el numero con el mayor valor es "<< numeroMaximo;
    
    return 0;
}

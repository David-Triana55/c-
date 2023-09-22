#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Tamano = 5;

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
    cout << "El numero con el mayor valor es "<< numeroMaximo << endl;



    // sort( <inicio_de_la_serie>, <final_de_la_serie>, <funcion_de_comparacion> );
    
    sort(telefonos, telefonos + Tamano);
    
        cout<<"Los numeros en orden son: ";
        for (int l = 0; l != Tamano; l++)
            cout << telefonos[l]<<",";
    
    
    return 0;
}
#include <iostream>
using namespace std;

void busquedaBinaria(long telefonos [], long numeroBuscar, int inferior, int superior ) {  
    if(inferior > superior) {
        cout<<" no exist key" << endl;
    }
    else {
        int mid = (inferior + superior) / 2;
        if(numeroBuscar == telefonos[mid]) {   
            cout << mid << endl;
        } else if ( numeroBuscar < telefonos[mid]) {
            return busquedaBinaria(telefonos, numeroBuscar,inferior, mid - 1);
        } else {
            return busquedaBinaria(telefonos, numeroBuscar,mid + 1, superior);
        }
    }  
}

int main() {
    // ! menu
    // ! ingresar
    // ! mayor 
    // ! ordenarlos

    int cuantos;
    int indice;
    long buscarNumero;
    long numeroTelefono;
    int menu;

    cout << "cuantos numeros quiere ingresar: ";
    cin >> cuantos;

    long telefonos[cuantos]; // {"3008550592"} 

    // ! cuantos quiere ingresar
    
    for (int i = 0; i != cuantos; i++){
        cout << "Introduce el numero telefonico del integrante " << (i +1) << ":";
        cin >> numeroTelefono;
        telefonos[i] = numeroTelefono;
    }
    
    while (menu != 0) {
        cout << "marque numero correspondiente:" << endl;
        cout << "0- finalizar menu" << endl;
        cout << "1- Buscar numero por posicion" << endl;
        cout << "2- Buscar un numero" << endl;
        cout << "3- Saber que numero es mayor" << endl;
        cout << "4- Ver los numeros de menor a mayor" << endl;
        cout << "5- Busqueda binaria de un numero que ingreso" << endl;
        cout << "el numero marcado es: ";
        cin >> menu;

        if(menu == 1) {
            for (int j = 0; j < cuantos; j++){
                cout << telefonos[j] << endl;
            }
            cout << "digite idice de la posicion del numero telefonico: ";
            cin >> indice;
            if(indice >= 1 && indice <= 5){
                cout <<"el indice " << indice << " es: "  << telefonos[indice - 1]<< endl;
            
            } else {
                cout << "indice no encontrado" << endl;
            
            }

        } else if (menu == 2) {
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

        } else if (menu == 3) {

            long numeroMaximo = telefonos[1];  // [1,2,3,4,5]
            for (int k = 0; k < 5; k++) {
                if(telefonos[k] > numeroMaximo) {
                    numeroMaximo = telefonos[k];
                }
            }
            cout << "El numero con el mayor valor es "<< numeroMaximo << endl;
            

        } else if (menu == 4) {

            for (int l = 0;l < cuantos; l++){
                for(int j = 0; j < cuantos - 1; j++){
                        if (telefonos[j] > telefonos[j + 1]){
                        int tmp = telefonos[j];
                        telefonos[j] = telefonos[j + 1];
                        telefonos[j + 1] = tmp;
                    }
                }
            }
        
            for (int l = 0; l < cuantos ; l++){
                cout<<telefonos[l]<<"\n";
            }

            

        } else if (menu == 5) {
        // (arreglo, numero,0, telefonos -1)
            cout<<"Ingrese el numero que desea buscar: ";
            cin>> buscarNumero;

            busquedaBinaria(telefonos,buscarNumero,0, cuantos -1);
            


        } 
    }
    return 0;
}
            // sort( <inicio_de_la_serie>, <final_de_la_serie>, <funcion_de_comparacion> );

            // ! sort(telefonos, telefonos + Tamano);

            //     cout<<"Los numeros en orden son: ";
            //     for (int l = 0; l != Tamano; l++)
            //         cout << telefonos[l]<<",";

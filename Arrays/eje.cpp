#include <iostream>
//  TOSKA 

using namespace std;

int main(){
    long telefonos[5]; // {"3008550592"} 
    int indice;
    long buscarNumero;
    int largo=5;
    long numeroTelefono;
    int E=7;

for (int i = 0; i < 5; i++){
        cout << "Introduce el numero telefonico del integrante " << (i +1) << ":";
        cin >> numeroTelefono;
        telefonos[i] = numeroTelefono;
}


    while (E==7){
        cout<<"Bienvenido a CHANGUA CON CHOCOLATE.INC \n Ingrese el numero de su opcion:"
        <<"\n 1. Ingresar los numeros. \n 2. Buscar indice de numero. \n 3. Ordenar numeros. \n 4. Mostrar numeros." 
        <<"\n 5. Buscar numero. \n 6. Mostrar mayor. \n 7. Repetir menu.\n 0. Finalizar. \n";
        cin>>E;

        if(E == 1){
            for (int i = 0; i < 5; i++){
                cout << "Introduce el numero telefonico del integrante " << (i +1) << ":";
                cin >> numeroTelefono;
                telefonos[i] = numeroTelefono;
            }
            cout<<"\n Para repetir menu ingrese 7, para finalizar ingrese 0.";
            cin>>E;
        }

        if(E == 2){
            cout << "digite idice de la posicion del numero telefonico: ";
            cin >> indice;

            if(indice >= 1 && indice <= 5){
                cout <<"el indice " << indice << " es: "  << telefonos[indice - 1]<< endl;
            } else {
                cout << "indice no encontrado" << endl;
            }
                cout<<"\n Para repetir menu ingrese 7, para finalizar ingrese 0.";
                cin>>E; 
        }


        if(E == 3){
            for (int l=0;l<largo; l++){
                for(int j=0;j<largo - 1; j++){
                        if (telefonos[j]>telefonos[j + 1]){
                        int tmp = telefonos[j];
                        telefonos[j] =telefonos[j + 1];
                        telefonos[j + 1]= tmp;
                    }
                }
            }
        for (int l = 0; l < largo; l++){
            cout<<telefonos[l]<<"\n ";
        }   
        cout<<"\n Para repetir menu ingrese 7, para finalizar ingrese 0.";
        cin>>E;
        }

        if(E == 4){            
            for (int l = 0; l < largo; l++){
                cout<<telefonos[l]<<"\n ";
            }
            cout<<"\n Para repetir menu ingrese 7, para finalizar ingrese 0.";
            cin>>E;
        }

        if(E == 5){                            
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

            if(!numeroEncontrado) {
                cout << "error no encontrado en la posicion" << endl;
            }
            cout<<"\n Para repetir menu ingrese 7, para finalizar ingrese 0.";
            cin>>E;
        }
        if(E == 6){
            long numeroMaximo = telefonos[1];  // [1,2,3,4,5]
            for (int k = 0; k < 5; k++) {
                if(telefonos[k] > numeroMaximo) {
                    numeroMaximo = telefonos[k];
                }
            }
            cout << "el numero con el mayor valor es "<< numeroMaximo;
            cout<<"\n Para repetir menu ingrese 7, para finalizar ingrese 0.";
            cin>>E;
        }


        if(E != 1 && E!=2 && E!=3 && E!=4 && E!=5 && E!=6 && E!=7 && E !=0){
            cout<<"Opcion no valida.";
            cout<<"\n Para repetir menu ingrese 7, para finalizar ingrese 0.";
            cin>>E;
        }
    }

    return 0;
}
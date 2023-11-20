#include <iostream>
using namespace std;

int main(){

    int matrizA[3][4];
    int matrizD[3][4];
    int matrizW[3][4];


    int matrizB[8]; // los digitos de la fila 0 y 2
    int matrizC[6]; // los digitos la columna 1 y 2

    int matrizE[5]; // pares de la matriz D
    int matrizH[5]; // inpares de la matriz D

    int matrizZ[4]; // numeros multiplos de 7
    int matrizY[4]; // numeros multiplos de 11


    int matrizP[9]; // union de la matriz E y Z
    int matrizQ[4]; // suma de la matriz H y Y


    cout << "ingrese la primera matriz 4x3" << endl;
    for (int f = 0; f < 3; f++){
        for (int k = 0; k < 4; k++){
            cin >> matrizA[f][k];
        }
    }

    cout << "ingrese la segunda matriz 4x3" << endl;
    for (int f = 0; f < 3; f++){
        for (int k = 0; k < 4; k++){
            cin >> matrizD[f][k];
        }
    }

    cout << "ingrese la tercera matriz 4x3" << endl;
    for (int f = 0; f < 3; f++){
        for (int k = 0; k < 4; k++){
            cin >> matrizW[f][k];
        }
    }
    
    //! insercion de la matriz B[8];

    for (int f = 0; f < 1; f++){
        for (int k = 0; k < 4; k++){
            matrizB[k] = matrizA[f][k]; 
        }
    }

    int iteradorB = 4;

    for (int i = 2; i < 3; i++){
        for (int j = 0; j < 4; j++){
            matrizB[iteradorB] = matrizA[i][j];
            iteradorB++;
        } 
    }

    //! impresion de la matriz b

    cout << "impresion de la matrizB: ";


    for (int i = 0; i < 8; i++){
        cout << matrizB[i] << " ";
    }

    cout << "\n";
    

    //! insersion de la matrizC[6]

    int iteradorC = 0;

    for (int f = 0; f < 3; f++){    
        for (int k = 1; k < 2; k++){      
            matrizC[iteradorC] = matrizA[f][k];  
        }  
        iteradorC++;
    }


    for (int i = 0; i < 3; i++){  
        for (int j = 2; j < 3; j++){    
            matrizC[iteradorC] = matrizA[i][j];    
        } 
        iteradorC++;
    }

    //! impresion de la matrizC

    cout << "impresion de la matrizC: ";

    for (int i = 0; i < 6; i++){
        cout << matrizC[i] << " ";
    }

    cout << "\n";



// ! ________________________________________________________________________________________________
    

    //! llenando la matrizE de ceros

    for (int i = 0; i < 5; i++){
        matrizE[i] = 0; 
    }

    //! llenando la matrizH de ceros

    for (int i = 0; i < 5; i++){
        matrizH[i] = 0; 
    }


    //! insersion de la matrizE con numeros pares

    int contadorPar = 0;

    for (int f = 0; f < 3; f++){
        for (int k = 0; k < 4; k++){
            if (matrizD[f][k] % 2 == 0){
                matrizE[contadorPar] = matrizD[f][k];
                contadorPar++;
            }
        }
    }
    
    //! insersion de la matrizH con numeros inpares

    int contadorInpar = 0;

    for (int f = 0; f < 3; f++){
        for (int k = 0; k < 4; k++){
            if (matrizD[f][k] % 2 == 1){
                matrizH[contadorInpar] = matrizD[f][k];
                contadorInpar++;
            }
        }
    }

    // ! impresion de la matrizE con numeros pares

    cout << "impresion de la matrizE numeros pares: ";


    for (int i = 0; i < 5; i++){
        cout << matrizE[i] << " ";
    }

    cout << "\n";

    // ! impresion de la matrizH con numeros inpares

    cout << "impresion de la matrizH numeros Inpares: ";


    for (int i = 0; i < 5; i++){
        cout << matrizH[i] << " ";
    }

    cout << "\n";


    //! llenando la matrizZ de ceros

    for (int i = 0; i < 5; i++){
        matrizZ[i] = 0; 
    }

    //! llenando la matrizY de ceros

    for (int i = 0; i < 5; i++){
        matrizY[i] = 0; 
    }

    //! insersion de la matrizZ con numeros multiplos de 7

    int multiplos7 = 0;

    for (int f = 0; f < 3; f++){
        for (int k = 0; k < 4; k++){
            if (matrizW[f][k] % 7 == 0){
                matrizZ[multiplos7] = matrizW[f][k];
                multiplos7++;
            }
        }
    }

    //! insersion de los numeros multiplos de 11


    int multiplos11 = 0;

    for (int f = 0; f < 3; f++){
        for (int k = 0; k < 4; k++){
            if (matrizW[f][k] % 11 == 0){
                matrizY[multiplos11] = matrizW[f][k];
                multiplos11++;
            }
        }
    }

    // ! impresion de la matrizZ con numeros multiplos de 7

    cout << "impresion de la matrizZ con numeros multiplos de 7: ";

    for (int i = 0; i < 4; i++){
        cout << matrizZ[i] << " ";
    }
    cout << "\n";


    // ! impresion de la matrizY con numeros multiplos de 11

    cout << "impresion de la matrizY con numeros multiplos de 11: ";

    for (int i = 0; i < 4; i++){
        cout << matrizY[i] << " ";
    }

    cout << "\n";

    //! insersion de la matrizP la union de la matrizE y la matrizZ

    int iteradorUltimo = 0;

    for (int i = 0; i < 5; i++){
        matrizP[iteradorUltimo] = matrizE[i];
        iteradorUltimo++;
    }

    iteradorUltimo = 5;

    for(int i = 0; i < 5; i++){
        matrizP[iteradorUltimo] = matrizZ[i];
        iteradorUltimo++;
    }
    
    // ! impresion de la matrizP

    cout << "impresion de la matrizP: ";

    for (int i = 0; i < 9; i++){
        cout << matrizP[i] << " ";
    }
    
    cout << "\n";

    // ! insersion de la matrizQ

    for (int i = 0; i < 4; i++){
        int matriz1 = matrizH[i];
        int matriz2 = matrizY[i];
        matrizQ[i] = matriz1 + matriz2;
    }


    //! impresion de la matrizQ

    cout << "impresion de la matrizQ: ";

    for (int i = 0; i < 4; i++){
        cout << matrizQ[i] << " ";
    }
    
    return 0;
}

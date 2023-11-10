#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];

    cout << "Ingrese 9 numeros" << endl;
    for(int f=0; f< 3; f++){
        for (int c = 0; c < 3; c++){
            cin >> matriz[f][c];
        }
        
    }

    for (int i = 0; i < 3; i++) { // fila 
        for (int j = 0; j < 2; j++) { // columna
            for (int k = 0; k < 2 - j; k++) {
                if (matriz[i][k] > matriz[i][k + 1]) {
                    int aux = matriz[i][k];
                    matriz[i][k] = matriz[i][k + 1];
                    matriz[i][k + 1] = aux;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}


/*
[
    [0,1,2],
    [1,2,3],
    [2,3,4],
]
*/
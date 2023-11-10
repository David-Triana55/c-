using namespace std;
#include <iostream>

int main()
{
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];


    cout << "ingresa 9 valores" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrizA[i][j];
        }
    }
    

    cout << "ingresa 9 valores" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrizB[i][j];
        }
    }
    

    for(int f = 0; f < 3; f++){
        for(int c = 0; c < 3; c++){
            matrizC[f][c] = matrizA[f][c] + matrizB[f][c];
        }   
    }
    
    for (int f = 0; f < 3; f++) {
        for (int c = 0; c < 3; c++){
            cout << matrizC[f][c] << " ";
        }

        cout << "\n";
        
    }
    



    return 0;
}

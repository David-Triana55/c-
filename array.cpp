#include <iostream>

using namespace std;

int main()
{

    int firstList[5];
    int secondList[5];
    int lastList[6];
    int numList1;
    int numList2;
    int itareteLastList = 0;
    

    for (int tercer = 0; tercer < 6; tercer++){
        lastList[tercer] = 0;
    }

    for (int primero  = 0; primero < 5; primero++){
        cout << "Digite el numero " << primero + 1 << " lista 1 ";
        cin >> numList1;
        firstList[primero] = numList1; 
    }

    for (int k = 0; k < 5; k++){
        int par = firstList[k];
        if (par % 2 == 0){
            lastList[itareteLastList] = firstList[k];
            itareteLastList++;
        }    
    }

    for (int segundo  = 0; segundo < 5; segundo++){
        cout << "Digite el numero " << segundo + 1 << " lista 2 ";
        cin >> numList2;
        secondList[segundo] = numList2; 
    }
    
    itareteLastList = 3;

    for (int k = 0; k < 5; k++){
        int inpar = secondList[k];
        if (inpar % 2 == 1){
            lastList[itareteLastList] = secondList[k];
            itareteLastList++;
        }
    }

    for(int k = 0; k < 6; k++){
        cout << lastList[k] << endl;
    }
    
    return 0;
}

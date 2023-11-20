#include <iostream>

using namespace std;

int main ()
{
	int array [3][3];
	int i, j, x, y, aux;
	
	
	for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout<<"Digite un valor: ";
            cin>>array[i][j];
        }
	}
	
	cout << endl <<"Matriz Original" << endl;
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout<<array[i][j]<<" ";
			cout<<endl;
        }
	}
	
	
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (x = 0; x < 3; x++) {
                for (y = 0; y < 3; y++) {
                    if (array[i][j] < array[x][y]) {
                        aux = array[i][j];
                        array[i][j] = array[x][y];
                        array[x][y] = aux;
                    }
                }
            }
        }
    }
    
    
    cout <<endl << "Matriz ordenada:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int day;
    // double a,b,res;

    cin >> day;

    // cout <<"Ingrese 2 valores" << endl;
    // cin>> a >> b;
    // res = (a > b ? a:b);
    // cout << res << endl; 

    // if (a > b){
    //     res = a;
    // } else {
    //     res = b;
    // }



    // if else switch ?:   // 
    switch (day)
    {
    case 1:
        cout << "Es lunes" << endl;
        break;
    case 2:
        cout<<"Es Martes" << endl;
        break;
    case 3:
        cout<<"Es Miercoles" << endl;
        break;
    case 4:
        cout<<"Es Jueves" << endl;
        break;
    case 5:
    cout <<"Es Viernes"<< endl;
        break;
    case 6:
            cout <<"Es Sabado"<< endl;
        break;
    case 7:
        cout <<"Es Domingo"<< endl;
        break;
    default:
        cout <<"Día no existe"<< endl;
        break;
    }


    // for : variable de parada
    // while : condición parada
    // do - while : incremento / decremento
    return 0;
}
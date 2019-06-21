#include <iostream>
#include <cstdlib>
#include "struct.h"

using namespace std;

int main()
{
    pila A;
    int decision;
    string caracter;

    cout << "\n\nEste programa demuestra el funcionamiento\nde una pila" << endl << endl;
    system("pause");


    while(true){
        system("cls");
        cout << "\nLa pila cuenta con " << A.Cuantos() << " elementos\n\n";
        cout << "Desea agregar un caracter al grupo?\n1: Si\n0: No\n";
        cin >> decision;
        while(decision!=1 && decision!=0){
           cout << "Desea agregar un caracter a la pila?\n1: Si\n0: No\n";
            cin >> decision;
        }
        if(decision==0) break;
        cout << endl << "Introduzca el caracter que desea agregar: ";
        cin >> caracter;
        A.agregar(caracter);
    }


    cout << endl << endl << "La impresion de la pila es: " << endl;
    if(A.Cuantos()==0) cout << "[VACIO]";
    A.pinta();
    cout << endl << endl;
    system("pause");
    return 0;
}

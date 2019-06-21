#include <iostream>
#include <cstdlib>
#include "struct.h"

using namespace std;

//----------------------------------------------
pila::pila(){
    principio = NULL;
    cuantos = 0;
}
//---------------------------------------------
void pila::agregar(string a){
    caja *p;
    p = new caja;
    p->valor = a;

    if(p != NULL){
        p->siguiente = principio;
        principio = p;
    }
    else{
        p->siguiente = NULL;
        principio = p;
    }
    cuantos++;
    return;
}
//---------------------------------------------
string pila::sacar(){
     caja *p;
    string valor;
    if(principio != NULL){
        p = principio;
        principio = p->siguiente;
        valor = p->valor;
        delete p;
        cuantos--;
        return valor;
    }
    else{
        return 0;
    }

}
//---------------------------------------------
int pila::Cuantos(){
    return(cuantos);
}
//---------------------------------------------
void pila::pinta(){
    caja *p;
    p = principio;

    while(p){
        cout << "\n " << p -> valor;
        p = p -> siguiente;
    }
}
//---------------------------------------------
pila::~pila(){
    caja *p;

    while(principio){
        p = principio;
        principio = p -> siguiente;
        delete p;
    }
    return;
}
//---------------------------------------------

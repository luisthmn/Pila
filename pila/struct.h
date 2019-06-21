#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

using namespace std;

//---------------------------------------------
struct caja{
    string valor;
    caja *siguiente;
};
//---------------------------------------------
class pila{
    caja *principio;
    int cuantos;

    public:
    pila();  //Constructor
    ~pila();  //Destructor
    void agregar(string a);
    string sacar();
    void pinta();
    int Cuantos();

};
//---------------------------------------------


#endif // STRUCT_H_INCLUDED

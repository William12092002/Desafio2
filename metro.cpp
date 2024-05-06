#include "Metro.h"
#include <iostream>
using namespace std;



//constructor
Metro :: Metro(int _Nl ){
    Nl = _Nl;
    lineas_ = new Linea*[Nl];

}
//getter
int Metro :: getNuml(){
    return Nl;
}
//desctructor
Metro :: ~Metro(){

    for (int i = 0; i <= Nl; i++){
        delete lineas_[i];
    }
    delete[] lineas_;
    cout << "Se ha eliminado correctamente la memoria";
}
//agregar linea

void Metro :: addl(int indice, string nombre,string tipoT,int NumE) {
    if (indice >= 0 && indice < Nl) {
        lineas_[indice] = new Linea(nombre,tipoT,NumE);
    }
}
//borrar linea

void Metro :: delLi(string nombre){
    for(int i = 0; i <= Nl; i++){
        if (lineas_[i]->getNombre() == nombre){
            delete lineas_[i];
        }
    }
}

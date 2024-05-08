#include "Estacion.h"
using namespace std;

string Estacion :: getNombre(){

    return nombre;
}

Estacion :: Estacion(string _nombre, bool Tran){

    nombre = _nombre;
    trans = Tran;
}

Estacion :: ~Estacion(){

}

void Estacion :: setNombre(string _nuevon){
    nombre = _nuevon;
}

void Estacion :: setTrans(bool _est){

    trans = _est;
}

bool Estacion :: getTrans(){

    return trans;
}

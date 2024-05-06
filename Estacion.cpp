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

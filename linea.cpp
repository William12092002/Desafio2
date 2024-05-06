#include "Linea.h"
using namespace std;

//Constructor

Linea::Linea( string _nombre, string _tipo, int _numE){

    Nombre = _nombre;
    tipoT = _tipo;
    NumE = _numE;
    Estaciones = new Estacion*[NumE];

}
//obtener nombre de la linea

string Linea :: getNombre(){

    return Nombre;
}
//obtener tipo de transporte de la linea

string Linea :: getTipoT(){

    return tipoT;
}
//obtener numero de estaciones de la linea

int Linea :: getNumE(){

    return NumE;
}

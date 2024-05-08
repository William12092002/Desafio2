#include "Linea.h"
using namespace std;
#include <iostream>

//Constructor:

Linea::Linea( string _nombre, string _tipo, int _numE){

    Nombre = _nombre;
    tipoT = _tipo;
    NumE = _numE;
    Estaciones = new Estacion*[NumE];
    cont = 0;
    for(int i = 0; i <NumE;i++){
        Estaciones[i]=nullptr;
    }

}
//obtener nombre de la line:

string Linea :: getNombre(){

    return Nombre;
}
//obtener tipo de transporte de la linea:

string Linea :: getTipoT(){

    return tipoT;
}
//obtener numero de estaciones de la linea:

int Linea :: getNumE(){

    return cont;
}

// Agregar una estación:

void Linea :: addEs(int pos, string nombre, bool Trans){

    if (pos >= 0 && pos < NumE) {

        if(Estaciones[pos] == nullptr){

            Estaciones[pos] = new Estacion(nombre,Trans);
            cont = cont +1;
        }
        else{
            cout<<"Ya hay una estacion en esa posicion";
        }
    }
}

// Eliminar estación:

void Linea :: delEs(string nombre){

    for(int i = 0; i <= NumE; i++){
        if (Estaciones[i]->getNombre() == nombre && Estaciones[i]->getTrans() == false){
            delete Estaciones[i];
        }
        else{
            cout << "La estacion seleccionada no existe o es de transferencia ";
        }
    }

}

//Destructor:

Linea :: ~Linea(){

    for (int i = 0; i <= NumE; i++){
        delete Estaciones[i];
    }
    delete[] Estaciones;

}

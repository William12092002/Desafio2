#include <string>
using namespace std;
#include "Estacion.h"
#ifndef LINEA_H


class Linea{

private:
    string Nombre;
    string tipoT;
    int NumE;
    Estacion** Estaciones;
public:
    Linea(string,string,int);
    string getNombre();
    string getTipoT();
    int getNumE();

};

#define LINEA_H

#endif // LINEA_H

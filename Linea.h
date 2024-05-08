#include <string>
using namespace std;
#include "Estacion.h"
#ifndef LINEA_H


class Linea{

private:
    string Nombre;
    string tipoT;
    int NumE;


public:
    int cont;
    Estacion** Estaciones;
    Linea(string,string,int);
    ~Linea();
    string getNombre();
    string getTipoT();
    void addEs(int,string,bool);
    void delEs(string);
    int getNumE();

};

#define LINEA_H

#endif // LINEA_H

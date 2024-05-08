#ifndef ESTACION_H
#include <string>
using namespace std;

class Estacion{

private:
    string nombre;
    bool trans;
    int tiempo1;
    int tiempo2;
public:
    Estacion(string,bool);
    ~Estacion();
    string getNombre();
    void setNombre(string);
    void setTrans(bool);
    bool getTrans();

};

#define ESTACION_H

#endif // ESTACION_H

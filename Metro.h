#ifndef METRO_H
#define METRO_H
#include <string>
using namespace std;
#include "Linea.h"

class Metro{

private:

    int Nl;
    int cont;
    string nombre;
public:
    Linea** lineas_;
    Metro(int,string);
    ~Metro();
    int getNuml();
    void addl(int,string,string,int);
    void delLi(string);
    bool empty();
    void connL(string,string);
    bool validar(string);
    void addest(string,string,int);
    void  delest(string noml, string nome);
    int numes(string);
    void numEsRed();
    void belonges(string);

};

#endif // METRO_H

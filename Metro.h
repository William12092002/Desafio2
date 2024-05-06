#ifndef METRO_H
#define METRO_H
#include <string>
using namespace std;
#include "Linea.h"

class Metro{

private:
    Linea** lineas_;
    int Nl;
public:
    Metro(int);
    ~Metro();
    int getNuml();
    void addl(int,string,string,int);
    void delLi(string);


};

#endif // METRO_H

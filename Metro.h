#ifndef METRO_H
#define METRO_H
#include <string>
using namespace std;
#include "Linea.h"

class Metro{

private:

    int Nl;
public:
    Linea** lineas_;
    Metro(int);
    ~Metro();
    int getNuml();
    void addl(int,string,string,int);
    void delLi(string);


};

#endif // METRO_H

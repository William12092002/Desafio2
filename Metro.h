#ifndef METRO_H
#define METRO_H
#include <map>
#include <string>
#include <vector>
using namespace std;

class Metro{

protected:
    map <string,vector<int>>NetMap;
    int numLin;
    void crearlineas();

public:

    Metro(int numLin, int EsPlin);
    short getNumLin();
};

#endif // METRO_H

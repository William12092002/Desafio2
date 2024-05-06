#include <iostream>
#include "Metro.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Metro Nuevom(3);

    Nuevom.addl(0,"Linea 1","tren",3);
    Nuevom.lineas_[0]->addEs(0,"Estacion 1",false);
    Nuevom.~Metro();

    return 0;




}

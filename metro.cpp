#include "Metro.h"
#include <iostream>
using namespace std;



//constructor:

Metro :: Metro(int _Nl,string nombre_ ){
    Nl = _Nl;
    lineas_ = new Linea*[Nl];
    cont = 0;
    nombre = nombre_;
    for(int i = 0; i< _Nl;i++){
        lineas_[i] = nullptr;
    }

}
//getter:

int Metro :: getNuml(){
    return cont;
}
//desctructor:

Metro :: ~Metro(){

    for (int i = 0; i <= Nl; i++){
        delete lineas_[i];
    }
    delete[] lineas_;
    cout << "Se ha eliminado correctamente la memoria";
}
//agregar linea:

void Metro :: addl(int indice, string nombre,string tipoT,int NumE) {
    if (indice >= 0 && indice < Nl) {

        if(lineas_[indice]== nullptr){

           lineas_[indice] = new Linea(nombre,tipoT,NumE);
           cont = cont+1;
        }
        else{
            cout<<"Ya hay una linea en esta posicion.";
        }

    }

}
//borrar linea:

void Metro :: delLi(string nombre){
    for(int i = 0; i <= Nl; i++){
        if(lineas_[i]!= nullptr){
            if (lineas_[i]->getNombre() == nombre){
                delete lineas_[i];
            }
        }

    }
}

//verificar si la red está vacía:

bool Metro :: empty(){

    bool estaVacio = true;

    for (int i = 0; i < Nl; i++) {
        if (lineas_[i] != nullptr) {
            estaVacio = false;
            break;
        }
    }

    return estaVacio;
}

//conectar lineas:

void Metro :: connL(string n1, string n2){

    for(int i = 0 ; i < Nl; i++){
        if(lineas_[i]!=nullptr){
            if(lineas_[i]->getNombre() == n1){
                for (int j = 0; j< Nl; j++){
                    if(lineas_[j]!=nullptr){
                        if(lineas_[j]->getNombre() == n2){
                            if(lineas_[j]->cont == 0){
                                cout<<"No se pueden conectar las lineas, alguna no tiene estaciones";
                                break;
                            }

                            else{
                                for(int k =0; k <= lineas_[j]->cont;k++){
                                    if(lineas_[j]->Estaciones[k]->getTrans()==false){
                                        lineas_[j]->Estaciones[k]->setNombre(lineas_[j]->Estaciones[k]->getNombre()+n2);
                                        break;
                                    }
                                }
                                for(int l =0; l <= lineas_[i]->cont;l++){
                                    if(lineas_[i]->Estaciones[l]->getTrans()==false){
                                        lineas_[i]->Estaciones[l]->setNombre(lineas_[i]->Estaciones[l]->getNombre()+n1);
                                        break;
                                    }
                                }
                            }
                            break;

                        }

                    }
            }   }
        }
    }
}

bool Metro :: validar (string Nom){

    bool val = false;

    for(int i=0; i < Nl; i++){

        if(lineas_[i] != nullptr){
            if(lineas_[i]->getNombre() == Nom){
                val = true;
                break;
            }
            }

    }

    return val;
}

void Metro :: addest(string noml, string nome,int pos){

    for(int i = 0; i < Nl; i++){
        if(lineas_[i] != nullptr){
            if(lineas_[i]->getNombre() == noml){
                lineas_[i]->addEs(pos,nome,false);
            }
            else{
                cout << "No puedo anadir una estacion a una linea inexistente";
            }
        }
    }
}

void Metro :: delest(string noml, string nome){

    for(int i = 0; i < Nl; i++){
        if(lineas_[i] != nullptr){
            if(lineas_[i]->getNombre() == noml){
                lineas_[i]->delEs(nome);
            }
            else{
                cout << "No puedo eliminar una estacion de una linea inexistente";
            }
        }
    }
}

int Metro :: numes(string noml){
    int num = 0;
    for (int i = 0; i<Nl; i++){
        if(lineas_[i]!=nullptr){
            if (lineas_[i]->getNombre() == noml){
                num = lineas_[i]->cont;


            }
        }
    }
    return num;
}

void Metro :: numEsRed(){
    int cont = 0;
    for (int i = 0; i < Nl; i++){
        if( lineas_[i]!=nullptr)
            cont = cont + lineas_[i]->cont;

    }
    cout << "La red tiene "<<cont<<" estaciones.";
}

void Metro :: belonges(string nomes ){

    for (int i = 0; i < Nl; i++){
        if( lineas_[i]!=nullptr){
            for (int j = 0; j < Nl; j++){
                if( lineas_[i]->Estaciones[j]!=nullptr && lineas_[i]->Estaciones[j]->getNombre()== nomes){
                    cout << "La estacion pertenece a la linea " << lineas_[i]->getNombre();
            }   }
        }
    }
}

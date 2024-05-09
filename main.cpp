#include <iostream>
#include "Metro.h"
#include "funciones.h"
using namespace std;

int main()
{

    string nombre;
    int numl = 0,menu = 0;


    cout << "Bienvenido al simulador, para comenzar crearemos una red: ";
    cout << "Dame un nombre: ";
    cin >> nombre;
    cout << "Dime cuantas lineas tendra la red: ";
    cin >> numl;
    Metro nRed(numl,nombre);

    do{
        mostrarMenu();
        cin >> menu;


        switch(menu){

          case 1:
          {
            int pos = 0, numE = 0;
            string nombre1,tipo;

            cout << "Dime la posicion en la que quieres una nueva linea (recuerda el tamano de la red): "; cin >> pos;
            cout <<"Dime el nombre de la linea: "; cin >> nombre;
            bool nombreva = nRed.validar(nombre1);
            cout << "Dime el tipo de transporte: "; cin >> tipo;
            cout << "Dime el numero de estaciones: "; cin >> numE;
            if(nombreva == true){
                do{
                    cout<<"El nombre no es valido, usa otro por favor";
                    cin >> nombre;
                    nombreva = nRed.validar(nombre);

                }while(nombreva == true);
            }
            if(nRed.empty()==true){
                nRed.addl(pos,nombre,tipo,numE);
                break;

            }
            else{
                int randi = rand()%numE;
                string numm = "Estacion"+to_string(randi);
                nRed.addl(pos,nombre,tipo,numE);
                nRed.addest(nombre,numm,randi);
                for(int o = 0; o <numl;o++){
                    if(nRed.lineas_[o] != nRed.lineas_[pos] && nRed.lineas_[o] != nullptr){
                        cout<<nRed.lineas_[pos]->getNombre()<<nRed.lineas_[o]->getNombre();
                        nRed.connL(nRed.lineas_[pos]->getNombre(),nRed.lineas_[o]->getNombre());
                        break;
                    }
                }
            }
          }
          break;


          case 2:{
              string nombree,nombrel;int posi = 0;
              cout<<"Dime el nombre de la linea: ";cin>>nombrel;
              cout<<"Dime el nombre de la estacion: ";cin>>nombree;
              cout<< "Dime la posicion donde agregaras la estacion: ";cin >>posi;
              nRed.addest(nombrel,nombree,posi);
              break;

          }
          case 3:{
              string nomree,nomrel;
              cout<<"Dime el nombre de la linea: ";cin>>nomrel;
              cout<<"Dime el nombre de la estacion: ";cin>>nomree;
              nRed.delest(nomrel,nomree);
              break;
          }
          case 4:{

              cout << "La red tiene " <<nRed.getNuml()<<" linea/s";
              break;
          }
          case 5:{

              string n;int num23=0;
              cout << "Dime la linea de la cual deseas saber el numero de estaciones";cin>>n;
              num23 = nRed.numes(n);
              cout << n << " tiene "<< num23 <<" estaciones";
              break;
          }
          case 6:{
              nRed.numEsRed();
              break;
          }
          case 7:{
              string h;
              cout << "Dime el nombre de la estacion "; cin >> h;
              nRed.belonges(h);
              break;
          }
      }
    }while(menu != 0);

    nRed.~Metro();



    return 0;




}

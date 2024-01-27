#include <iostream>
using namespace std;

#include "clsAreas.h"

clsAreas :: clsAreas(){
    Area="Ninguna";
    nAreas=0;
}
void clsAreas :: registrarAreas(){
    cout<<"Registre una Area: "; cin>>Area;
    nAreas++;
}
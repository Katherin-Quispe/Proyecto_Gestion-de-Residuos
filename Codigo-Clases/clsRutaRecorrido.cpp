#include <iostream>
using namespace std;

#include "clsRutaRecorrido.h"

void clsRutaRecorrido :: asignarRutaIda(){
    cout<<"Ingrese la ruta de Ida para el vehiculo: "; cin>>rutaIda;
}
void clsRutaRecorrido :: asignarRutaRegreso(){
    cout<<"Ingrese la ruta de Regreso para el vehiculo: "; cin>>rutaReg;
}
void clsRutaRecorrido :: ActualizarRuta(){
    int op;
    cout<<"Que ruta desea actualizar(1-Ida/2-Regreso): "; cin>>op;
    switch (op)
    {
    case 1:
        asignarRutaIda();
        break;
    
    case 2:
        asignarRutaRegreso();
        break;
    }
}
#include <iostream>
using namespace std;
#include <fstream>
#include <Registro.h>
#include "clsVehiRecolecc.h"


void clsVehiRecolecc :: asignarTrabajadores(){
    cout<<"Los trabajadores asignados para el Vehiculo de Recoleccion "<<NumVehi<<" son : ";
    cin>>registro. ;
    int k;
    k++;
    if(k==3){
        NumVehi++;
    }
    
}
void clsVehiRecolecc :: asignarConductor(){
    tRegistro registro;
    cout<<"Desea asignar a este trabajador como conducto?(Si/No): "; cin>>registro.Conductor;
}
void clsVehiRecolecc :: asignarDatosVehi(){
    cout<<"Vehiculo Recolecctor Nro: "; cin>>NumVehi;
    NumVehi=registro.Vehiculo;
    cout<<"Placa de Vehiculo : "; cin>>Placa;
    Placa=registro.Placa;
    cout<<"Capacidad del Vehiculo: "; cin>>Capacidad;
}
void clsVehiRecolecc :: mostrarVehiculo(){
    cout<<"Vehiculo Recolecctor Nro: "<<NumVehi;
    cout<<"Placa de Vehiculo : "<<Placa;
    cout<<"Capacidad del Vehiculo: "<<Capacidad;
}
void clsVehiRecolecc :: registrarReporte(){
    cout<<"Hora(h/m/s): "; cin>>Hora>>Minutos>>Segundos;
    mostrar(tRegistro &reg);
    cout<<"Descripcion: "; cin>>Descripcion;
}
void clsVehiRecolecc :: mostrarReporte(){
    fstream archivo;
    i++;
    cout<<"Reporte de Recoleccion Nro "<<i<<":"<<endl;
    cout<<"Hora(h/m/s): "<<Hora<<":"<<Minutos<<":"<<Segundos;
    archivo.open("Report.dat", ios ::out | ios::binary);
    archivo.write((char*)&registro, SIZE)
    archivo.close();
    cout<<"Descripcion: "<<Descripcion;
    


}

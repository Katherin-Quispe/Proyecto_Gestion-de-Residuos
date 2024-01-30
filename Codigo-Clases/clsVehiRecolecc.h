#include <iostream>
using namespace std;
#ifndef CLSVEHIRECOLECC_H
#define CLSVEHIRECOLECC_H

class clsVehiRecolecc{
    private:
        int Capacidad;
        int NumVehi;
        string Placa;
        int Hora;
        int Minutos;
        int Segundos;
        string Descripcion;
        int i=0;
        string Conductor;
        string Trabajador;
    public:
        
        void asignarTrabajadores();
        void asignarConductor();
        void asignarDatosVehi();
        void mostrarVehiculo();
        void mostrarReporte();
        void registrarReporte();
};

#endif
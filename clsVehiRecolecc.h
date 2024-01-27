#include <iostream>
using namespace std;
#ifndef CLSVEHIRECOLECC_H
#define CLSVEHIRECOLECC_H

class clsVehiRecolecc{
    private:
        int Capacidad;
        int NumVehi;
        string Tipo;
        string Placa;
        int Hora;
        int Minutos;
        int Segundos;
        string Descripcion;
    public:
        clsVehiRecolecc();
        void asignarTrabajadores();
        void asignarConductor();
        void asignarDatosVehi();
        void mostrarVehiculo();
        void mostrarReporte();
        void registrar Reporte();
}

#endif
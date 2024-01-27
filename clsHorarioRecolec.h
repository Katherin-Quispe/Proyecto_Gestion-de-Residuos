#include <iostream>
using namespace std;
#ifndef CLSHORARIORECOLEC_H
#define CLSHORARIORECOLEC_H

class clsHorarioRecolec{
    private:
        int Hora;
        int Minutos;
        int Segundos;
        string Dia;
    public:
        clsHorarioRecolec();
        void designarHorario();
        void HorarioDis();
}
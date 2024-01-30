#include <iostream>
#include <vector>
using namespace std;

#ifndef CLSHORARIORECOLEC_H
#define CLSHORARIORECOLEC_H

class clsHorarioRecolec {
private:
    struct Horario {
        int Hora;
        int Minutos;
        string Dia;
    };

    vector<Horario> horarios; // Vector para almacenar múltiples horarios

public:
    
    void designarHorario();
    void mostrarHorarios();
};

#endif

#include "clsHorarioRecolec.h"
#include <iostream>
using namespace std;


void clsHorarioRecolec::designarHorario() {
    Horario nuevoHorario;

    cout << "Ingrese la hora: ";
    cin >> nuevoHorario.Hora;

    cout << "Ingrese los minutos: ";
    cin >> nuevoHorario.Minutos;

    cout << "Ingrese el día: ";
    cin >> nuevoHorario.Dia;

    // Agregar el nuevo horario al vector
    horarios.push_back(nuevoHorario);
}
void clsHorarioRecolec::mostrarHorarios() {
    cout << "Horarios de recolección:" << endl;

    for (const auto &horario : horarios) {
        cout << horario.Hora << ":" << horario.Minutos <<" - Día: " << horario.Dia << endl;
    }
}

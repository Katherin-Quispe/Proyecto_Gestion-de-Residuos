#include <iostream>
#include <string>
#include <vector>
#include "clsAreas.h"
#include "clsRutaRecorrido.h"
#include "clsHorarioRecolec.h"
#include "clsVehiRecolecc.h"

using namespace std;

#ifndef CLSADMINISTRADOR_H
#define CLSADMINISTRADOR_H

class ClsAdministrador {
private:
    struct Usuario {
        string nombre;
        string apellidos;
        string DNI;
        string username;
        string contrasena;
        string  licencia;
        string cargo;
    };

      vector<Usuario> usuarios;
    // ... Otros atributos y funciones ...

public:
    void registrarAdministrador();
    void registrarUsuario();
    void mostrarUsuario();
    void registrarTrabajador(clsAreas &area, clsRutaRecorrido &ruta, clsVehiRecolecc &vehi);
    void mostrarTrabajador();
    void visualizarReporte(clsVehiRecolecc &vehi);
};

#endif

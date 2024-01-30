#include "ClsAdministrador.h"
#include "Registro.h"
#include "clsAreas.h"
#include "clsRutaRecorrido.h"
#include "clsHorarioRecolec.h"
#include "clsVehiRecolecc.h"
#include "usuario.h"
#include <iostream>
using namespace std;

tRegistro registro;

void ClsAdministrador::registrarAdministrador(){
    Usuario nuevoUsuario;

    cout << "Cargo: ";
    cin >> nuevoUsuario.cargo;

    cout << "Nombre: ";
    cin >> nuevoUsuario.nombre;

    cout << "Apellidos: ";
    cin >> nuevoUsuario.apellidos;

    cout << "DNI: ";
    cin >> nuevoUsuario.DNI;

    cout << "Contraseña: ";
    cin >> nuevoUsuario.contrasena;

    usuarios.push_back(nuevoUsuario);
}


void ClsAdministrador::registrarUsuario(){
 Usuario nuevoUsuario;

    cout << "Nombre: ";
    cin >> nuevoUsuario.nombre;

    cout << "Apellidos: ";
    cin >> nuevoUsuario.apellidos;

    cout << "DNI: ";
    cin >> nuevoUsuario.DNI;

    cout << "Username: ";
    cin >> nuevoUsuario.username;

    cout << "Contraseña: ";
    cin >> nuevoUsuario.contrasena;

    usuarios.push_back(nuevoUsuario);
}

void ClsAdministrador::mostrarUsuario(){
	
    for (const auto &usuario : usuarios) {
        cout << "Nombre: " << usuario.nombre << endl;
        cout << "Apellidos: " << usuario.apellidos << endl;
        cout << "DNI: " << usuario.DNI << endl;
        cout << "Username: " << usuario.username << endl;
        
    }
}

void ClsAdministrador::registrarTrabajador( clsAreas &area, clsRutaRecorrido &ruta, clsVehiRecolecc &vehi) {
    
    cout << "Nombre: ";
    cin >> registro.Nombre;

    cout << "Apellidos: ";
    cin >> registro.Apellido;

    cout << "DNI: ";
    cin >> registro.DNI;

    cout << " Licencia? Si/No ";
    cin >>registro.Licencia;

    area.registrarAreas();
    ruta.asignarRutaIda();
    ruta.asignarRutaRegreso();
    vehi.asignarDatosVehi();
    vehi.asignarConductor();
    vehi.asignarTrabajadores();    
}
void ClsAdministrador::mostrarTrabajador(){
    cout << "Nombre: " << registro.Nombre << endl;
    cout << "Apellidos: " << registro.Apellido << endl;
    cout << "DNI: " << registro.DNI << endl;
    cout << "Licencia: " << registro.Licencia << endl;
}
void ClsAdministrador::visualizarReporte(clsVehiRecolecc &vehi)
{
    vehi.mostrarReporte();
}
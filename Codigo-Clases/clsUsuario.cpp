#include "usuario.h"

#include <iostream>

using namespace std;

ClsUsuario::ClsUsuario() {
  nombre = "";
  apellidos = "";
  DNI = "";
  contrasena = "";
  tipo = "";
}

void ClsUsuario::registrarUsuario() {
  cout << "Nombre: ";
  cin >> nombre;

  cout << "Apellidos: ";
  cin >> apellidos;

  cout << "DNI ";
  cin >> DNI;

  cout << "Contraseña: ";
  cin >> contrasena;

  cout << "Tipo: ";
  cin >> tipo;
}
void ClsUsuario::mostrarUsuario() {
  cout << "Nombre: " << nombre << endl;
  cout << "Apellidos: " << apellidos << endl;
  cout << "DNI: " << DNI << endl;
  cout << "Contraseña: " << contrasena << endl;
  cout << "Tipo de cargo admin/usuario: " << tipo << endl;
}
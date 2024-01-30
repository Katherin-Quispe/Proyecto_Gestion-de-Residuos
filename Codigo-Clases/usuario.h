#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>
#include <string>

using namespace std;

class ClsUsuario {
protected:
  string nombre;
  string apellidos;
  string DNI;
  string contrasena;
  string tipo;

public:
  ClsUsuario();
	void registrarUsuario();
	void mostrarUsuario();

};

#endif
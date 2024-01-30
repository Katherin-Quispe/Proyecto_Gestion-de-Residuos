#include <iostream>
using namespace std;

const int MAX=100;
struct tRegistro
{
    string Nombre;
    string Apellido;
    int DNI;
    string Licencia;
    string Horario;
    string Area;
    string Ruta;
    string Vehiculo;
    string Conductor;
    string placa;

};
int SIZE= sizeof(tRegistro);
void mostrar(tRegistro &reg){
    cout<<"Nombre: "<<reg.Nombre;
    cout<<"Apellido: "<<reg.Apellido;
    cout<<"DNI: "<<reg.DNI;
    cout<<"Licencia: "<<reg.Licencia;
    cout<<"Horario: "<<reg.Horario;
    cout<<"Area: "<<reg.Area;
    cout<<"Ruta: "<<reg.Ruta;
    cout<<"Vehiculos: "<<reg.Vehiculo;
    cout<<"Conductor: "<<reg.Conductor;
    cout<<"placa: "<<reg.placa;
}
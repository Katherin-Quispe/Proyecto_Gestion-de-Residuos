#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <conio.h>
#include <locale.h>

using namespace std;

const int MAX = 100;

struct tRegistro {
    string Nombre;
    string Apellido;
    int DNI;
    string Licencia;
    string Horario;
    string Area;
    string Ruta;
    string Vehiculo;
    string Conductor;
    string Placa;  // Agregué el atributo Placa que estaba faltando
};

int SIZE = sizeof(tRegistro);
tRegistro registro;
void mostrar(tRegistro &reg) {
    cout << "Nombre: " << reg.Nombre;
    cout << "Apellido: " << reg.Apellido;
    cout << "DNI: " << reg.DNI;
    cout << "Licencia: " << reg.Licencia;
    cout << "Horario: " << reg.Horario;
    cout << "Area: " << reg.Area;
    cout << "Ruta: " << reg.Ruta;
    cout << "Vehiculo: " << reg.Vehiculo;
    cout << "Conductor: " << reg.Conductor;
    cout << "Placa: " << reg.Placa;
}

class clsAreas {
private:
    string Area;
    int nAreas;

public:
    void registrarAreas();
};

void clsAreas::registrarAreas() {
    cout << "Registre una Area: ";
    cin >> Area;
    nAreas++;
}

class clsRutaRecorrido {
private:
    string rutaIda;
    string rutaReg;

public:
    void asignarRutaIda();
    void asignarRutaRegreso();
    void ActualizarRuta();
};

void clsRutaRecorrido::asignarRutaIda() {
    cout << "Ingrese la ruta de Ida para el vehiculo: ";
    cin >> rutaIda;
}

void clsRutaRecorrido::asignarRutaRegreso() {
    cout << "Ingrese la ruta de Regreso para el vehiculo: ";
    cin >> rutaReg;
}

void clsRutaRecorrido::ActualizarRuta() {
    int op;
    cout << "Que ruta desea actualizar (1-Ida/2-Regreso): ";
    cin >> op;
    switch (op) {
        case 1:
            asignarRutaIda();
            break;

        case 2:
            asignarRutaRegreso();
            break;
    }
}

class clsVehiRecolecc {
private:
    int Capacidad;
    int NumVehi;
    string Placa;
    int Hora;
    int Minutos;
    int Segundos;
    string Descripcion;
    int i = 0;
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

void clsVehiRecolecc::asignarTrabajadores() {
    cout << "Los trabajadores asignados para el Vehiculo de Recoleccion " << NumVehi << " son: ";
    cin >> Trabajador;  // Cambié registro.Vehiculo a Trabajador
}

void clsVehiRecolecc::asignarConductor() {
    cout << "Desea asignar a este trabajador como conductor? (Si/No): ";
    cin >> Conductor;
}

void clsVehiRecolecc::asignarDatosVehi() {
    cout << "Vehiculo Recolecctor Nro: ";
    cin >> NumVehi;
    cout << "Placa de Vehiculo: ";
    cin >> Placa;
    cout << "Capacidad del Vehiculo: ";
    cin >> Capacidad;
}

void clsVehiRecolecc::mostrarVehiculo() {
    cout << "Vehiculo Recolecctor Nro: " << NumVehi;
    cout << "Placa de Vehiculo: " << Placa;
    cout << "Capacidad del Vehiculo: " << Capacidad;
}

void clsVehiRecolecc::registrarReporte() {
    tRegistro regi;
    cout << "Hora (h/m/s): ";
    cin >> Hora >> Minutos >> Segundos;
    mostrar(regi);
    cout << "Descripcion: ";
    cin >> Descripcion;
}

void clsVehiRecolecc::mostrarReporte() {
    fstream archivo;

    archivo.open("Report.dat", ios::in | ios::binary);

    if (!archivo) {
        cout << "No hay reportes disponibles." << endl;
        return;
    }
    archivo.seekg(0, ios::end);
    int totalRegistros = archivo.tellg() / sizeof(clsVehiRecolecc);

    archivo.seekg(0, ios::beg);

    for (int j = 0; j < totalRegistros; j++) {
        archivo.read((char *)this, sizeof(clsVehiRecolecc));
        cout << "Reporte de Recoleccion Nro " << j + 1 << ":" << endl;
        cout << "Hora (h/m/s): " << Hora << ":" << Minutos << ":" << Segundos << endl;
        cout << "Descripcion: " << Descripcion << endl;
    }

    archivo.close();
}

class clsHorarioRecolec {
private:
    struct Horario {
        int Hora;
        int Minutos;
        string Dia;
    };

    vector<Horario> horarios;

public:
    void designarHorario();
    void mostrarHorarios();
};

void clsHorarioRecolec::designarHorario() {
    Horario nuevoHorario;

    cout << "Ingrese la hora: ";
    cin >> nuevoHorario.Hora;

    cout << "Ingrese los minutos: ";
    cin >> nuevoHorario.Minutos;

    cout << "Ingrese el día: ";
    cin >> nuevoHorario.Dia;

    horarios.push_back(nuevoHorario);
}

void clsHorarioRecolec::mostrarHorarios() {
    cout << "Horarios de recolección:" << endl;

    for (const auto &horario : horarios) {
        cout << horario.Hora << ":" << horario.Minutos << " - Día: " << horario.Dia << endl;
    }
}

class Usuario {
public:
    string nombre;
    string apellidos;
    string DNI;
    string username;
    string contrasena;
    string licencia;
    string cargo;
};

class ClsAdministrador {
private:
    vector<Usuario> usuarios;

public:
    void registrarAdministrador();
    void registrarUsuario();
    void mostrarUsuario();
    void registrarTrabajador(clsAreas &area, clsRutaRecorrido &ruta, clsVehiRecolecc &vehi);
    void mostrarTrabajador();
    void visualizarReporte(clsVehiRecolecc &vehi);
};

void ClsAdministrador::registrarAdministrador() {
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

void ClsAdministrador::registrarUsuario() {
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

void ClsAdministrador::mostrarUsuario() {
    for (const auto &usuario : usuarios) {
        cout << "Nombre: " << usuario.nombre << endl;
        cout << "Apellidos: " << usuario.apellidos << endl;
        cout << "DNI: " << usuario.DNI << endl;
        cout << "Username: " << usuario.username << endl;
    }
}

void ClsAdministrador::registrarTrabajador(clsAreas &area, clsRutaRecorrido &ruta, clsVehiRecolecc &vehi) {

    cout << "Nombre: ";
    cin >> registro.Nombre;

    cout << "Apellidos: ";
    cin >> registro.Apellido;

    cout << "DNI: ";
    cin >> registro.DNI;

    cout << " Licencia? Si/No ";
    cin >> registro.Licencia;

    area.registrarAreas();
    ruta.asignarRutaIda();
    ruta.asignarRutaRegreso();
    vehi.asignarDatosVehi();
    vehi.asignarConductor();
    vehi.asignarTrabajadores();
}

void ClsAdministrador::mostrarTrabajador() {
    cout << "Nombre: " << registro.Nombre << endl;
    cout << "Apellidos: " << registro.Apellido << endl;
    cout << "DNI: " << registro.DNI << endl;
    cout << "Licencia: " << registro.Licencia << endl;
}

void ClsAdministrador::visualizarReporte(clsVehiRecolecc &vehi) {
    vehi.mostrarReporte();
}

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
string obtenerContrasena() {
    string contrasena = "";
    char caracter;
     while (true) {
        caracter = _getch();  // Utiliza _getch() para obtener un carácter sin imprimirlo en pantalla

        if (caracter == 13) {  // 13 es el código ASCII para la tecla Enter
            break;
        } else if (caracter == 8) {  // 8 es el código ASCII para la tecla Backspace
            if (!contrasena.empty()) {
                cout << "\b \b";  // Retrocede y borra el último carácter
                contrasena.pop_back();
            }
        } else {
            cout << '*';  // Muestra un asterisco en lugar del carácter real
            contrasena += caracter;
        }
    }

    cout << endl;

    return contrasena;
}
//verificaion de Credenciales
struct VeriUsuario {
    string nombreUsuario;
    string contrasena;
};

bool verificarCredenciales(const string& usuario, const string& contrasena) {
    ifstream archivo("usuarios.dat", ios::binary);

    if (!archivo) {
        cerr << "Error al abrir el archivo de usuarios." << endl;
        return false;
    }

    VeriUsuario usuarioArchivo;

    while (archivo.read(reinterpret_cast<char*>(&usuarioArchivo), sizeof(Usuario))) {
        if (usuarioArchivo.nombreUsuario == usuario && usuarioArchivo.contrasena == contrasena) {
            return true;  // Usuario y contraseña coinciden
        }
    }

    return false;  // Usuario o contraseña incorrectos
}


int main() {
    char opcion;
    int opciones;
    clsAreas area;
    clsRutaRecorrido ruta;
    clsVehiRecolecc recol;
    tRegistro registro;
    fstream Usuario;
    string usuario;
    string contrasena;
    setlocale(LC_ALL, "");

    cout << "BIENVENIDO" << endl;
    cout<<"Ingrese su nombre de usuario: ";cin>>usuario;
    cout<<"Ingrese su contraseña: "; contrasena=obtenerContrasena();
    
    if (verificarCredenciales(usuario, contrasena)) {
        cout << "Inicio de sesión exitoso." << endl;
    } else {
        cout << "Usuario o contraseña incorrectos." << endl;
    }
    cout << "Es usted Administrador o Usuario(Trabajador)? (A/U): ";
    cin >> opcion;
    

    if (opcion == 'A') {
        ClsAdministrador admin;

        do {
            cout << "\n --- MENU PRINCIPAL ---" << endl;
            cout << "1. Registrar Usuario " << endl;
            cout << "2. Mostrar Usuarios " << endl;
            cout << "3. Registrar Trabajador " << endl;
            cout << "4. Mostrar Trabajadores" << endl;
            cout << "5. Vizualizar reporte " << endl;
            cout << "6. Salir. " << endl;
            cout << "Seleccione una opcion: ";
            cin >> opciones;

            switch (opciones) {
                case 1:
                    admin.registrarUsuario();
                    break;

                case 2:
                    admin.mostrarUsuario();
                    break;

                case 3:
                    admin.registrarTrabajador(area, ruta, recol);
                    break;

                case 4:
                    admin.mostrarTrabajador();
                    break;

                case 5:
                    admin.visualizarReporte(recol);
                    break;
            }
        } while (opciones != 6);
    } else if (opcion == 'U') {
        ClsUsuario usuario;
        usuario.registrarUsuario();
        usuario.mostrarUsuario();
    } else {
        cout << "Opción incorrecta." << endl;
    }

    return 0;
}

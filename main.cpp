#include <iostream>
using namespace std;
#include "Registro.h"
#include "clsAreas.h"
#include "ClsAdministrador.h"
#include "clsHorarioRecolec.h"
#include "clsRutaRecorrido.h"
#include "clsVehiRecolecc.h"

int main(){
    char opcion;
    int opciones;
    clsAreas area;
    clsHorarioRecolec hor;
    clsRutaRecorrido ruta;
    clsVehiRecolecc recol;
    cout<<"BIENVENIDO";
    cout<<"Es usted Administrador o Usuario(Trabajador)?: A/U "; cin>>opcion;
    if(opcion == 'A'){
        ClsAdministrador admin;
        admin.registrarAdministrador();
    }
    else if (opcion == 'U') {
        ClsAdministrador usuario;
        usuario.registrarUsuario();
	}else{
		cout<<"opcion incorrecta ..";
	}
	
	if (opcion=='A')
	{  
	ClsAdministrador admin;
    do{
        cout << "\n --- MENU PRINCIPAL ---" << endl;
        cout << "1. Registrar Usuario " << endl;
        cout << "2. Mostrar Usuarios " << endl;
        cout << "3. Registrar Trabajador " << endl;
        cout << "4. Mostrar Trabajadores" << endl;
        cout << "5. Vizualizar reporte "<<endl;
        cout << "6. Salir. "<<endl;
        cout << "Seleccione una opcion: ";
        cin >> opciones;
    	switch(opciones){
        	case 1: {
            	admin.registrarUsuario();
            	break;
        	}
        	case 2:{
            	admin.mostrarUsuario();
            	break;
        	}
        	case 3: { 
            	admin.registrarTrabajador(area, ruta, recol);
            	break;
				}
        	case 4:{
            	admin.mostrarTrabajador();
            	break;
        	}
        	case 5: {
            	admin.visualizarReporte(recol);
            	break;   
        	}        	
    	}
    }while(opciones!=6);
    }	
	 
    else{
        do{
        cout << "\n --- MENU PRINCIPAL ---" << endl;
        cout << "1. Registrar Reporte " << endl;
        cout << "2. Mostrar Datos " << endl;
        cout << "3. Vizualizar reporte "<<endl;
        cout << "4. Salir. "<<endl;
        cout << "Seleccione una opcion: ";
        cin >> opciones;
    	switch(opciones){
        	case 1: {
            	break;   
        	}        	
    	}
    }while(opciones!=6);
    }
return 0 ;
}
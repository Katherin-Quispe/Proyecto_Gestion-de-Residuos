#include <iostream>
using namespace std;
#ifndef CLSRUTARECORRIDO_H
#define CLSRUTARECORRIDO_H

class clsRutaRecorrido{
    private:
        string ruta;
    public:
        void asignarRutaIda();
        void asignarRutaRegreso();
        void ActualizarRuta();
};

#endif

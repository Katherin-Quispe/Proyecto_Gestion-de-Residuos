#include <iostream>
using namespace std;
#ifndef CLSRUTARECORRIDO_H
#define CLSRUTARECORRIDO_H

class clsRutaRecorrido{
    private:
        string rutaIda;
        string rutaReg;
    public:
        void asignarRutaIda();
        void asignarRutaRegreso();
        void ActualizarRuta();
};

#endif

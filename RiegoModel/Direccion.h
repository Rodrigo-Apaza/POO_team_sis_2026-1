/**
 * Project Untitled
 */


#ifndef _DIRECCION_H
#define _DIRECCION_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class Direccion {
    public:


    private:
        property String^ idZona;
        property String^ nombreDescriptivo;
        property String^ coordenadasPoligono;
        property float areaMetrosCuadrados;
        
        property bool bloqueadaManual;
        property String^ motivoBloqueo;
    };
}
#endif 
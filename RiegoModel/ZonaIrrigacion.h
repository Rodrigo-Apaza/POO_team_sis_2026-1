/**
 * Project Untitled
 */


#ifndef _ZONAIRRIGACION_H
#define _ZONAIRRIGACION_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class ZonaIrrigacion {
    public:


    private:
        property String^ idZona;
        property String^ nombreDescriptivo;
        property String^ coordenadasPoligono;
        property float areaMetrosCuadrados;
        property String^ tipoSuelo;
        property float nivelErosionCritico;
        property bool bloqueadaManual;
        property String^ motivoBloqueo;
        property String^ colorEstadoSalud;
    };
}
#endif //_ZONAIRRIGACION_H
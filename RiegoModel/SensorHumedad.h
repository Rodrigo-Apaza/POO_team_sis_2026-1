/**
 * Project Untitled
 */


#ifndef _SENSORHUMEDAD_H
#define _SENSORHUMEDAD_H

#include "Hardware.h"


using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class SensorHumedad : public Hardware {
    public:
        property int      Id;
        property int      Numero;
        property String^  Modelo;
        property String^  EstadoOperacional;
        property DateTime UltimoRegistro;

    private:
        property String^ ubicacionGPS;
        property float humedadActual;
        property float temperaturaActual;
        property float voltajeBateria;
        property bool estadoCalibracion;
    };
}
#endif //_SENSORHUMEDAD_H
#ifndef _SENSORTEMPERATURA_H
#define _SENSORTEMPERATURA_H

#include "Hardware.h"

using namespace System;

namespace RiegoModel {
    [Serializable]
    public ref class SensorTemperatura : public Hardware {
    public:
        property int      Id;
        property int      Numero;
        property String^  Modelo;
        property String^  EstadoOperacional;
        property DateTime UltimoRegistro;
    };
}
#endif //_SENSORTEMPERATURA_H

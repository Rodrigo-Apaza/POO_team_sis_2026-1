/**
 * Project Untitled
 */


#ifndef _VALVULARIEGO_H
#define _VALVULARIEGO_H

#include "Hardware.h"


using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class ValvulaRiego : public Hardware {
    public:

        
    private:
        property String^ tipoValvula;
        property float caudalActual;
        property float presionActual;
        property long tiempoTotalApertura;
    };
}
#endif //_VALVULARIEGO_H
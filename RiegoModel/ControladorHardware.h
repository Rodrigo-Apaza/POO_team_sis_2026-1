/**
 * Project Untitled
 */


#ifndef _CONTROLADORHARDWARE_H
#define _CONTROLADORHARDWARE_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class ControladorHardware {
    public:
        
    private:
        property String^ puertoComunicacion;
        property int baudRate;
        property String^ ultimaRespuesta;

        
        
    };
}

#endif //_CONTROLADORHARDWARE_H
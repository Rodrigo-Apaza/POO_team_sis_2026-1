/**
 * Project Untitled
 */


#ifndef _REGISTROACTIVIDAD_H
#define _REGISTROACTIVIDAD_H
#include "user.h"

using namespace System;
using namespace System::Collections::Generic;


namespace RiegoModel {
    [Serializable]
    public ref class RegistroActividad {
    public:

    private:
        property long idRegistro;
        property DateTime timestamp;
        property String^ tipoAccion;
        property String^ descripcion;
        property user^ usuarioEjecutor;
        property String^ direccionIP;
        property String^ datosAdicionales;
    };
}
#endif //_REGISTROACTIVIDAD_H
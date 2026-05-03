/**
 * Project Untitled
 */


#ifndef _HARDWARE_H
#define _HARDWARE_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class Hardware {
    public:

    private:
        property String^ idDispositivo;
        property String^ modelo;
        property bool estadoOperacional;
        property DateTime ultimaComunicacion;
    };
}
#endif //_HARDWARE_H
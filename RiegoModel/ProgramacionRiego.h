/**
 * Project Untitled
 */


#ifndef _PROGRAMACIONRIEGO_H
#define _PROGRAMACIONRIEGO_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class ProgramacionRiego {
    public:

      
    private:
        property int idProgramacion;
        property String^ idZona;
        property int tipoProgramacion;
        property TimeSpan horaInicio;
        property int duracionMinutos;
        property bool activa;
    };
}
#endif //_PROGRAMACIONRIEGO_H
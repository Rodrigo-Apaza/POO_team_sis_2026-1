/**
 * Project Untitled
 */


#ifndef _INCIDENCIA_H
#define _INCIDENCIA_H
#include "Operario.h"
#include "Direccion.h"
#include "Supervisor.h"
#include "Suelo.h"


using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class Incidencia {
    public:

    private:
        property int idIncidencia;
        property String^ titulo;
        property String^ descripcionDetallada;
        property String^ rutaImagenLocal;
        property DateTime fechaReporte;
        property String^ estado;
        property Operario^ operarioReporta;
        property Direccion^ zonaAfectada;
        property Supervisor^ supervisorAsignado;
    };
}
#endif //_INCIDENCIA_H
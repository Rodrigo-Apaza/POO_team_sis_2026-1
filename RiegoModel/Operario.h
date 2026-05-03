/**
 * Project Untitled
 */


#ifndef _OPERARIO_H
#define _OPERARIO_H

#include "user.h"


using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class Operario : public user {
    public:
        property String^ zonaAsignadaPrincipal;
        property String^ nivelAcceso;

    };
}
#endif //_OPERARIO_H
/**
 * Project Untitled
 */


#ifndef _ADMINISTRADOR_H
#define _ADMINISTRADOR_H

#include "user.h"

using namespace System;
using namespace System::Collections::Generic;
namespace RiegoModel {
    [Serializable]
    public ref class Administrador : public user {
    public:
         
    private:
        property String^ nivelAcceso ;
    };

}

#endif //_ADMINISTRADOR_H
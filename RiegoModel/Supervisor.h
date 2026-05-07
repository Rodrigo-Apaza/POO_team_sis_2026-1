/**
 * Project Untitled
 */


#ifndef _SUPERVISOR_H
#define _SUPERVISOR_H

#include "user.h"


using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class Supervisor : public user {
    public:
        List<String^>^ zonasAsignadas = gcnew List<String^>();
        property String^ nivelAcceso ;

       
    };
}
#endif //_SUPERVISOR_H
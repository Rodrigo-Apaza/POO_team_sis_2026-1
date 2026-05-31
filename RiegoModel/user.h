/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class user {
    public:
        property int Id;
        property String^ username;
        property String^ correo;
        property String^ nombreusuario;
        property bool activo;
        property DateTime fecharegistro;
        property String^ Status;
        property array<Byte>^ Photo;

       
    };
}
#endif //_USER_H
#pragma once
#ifndef _SUELO_H
#define _SUELO_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class Suelo {
    public:


    private:
        property String^ tipoSuelo;
        property float nivelErosionCritico;
        property String^ colorEstadoSalud;
    };
}
#endif 
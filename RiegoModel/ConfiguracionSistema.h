/**
 * Project Untitled
 */


#ifndef _CONFIGURACIONSISTEMA_H
#define _CONFIGURACIONSISTEMA_H

using namespace System;

namespace RiegoModel {
    [Serializable]
    public ref class ConfiguracionSistema {
    public:


    private:
        property float umbralHumedadGlobalMin;
        property float umbralHumedadGlobalMax;
        property int intervaloMuestreoSensoresSeg;
        property String^ idiomaInterfaz;
        property String^ rutaAlmacenamientoImagenes;
    };
}
#endif //_CONFIGURACIONSISTEMA_H
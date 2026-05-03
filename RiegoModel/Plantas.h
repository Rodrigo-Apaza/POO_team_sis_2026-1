#ifndef _PLANTAS_H
#define _PLANTAS_H

using namespace System;
using namespace System::Collections::Generic;

namespace RiegoModel {
    [Serializable]
    public ref class Plantas {
    public:
        property int Id;
        property String^ plantname;
        property double  optimalHumidity ;
        property double  optimalTemp;
        property String^ Status;
        property array<Byte>^ Photo;

        Plantas(int id, String^ name, double humidity, double temp, String^ status, array<Byte>^ photo) {
            Id = id;
            plantname = name;
            optimalHumidity = humidity;
            optimalTemp = temp;
            Status = status;
            Photo = photo;
        }
         

    };
}
#endif //_USER_H

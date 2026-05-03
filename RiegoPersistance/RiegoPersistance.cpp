#include "pch.h"

#include "RiegoPersistance.h"
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;
using namespace System::Xml::Serialization;

void RiegoPersistance::Persistance::PersistTextFile(String^ plantstxtfileName, List<Plantas^>^ plantasDB)
{
	throw gcnew System::NotImplementedException();
}

Object^ RiegoPersistance::Persistance::LoadPlantasFromTextFile(String^ plantstxtfileName)
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

int RiegoPersistance::Persistance::AddPlanta(Plantas^ Plantas)
{
	plantasDB->Add(Plantas);

	//USAR SIGUEINTE CODIGO SI QUIERE PERSISTENCIA POR TEXTO
	PersistTextFile(plantstxtfileName, plantasDB);

	return Plantas->Id;

}

int RiegoPersistance::Persistance::UpdatePlanta(Plantas^ Plantas)
{
	for (int i = 0; i < plantasDB->Count; i++) {
		if (plantasDB[i]->Id == Plantas->Id) {
			plantasDB[i] = Plantas;

			//USAR SIGUEINTE CODIGO SI QUIERE PERSISTENCIA POR TEXTO
			PersistTextFile(plantstxtfileName, plantasDB);

			return 1;
		}
	}
	return 0;
}

int RiegoPersistance::Persistance::DeletePlanta(int PlantasId)
{
	for (int i = 0; i < plantasDB->Count; i++) {
		if (plantasDB[i]->Id == PlantasId) {
			plantasDB->RemoveAt(i);
			//USAR SIGUEINTE CODIGO SI QUIERE PERSISTENCIA POR TEXTO
			PersistTextFile(plantstxtfileName, plantasDB);

			return 1;
		}
	}
	return 0;

}

List<Plantas^>^ RiegoPersistance::Persistance::QueryAllPlantas()
{
    
	
	Object^ res = LoadPlantasFromTextFile(plantstxtfileName);
	if (res != nullptr)
		plantasDB = (List<Plantas^>^)res;

	////USAR SIGUEINTE CODIGO SI QUIERE LECTURA DEL ARCHIVO POR TEXTO
	// Esta es la clase que nos permitira leer un csv y convertirlo a lo que necesita el forms
	// Lo que se hace ademas es el casteo ya que la clase LoadDishes..... devuelve un objeto y dishesDB una lista 
	//(List<Dish^>^) es el casteo
	plantasDB = (List<Plantas^>^)LoadPlantasFromTextFile(plantstxtfileName);
	return plantasDB;

}

Plantas^ RiegoPersistance::Persistance::QuerPlantaById(int PlantasId)
{
	for each (Plantas ^ Plantas in plantasDB) {
		if (Plantas->Id == PlantasId)
			return Plantas;
	}
	return nullptr;

}

#include "pch.h"

#include "RiegoPersistance.h"

using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace RiegoModel;

void RiegoPersistance::Persistance::PersistTextFile(String^ plantstxtfileName, List<Plantas^>^ plantasDB)
{
	//usamos las sgtes 2 clases IO para definir los objetos file y writer que nos ayudaran en la lectura
	FileStream^ file = nullptr;
	StreamWriter^ writer = nullptr;
	// El try catch es por si ocurre un error 
	// Linea 13 y 14 definen los objetos si solo se escribira ,su creacion etc.
	try {
		file = gcnew FileStream(plantstxtfileName, FileMode::Create, FileAccess::Write);
		writer = gcnew StreamWriter(file);
		// aqui se añaden los datos de cada plato, es un string normal pero lo que se escribe en el esta separado por |
		for each (Plantas ^ Plantas in plantasDB) {
			writer->WriteLine("{0}|{1}|{2}|{3}|{4}|{5}",
				Plantas->Id, Plantas->plantname, Plantas->optimalHumidity, Plantas->optimalTemp, Plantas->Status, Plantas->Photo);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		//Sirve para liberar memoria
		if (writer != nullptr) writer->Close();
		if (file != nullptr) file->Close();
	}
}
Object^ RiegoPersistance::Persistance::LoadPlantasFromTextFile(String^ plantstxtfileName)
{
	// Crea el objeto si este no existe con anterioridad 
	if (!File::Exists(plantstxtfileName)) {
		File::Create(plantstxtfileName)->Close();
	}
	//El objeto result es el que guardara todo lo leido
	FileStream^ file;
	StreamReader^ reader;
	Object^ result = gcnew List<Plantas^>();
	try {
		//defincion de las caracteristicas de los objetos file y reader
		file = gcnew FileStream(plantstxtfileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		// Mientras nose acabe el archivo
		while (!reader->EndOfStream) {
			// Las siguiente 2 lineas sirven para leer el archivo y las separaciones hechas con |
			String^ line = reader->ReadLine();
			array<String^>^ record = line->Split('|');
			//Creamos el objeto Dish y ahi agregamos los datos a sus respectivos atributos
			//Se crea directamente MainDish y no Dish porque en el forms hay una funcion que solo permite MainDish
			//Dish no es un MainDish sino al reves, por eso ocurre el error
			RiegoModel::Plantas^ Plantas = gcnew RiegoModel::Plantas();
			Plantas->Id = Convert::ToInt32(record[0]);
			Plantas->plantname = record[1];
			Plantas->optimalHumidity = Convert::ToDouble(record[2]);
			Plantas->optimalTemp = Convert::ToDouble(record[3]);
			Plantas->Status = (record[4]);
			Plantas->Photo = Convert::FromBase64String((String^)record[5]);
			//Añadimos este nuevo dish creado a la lista de dishes
			//Tenemos q castear porque result es un objeto y como tal no posee la caracterisitca Add propia de una lista
			((List<RiegoModel::Plantas^>^)result)->Add(Plantas);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	// Igual que en el anterior lo hacemos para guardar memoria, procedimiento correcto
	finally {
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
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

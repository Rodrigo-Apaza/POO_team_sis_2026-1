
using namespace RiegoModel;  //necesario
using namespace System::Collections::Generic;
using namespace System;
// Aqui tbn se tiene que poner esta linea para guardado de archivos XML
using namespace System::Xml::Serialization;

namespace RiegoPersistance {
	public ref class Persistance
	{
	private:
		// Estamos creando una lista donde se alamacenaran todos las plantas
		static List<Plantas^>^ plantasDB = gcnew List<Plantas^>();
		
		// Este codigo solo se usara desde que se toque el tema de persistencia de datos en archivos
		// Es la clase que servira para darnos una plantilla de escritura, el void inicial es lo que devuelve
		static void PersistTextFile(String^ fileName, List<Plantas^>^ plantasDB);
		// Es la clase que servira para darnos una plantilla de lectura, el void inicial es lo que devuelve
		static Object^ LoadPlantasFromTextFile(String^ plantstxtfileName);

	public:

		//Esto tambien es para guardar en un archivo, estamos declarando fileName porque plantasDB ya esta arriba
		static String^ plantstxtfileName = "plantas.csv";




		// Metodos CRUD son los siguientes, pueden tener el nombre que sea , el static es para que sean metodos estaticos
		static int AddPlanta(Plantas^ Plantas);
		static int UpdatePlanta(Plantas^ Plantas);
		static int DeletePlanta(int PlantasId);
		static List<Plantas^>^ QueryAllPlantas();
		static Plantas^ QuerPlantaById(int PlantasId);
		






	};
}

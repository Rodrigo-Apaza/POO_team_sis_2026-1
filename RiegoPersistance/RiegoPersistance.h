
using namespace RiegoModel;  //necesario
using namespace System::Collections::Generic;
using namespace System;
using namespace System::Xml::Serialization;

namespace RiegoPersistance {
	public ref class Persistance
	{
	private:
		static List<Plantas^>^ plantasDB = gcnew List<Plantas^>();
		static void PersistTextFile(String^ fileName, List<Plantas^>^ plantasDB);
		static Object^ LoadPlantasFromTextFile(String^ plantstxtfileName);

		static List<user^>^ usersDB = gcnew List<user^>();

	public:
		static String^ plantstxtfileName = "plantas.csv";

		// CRUD - PLANTAS
		static int AddPlanta(Plantas^ Plantas);
		static int UpdatePlanta(Plantas^ Plantas);
		static int DeletePlanta(int PlantasId);
		static List<Plantas^>^ QueryAllPlantas();
		static Plantas^ QuerPlantaById(int PlantasId);

		// CRUD - USERS
		static int SaveUser(user^ u);
		static List<user^>^ LoadUsers();
		static user^ QueryUserById(int userId);
		static int UpdateUser(user^ updatedUser);
		static int DeleteUser(int userId);

	private:
		static List<Suelo^>^ sueloDB = gcnew List<Suelo^>();
		static List<SensorHumedad^>^    sensorHumDB  = gcnew List<SensorHumedad^>();
		static List<SensorTemperatura^>^ sensorTempDB = gcnew List<SensorTemperatura^>();

	public:
		// CRUD - SUELOS
		static int SaveSuelo(Suelo^ suelo);
		static List<Suelo^>^ LoadSuelo();
		static Suelo^ QuerySueloById(int sueloId);
		static int UpdateSuelo(Suelo^ updatedSuelo);
		static int DeleteSuelo(int sueloId);

		// CRUD - SENSOR HUMEDAD
		static String^ sensorHumFileName = "sensores_humedad.xml";
		static int SaveSensorHumedad(SensorHumedad^ sensor);
		static List<SensorHumedad^>^ LoadSensorHumedad();
		static SensorHumedad^ QuerySensorHumedadById(int id);
		static int UpdateSensorHumedad(SensorHumedad^ updatedSensor);
		static int DeleteSensorHumedad(int id);

		// CRUD - SENSOR TEMPERATURA
		static String^ sensorTempFileName = "sensores_temperatura.xml";
		static int SaveSensorTemperatura(SensorTemperatura^ sensor);
		static List<SensorTemperatura^>^ LoadSensorTemperatura();
		static SensorTemperatura^ QuerySensorTemperaturaById(int id);
		static int UpdateSensorTemperatura(SensorTemperatura^ updatedSensor);
		static int DeleteSensorTemperatura(int id);

	private:
		static void PersistSensorHumXml(String^ fileName, List<SensorHumedad^>^ db);
		static List<SensorHumedad^>^ LoadSensorHumFromXml(String^ fileName);
		static void PersistSensorTempXml(String^ fileName, List<SensorTemperatura^>^ db);
		static List<SensorTemperatura^>^ LoadSensorTempFromXml(String^ fileName);
	};
}

#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RiegoModel;
using namespace RiegoPersistance;

namespace RiegoService {
	public ref class Service
	{
	public:
		// CRUD - USERS
		static int AddUser(user^ User);
		static List<user^>^ GetAllUsers();
		static user^ GetUsersById(int userId);
		static int UpdateUser(user^ updatedUser);
		static int DeleteUser(int userId);

		// CRUD - SUELOS
		static int AddSuelo(Suelo^ suelo);
		static List<Suelo^>^ GetAllSuelo();
		static Suelo^ GetSueloById(int sueloId);
		static int UpdateSuelo(Suelo^ updatedSuelo);
		static int DeleteSuelo(int sueloId);

		// CRUD - PLANTA
		static int AddPlanta(Plantas^ Plantas);
		static int UpdatePlanta(Plantas^ Plantas);
		static int DeletePlanta(int PlantasId);
		static List<Plantas^>^ QueryAllPlantas();
		static Plantas^ QuerPlantaById(int PlantasId);

		// CRUD - SENSOR HUMEDAD
		static int AddSensorHumedad(SensorHumedad^ sensor);
		static List<SensorHumedad^>^ GetAllSensorHumedad();
		static SensorHumedad^ GetSensorHumedadById(int id);
		static int UpdateSensorHumedad(SensorHumedad^ updatedSensor);
		static int DeleteSensorHumedad(int id);

		// CRUD - SENSOR TEMPERATURA
		static int AddSensorTemperatura(SensorTemperatura^ sensor);
		static List<SensorTemperatura^>^ GetAllSensorTemperatura();
		static SensorTemperatura^ GetSensorTemperaturaById(int id);
		static int UpdateSensorTemperatura(SensorTemperatura^ updatedSensor);
		static int DeleteSensorTemperatura(int id);
	};
}

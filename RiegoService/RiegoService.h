#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RiegoModel;
using namespace RiegoPersistance;

namespace RiegoService {
	public ref class Service
	{
	public:
		// MÉTODOS CRUD - USERS
		static int AddUser(user^ User);
		static List<user^>^ GetAllUsers();
		static user^ GetUsersById(int userId);
		static int UpdateUser(user^ updatedUser);
		static int DeleteUser(int userId);




		// MÉTODOS CRUD - SUELOS
		static int AddSuelo(Suelo^ suelo);
		static List<Suelo^>^ GetAllSuelo();
		static Suelo^ GetSueloById(int sueloId);
		static int UpdateSuelo(Suelo^ updatedSuelo);
		static int DeleteSuelo(int sueloId);

		// MÉTODOS CRUD - PLANTA
		static int AddPlanta(Plantas^ Plantas);
		static int UpdatePlanta(Plantas^ Plantas);
		static int DeletePlanta(int PlantasId);
		static List<Plantas^>^ QueryAllPlantas();
		static Plantas^ QuerPlantaById(int PlantasId);









		//gente, tratemos de trabajar en un orden secuencial para todos los archivos, 
// de  modo que sea más fácil encontrar algún eror que pueda aparecer en el código ATTE. Aranthza
//Fernando tmb dejó algunas notas en algunos archivos





		// MÉTODOS CRUD - HARDWARE


	};
}

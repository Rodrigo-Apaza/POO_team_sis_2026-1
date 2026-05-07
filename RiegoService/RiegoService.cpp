#include "pch.h"

#include "RiegoService.h"
//DEFINICÕ”N DE M…TODOS USADOS EN M…TODOS CRUD PARA PLANTAS 



//DEFINICÕ”N DE M…TODOS USADOS EN M…TODOS CRUD PARA USERS

int RiegoService::Service::AddUser(user^ User) {
	return Persistance::SaveUser(User);
}

List<user^>^ RiegoService::Service::GetAllUsers() {
	return Persistance::LoadUsers();
}

user^ RiegoService::Service::GetUsersById(int userId) {
	return Persistance::QueryUserById(userId);
}

int RiegoService::Service::UpdateUser(user^ updatedUser) {
	return Persistance::UpdateUser(updatedUser);
}

int RiegoService::Service::DeleteUser(int userId) {
	return Persistance::DeleteUser(userId);
}



//DEFINICÕ”N DE M…TODOS USADOS EN M…TODOS CRUD PARA SUELOS

int RiegoService::Service::AddSuelo(Suelo^ suelo)
{
	return Persistance::SaveSuelo(suelo);
}

List<Suelo^>^ RiegoService::Service::GetAllSuelo()
{
	return Persistance::LoadSuelo();
}

Suelo^ RiegoService::Service::GetSueloById(int sueloId)
{
	return Persistance::QuerySueloById(sueloId);
}

int RiegoService::Service::UpdateSuelo(Suelo^ updatedSuelo)
{
	return Persistance::UpdateSuelo(updatedSuelo);
}

int RiegoService::Service::DeleteSuelo(int sueloId)
{
	return Persistance::DeleteSuelo(sueloId);
}


//Service Planta
int RiegoService::Service::AddPlanta(Plantas^ Plantas)
{
	return Persistance::AddPlanta(Plantas);
}

int RiegoService::Service::UpdatePlanta(Plantas^ Plantas)
{
	return Persistance::UpdatePlanta(Plantas);
}

int RiegoService::Service::DeletePlanta(int PlantasId)
{
	return Persistance::DeletePlanta(PlantasId);
}

List<Plantas^>^ RiegoService::Service::QueryAllPlantas()
{
	return Persistance::QueryAllPlantas();
}

Plantas^ RiegoService::Service::QuerPlantaById(int PlantasId)
{
	return Persistance::QuerPlantaById(PlantasId);
}






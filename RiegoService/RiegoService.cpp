#include "pch.h"

#include "RiegoService.h"
//DEFINICÍÓN DE MÉTODOS USADOS EN MÉTODOS CRUD PARA PLANTAS 



//DEFINICÍÓN DE MÉTODOS USADOS EN MÉTODOS CRUD PARA USERS

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



//DEFINICÍÓN DE MÉTODOS USADOS EN MÉTODOS CRUD PARA SUELOS

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


//DEFINICION DE METODOS CRUD PARA SENSOR HUMEDAD

int RiegoService::Service::AddSensorHumedad(SensorHumedad^ sensor)
{
	return Persistance::SaveSensorHumedad(sensor);
}

List<SensorHumedad^>^ RiegoService::Service::GetAllSensorHumedad()
{
	return Persistance::LoadSensorHumedad();
}

SensorHumedad^ RiegoService::Service::GetSensorHumedadById(int id)
{
	return Persistance::QuerySensorHumedadById(id);
}

int RiegoService::Service::UpdateSensorHumedad(SensorHumedad^ updatedSensor)
{
	return Persistance::UpdateSensorHumedad(updatedSensor);
}

int RiegoService::Service::DeleteSensorHumedad(int id)
{
	return Persistance::DeleteSensorHumedad(id);
}

//DEFINICION DE METODOS CRUD PARA SENSOR TEMPERATURA

int RiegoService::Service::AddSensorTemperatura(SensorTemperatura^ sensor)
{
	return Persistance::SaveSensorTemperatura(sensor);
}

List<SensorTemperatura^>^ RiegoService::Service::GetAllSensorTemperatura()
{
	return Persistance::LoadSensorTemperatura();
}

SensorTemperatura^ RiegoService::Service::GetSensorTemperaturaById(int id)
{
	return Persistance::QuerySensorTemperaturaById(id);
}

int RiegoService::Service::UpdateSensorTemperatura(SensorTemperatura^ updatedSensor)
{
	return Persistance::UpdateSensorTemperatura(updatedSensor);
}

int RiegoService::Service::DeleteSensorTemperatura(int id)
{
	return Persistance::DeleteSensorTemperatura(id);
}

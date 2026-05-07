#include "RiegoMainForm.h"
using namespace RiegoGUIApp;

[STAThreadAttribute]
int Main() {
	//LoadDishes(); // Cargar platos iniciales antes de mostrar la interfaz
	RiegoMainForm^ mainForm = gcnew RiegoMainForm();
	Application::Run(mainForm);
	return 0;
}

#include "PlantasForm.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //POO First time.
    RiegoGUIApp::PlantasForm form;
    Application::Run(% form);
}


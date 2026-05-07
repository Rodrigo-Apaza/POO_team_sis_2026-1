#pragma once
#include "PlantasForm.h"
#include "SueloForm.h"
#include "DireccionForm.h"
#include "SensorForm.h"

namespace RiegoGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RiegoModel;
	using namespace RiegoService;

	/// <summary>
	/// Resumen de RiegoMainForm
	/// </summary>
	public ref class RiegoMainForm : public System::Windows::Forms::Form
	{
	public:
		RiegoMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RiegoMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ plantasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ suelosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ direccionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensoresToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plantasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->suelosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->direccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(847, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RiegoMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->plantasToolStripMenuItem,
					this->suelosToolStripMenuItem, this->direccionToolStripMenuItem, this->sensoresToolStripMenuItem, this->usuariosToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &RiegoMainForm::mantenimientoToolStripMenuItem_Click);
			// 
			// plantasToolStripMenuItem
			// 
			this->plantasToolStripMenuItem->Name = L"plantasToolStripMenuItem";
			this->plantasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->plantasToolStripMenuItem->Text = L"Plantas";
			this->plantasToolStripMenuItem->Click += gcnew System::EventHandler(this, &RiegoMainForm::plantasToolStripMenuItem_Click);
			// 
			// suelosToolStripMenuItem
			// 
			this->suelosToolStripMenuItem->Name = L"suelosToolStripMenuItem";
			this->suelosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->suelosToolStripMenuItem->Text = L"Suelos";
			this->suelosToolStripMenuItem->Click += gcnew System::EventHandler(this, &RiegoMainForm::suelosToolStripMenuItem_Click);
			// 
			// direccionToolStripMenuItem
			// 
			this->direccionToolStripMenuItem->Name = L"direccionToolStripMenuItem";
			this->direccionToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->direccionToolStripMenuItem->Text = L"Direccion";
			this->direccionToolStripMenuItem->Click += gcnew System::EventHandler(this, &RiegoMainForm::direccionToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &RiegoMainForm::sensoresToolStripMenuItem_Click);
			// 
			// RiegoMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 545);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RiegoMainForm";
			this->Text = L"RiegoMainForm";
			this->Load += gcnew System::EventHandler(this, &RiegoMainForm::RiegoMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void RiegoMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void plantasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PlantasForm^ plantasForm = gcnew PlantasForm();

	plantasForm -> Show();
}
private: System::Void suelosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SueloForm^ sueloForm = gcnew SueloForm();

	sueloForm->Show();
}
private: System::Void direccionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DireccionForm^ direccionForm = gcnew DireccionForm();

	direccionForm->Show();
}
private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SensorForm^ sensorForm = gcnew SensorForm();

	sensorForm->Show();
}
};
}

#pragma once

namespace RiegoGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RiegoModel;
	using namespace RiegoPersistance;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de PlantasForm
	/// </summary>
	public ref class PlantasForm : public System::Windows::Forms::Form
	{
	public:
		PlantasForm(void)
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
		~PlantasForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ addplantbtn;
	private: System::Windows::Forms::Button^ deleteplantbtn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlantaName;

	protected:

	protected:


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
			this->addplantbtn = (gcnew System::Windows::Forms::Button());
			this->deleteplantbtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->PlantaName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// addplantbtn
			// 
			this->addplantbtn->Location = System::Drawing::Point(437, 47);
			this->addplantbtn->Name = L"addplantbtn";
			this->addplantbtn->Size = System::Drawing::Size(75, 23);
			this->addplantbtn->TabIndex = 0;
			this->addplantbtn->Text = L"Agregar";
			this->addplantbtn->UseVisualStyleBackColor = true;
			this->addplantbtn->Click += gcnew System::EventHandler(this, &PlantasForm::button1_Click);
			// 
			// deleteplantbtn
			// 
			this->deleteplantbtn->Location = System::Drawing::Point(437, 76);
			this->deleteplantbtn->Name = L"deleteplantbtn";
			this->deleteplantbtn->Size = System::Drawing::Size(75, 23);
			this->deleteplantbtn->TabIndex = 1;
			this->deleteplantbtn->Text = L"Eliminar";
			this->deleteplantbtn->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->PlantaName });
			this->dataGridView1->Location = System::Drawing::Point(26, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PlantasForm::dataGridView1_CellContentClick);
			// 
			// PlantaName
			// 
			this->PlantaName->HeaderText = L"Nombre";
			this->PlantaName->MinimumWidth = 6;
			this->PlantaName->Name = L"PlantaName";
			this->PlantaName->Width = 125;
			// 
			// PlantasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 326);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->deleteplantbtn);
			this->Controls->Add(this->addplantbtn);
			this->Name = L"PlantasForm";
			this->Text = L"PlantasForm";
			this->Load += gcnew System::EventHandler(this, &PlantasForm::PlantasForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PlantasForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
};
}

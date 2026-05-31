#pragma once

namespace RiegoGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class SensorTemperaturaForm : public System::Windows::Forms::Form
	{
	public:
		SensorTemperaturaForm(void) { InitializeComponent(); }

	protected:
		~SensorTemperaturaForm() { if (components) { delete components; } }

	private: System::Windows::Forms::Label^       label1;
	private: System::Windows::Forms::Label^       label2;
	private: System::Windows::Forms::Label^       label3;
	private: System::Windows::Forms::Label^       label4;
	private: System::Windows::Forms::Label^       label5;
	private: System::Windows::Forms::TextBox^     txtId;
	private: System::Windows::Forms::TextBox^     txtModelo;
	private: System::Windows::Forms::TextBox^     txtNumero;
	private: System::Windows::Forms::ComboBox^    cmbEstado;
	private: System::Windows::Forms::DateTimePicker^ dtpUltimoRegistro;
	private: System::Windows::Forms::DataGridView^   dataGridViewSensor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colUltimoRegistro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNumero;
	private: System::Windows::Forms::Button^      btnGuardar;
	private: System::Windows::Forms::Button^      btnEditar;
	private: System::Windows::Forms::Button^      btnBorrar;
	private: System::Windows::Forms::Button^      btnLimpiar;
	private: System::ComponentModel::Container^   components;

	private:
		void LoadGrid();
		System::Void SensorTemperaturaForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void dataGridViewSensor_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnBorrar_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e);

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1           = (gcnew System::Windows::Forms::Label());
			this->label2           = (gcnew System::Windows::Forms::Label());
			this->label3           = (gcnew System::Windows::Forms::Label());
			this->label4           = (gcnew System::Windows::Forms::Label());
			this->txtId            = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo        = (gcnew System::Windows::Forms::TextBox());
			this->txtNumero        = (gcnew System::Windows::Forms::TextBox());
			this->label5           = (gcnew System::Windows::Forms::Label());
			this->colNumero        = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cmbEstado        = (gcnew System::Windows::Forms::ComboBox());
			this->dtpUltimoRegistro= (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridViewSensor = (gcnew System::Windows::Forms::DataGridView());
			this->colId            = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelo        = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado        = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colUltimoRegistro= (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnGuardar       = (gcnew System::Windows::Forms::Button());
			this->btnEditar        = (gcnew System::Windows::Forms::Button());
			this->btnBorrar        = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar     = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSensor))->BeginInit();
			this->SuspendLayout();
			// label1
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// label2
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 82);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Modelo:";
			// label3
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 138);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Estado Operacional:";
			// label5
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 226);
			this->label5->Text = L"Numero:";
			// txtNumero
			this->txtNumero->Location = System::Drawing::Point(210, 222);
			this->txtNumero->Size = System::Drawing::Size(111, 22);
			// label4
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 192);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ultimo Registro:";
			// txtId
			this->txtId->Location = System::Drawing::Point(210, 34);
			this->txtId->Size = System::Drawing::Size(111, 22);
			this->txtId->TabIndex = 4;
			// txtModelo
			this->txtModelo->Location = System::Drawing::Point(210, 82);
			this->txtModelo->Size = System::Drawing::Size(111, 22);
			this->txtModelo->TabIndex = 5;
			// cmbEstado
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Items->AddRange(gcnew cli::array<System::Object^>(4) {
				L"Activo", L"Inactivo", L"Mantenimiento", L"Fuera de Servicio"
			});
			this->cmbEstado->Location = System::Drawing::Point(210, 130);
			this->cmbEstado->Size = System::Drawing::Size(111, 24);
			this->cmbEstado->TabIndex = 6;
			// dtpUltimoRegistro
			this->dtpUltimoRegistro->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpUltimoRegistro->Location = System::Drawing::Point(210, 186);
			this->dtpUltimoRegistro->Size = System::Drawing::Size(123, 22);
			this->dtpUltimoRegistro->TabIndex = 7;
			// dataGridViewSensor
			this->dataGridViewSensor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSensor->Columns->AddRange(gcnew cli::array<System::Windows::Forms::DataGridViewColumn^>(5) {
				this->colId, this->colModelo, this->colEstado, this->colUltimoRegistro, this->colNumero
			});
			this->dataGridViewSensor->Location = System::Drawing::Point(51, 250);
			this->dataGridViewSensor->RowHeadersWidth = 51;
			this->dataGridViewSensor->RowTemplate->Height = 24;
			this->dataGridViewSensor->Size = System::Drawing::Size(769, 273);
			this->dataGridViewSensor->TabIndex = 8;
			this->dataGridViewSensor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SensorTemperaturaForm::dataGridViewSensor_CellContentClick);
			// colId
			this->colId->HeaderText = L"Id";          this->colId->Width = 60;
			// colModelo
			this->colModelo->HeaderText = L"Modelo";  this->colModelo->Width = 125;
			// colEstado
			this->colEstado->HeaderText = L"Estado Operacional"; this->colEstado->Width = 150;
			// colUltimoRegistro
			this->colUltimoRegistro->HeaderText = L"Ultimo Registro"; this->colUltimoRegistro->Width = 125;
			// colNumero
			this->colNumero->HeaderText = L"Numero";
			this->colNumero->Width = 80;
			// btnLimpiar
			this->btnLimpiar->Location = System::Drawing::Point(480, 524);
			this->btnLimpiar->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &SensorTemperaturaForm::btnLimpiar_Click);
			// btnGuardar
			this->btnGuardar->Location = System::Drawing::Point(591, 554);
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 9;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->Click += gcnew System::EventHandler(this, &SensorTemperaturaForm::btnGuardar_Click);
			// btnEditar
			this->btnEditar->Location = System::Drawing::Point(689, 554);
			this->btnEditar->Size = System::Drawing::Size(75, 23);
			this->btnEditar->TabIndex = 10;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->Click += gcnew System::EventHandler(this, &SensorTemperaturaForm::btnEditar_Click);
			// btnBorrar
			this->btnBorrar->Location = System::Drawing::Point(784, 554);
			this->btnBorrar->Size = System::Drawing::Size(75, 23);
			this->btnBorrar->TabIndex = 11;
			this->btnBorrar->Text = L"Borrar";
			this->btnBorrar->Click += gcnew System::EventHandler(this, &SensorTemperaturaForm::btnBorrar_Click);
			// SensorTemperaturaForm
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(948, 589);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnBorrar);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->dataGridViewSensor);
			this->Controls->Add(this->dtpUltimoRegistro);
			this->Controls->Add(this->cmbEstado);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SensorTemperaturaForm";
			this->Text = L"Sensores de Temperatura";
			this->Load += gcnew System::EventHandler(this, &SensorTemperaturaForm::SensorTemperaturaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSensor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	};
}

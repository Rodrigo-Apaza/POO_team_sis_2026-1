#pragma once

namespace RiegoGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SensorForm
	/// </summary>
	public ref class SensorForm : public System::Windows::Forms::Form
	{
	public:
		SensorForm(void)
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
		~SensorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtIdDispositivo;
	private: System::Windows::Forms::TextBox^ txtModelo;
	private: System::Windows::Forms::TextBox^ txtNumero;


	private: System::Windows::Forms::ComboBox^ cmbEstado;
	private: System::Windows::Forms::DateTimePicker^ dtpUltimaRespuesta;


	private: System::Windows::Forms::DataGridView^ dataGridViewSensor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdDispositivo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado_Operacional;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ultima_Prueba;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNumero;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

private:
		void LoadGrid();
		System::Void SensorForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void dataGridViewSensor_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtIdDispositivo = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->colNumero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cmbEstado = (gcnew System::Windows::Forms::ComboBox());
			this->dtpUltimaRespuesta = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridViewSensor = (gcnew System::Windows::Forms::DataGridView());
			this->IdDispositivo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Modelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado_Operacional = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ultima_Prueba = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSensor))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"IdDispositivo:";
			this->label1->Click += gcnew System::EventHandler(this, &SensorForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Modelo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Estado Operacional:";
			// 
			// label4
			// 
			// label5
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 240);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Numero:";
			// txtNumero
			this->txtNumero->Location = System::Drawing::Point(210, 240);
			this->txtNumero->Size = System::Drawing::Size(111, 22);
			this->txtNumero->TabIndex = 13;
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ultima Respuesta:";
			// 
			// txtIdDispositivo
			// 
			this->txtIdDispositivo->Location = System::Drawing::Point(210, 34);
			this->txtIdDispositivo->Name = L"txtIdDispositivo";
			this->txtIdDispositivo->Size = System::Drawing::Size(111, 22);
			this->txtIdDispositivo->TabIndex = 4;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(210, 82);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(111, 22);
			this->txtModelo->TabIndex = 5;
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Activo", L"Inactivo", L"Mantenimiento", L"Fuera de Servicio" });
			this->cmbEstado->Location = System::Drawing::Point(210, 130);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(111, 24);
			this->cmbEstado->TabIndex = 6;
			// 
			// dtpUltimaRespuesta
			// 
			this->dtpUltimaRespuesta->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpUltimaRespuesta->Location = System::Drawing::Point(210, 186);
			this->dtpUltimaRespuesta->Name = L"dtpUltimaRespuesta";
			this->dtpUltimaRespuesta->Size = System::Drawing::Size(123, 22);
			this->dtpUltimaRespuesta->TabIndex = 7;
			// 
			// dataGridViewSensor
			// 
			this->dataGridViewSensor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSensor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IdDispositivo,
					this->Modelo, this->Estado_Operacional, this->Ultima_Prueba, this->colNumero
			});
			this->dataGridViewSensor->Location = System::Drawing::Point(51, 300);
			this->dataGridViewSensor->Name = L"dataGridViewSensor";
			this->dataGridViewSensor->RowHeadersWidth = 51;
			this->dataGridViewSensor->RowTemplate->Height = 24;
			this->dataGridViewSensor->Size = System::Drawing::Size(769, 273);
			this->dataGridViewSensor->TabIndex = 8;
			this->dataGridViewSensor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SensorForm::dataGridViewSensor_CellContentClick);
			// 
			// IdDispositivo
			// 
			this->IdDispositivo->HeaderText = L"IdDispositivo";
			this->IdDispositivo->MinimumWidth = 6;
			this->IdDispositivo->Name = L"IdDispositivo";
			this->IdDispositivo->Width = 125;
			// 
			// Modelo
			// 
			this->Modelo->HeaderText = L"Modelo";
			this->Modelo->MinimumWidth = 6;
			this->Modelo->Name = L"Modelo";
			this->Modelo->Width = 125;
			// 
			// Estado_Operacional
			// 
			this->Estado_Operacional->HeaderText = L"Estado_Operacional";
			this->Estado_Operacional->MinimumWidth = 6;
			this->Estado_Operacional->Name = L"Estado_Operacional";
			this->Estado_Operacional->Width = 125;
			// 
			// Ultima_Prueba
			// 
			this->Ultima_Prueba->HeaderText = L"Ultima_Prueba";
			this->Ultima_Prueba->MinimumWidth = 6;
			this->Ultima_Prueba->Width = 125;
			// colNumero
			this->colNumero->HeaderText = L"Numero";
			this->colNumero->MinimumWidth = 6;
			this->colNumero->Name = L"colNumero";
			this->colNumero->Width = 80;
			this->Ultima_Prueba->MinimumWidth = 6;
			this->Ultima_Prueba->Name = L"Ultima_Prueba";
			this->Ultima_Prueba->Width = 125;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(480, 554);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Limpiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SensorForm::button4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(591, 554);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SensorForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(689, 554);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SensorForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(784, 554);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SensorForm::button3_Click);
			// 
			// SensorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(948, 620);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridViewSensor);
			this->Controls->Add(this->dtpUltimaRespuesta);
			this->Controls->Add(this->cmbEstado);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtIdDispositivo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SensorForm";
			this->Text = L"Sensores de Humedad";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSensor))->EndInit();
			this->Load += gcnew System::EventHandler(this, &SensorForm::SensorForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

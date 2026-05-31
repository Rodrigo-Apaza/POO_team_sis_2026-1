

#pragma once



namespace RiegoGUIApp {



	using namespace System;

	using namespace System::ComponentModel;

	using namespace System::Collections;

	using namespace System::Windows::Forms;

	using namespace System::Data;

	using namespace System::Drawing;



	/// <summary>

	/// Resumen de SueloForm

	/// </summary>

	public ref class SueloForm : public System::Windows::Forms::Form

	{

	public:

		SueloForm(void)

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

		~SueloForm()

		{

			if (components)

			{

				delete components;

			}

		}

		// AGREGA ESTA LÍNEA AQUÍ:
	private:	int proximoId = 1;

	private: System::Windows::Forms::TabControl^ tabControl1;

	protected:

	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ComboBox^ cmbDistrito;

	private: System::Windows::Forms::ComboBox^ cmbTipoSuelo;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ btnEliminar;



	private: System::Windows::Forms::Button^ btnModificar;



	private: System::Windows::Forms::Button^ btnRegistrar;

	private: System::Windows::Forms::DataGridView^ dataGridViewSuelos;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnId;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDistrito;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnTipoSuelo;





	protected:













































































































































































































































































































































































































































































































	private:

		/// <summary>

		/// Variable del diseñador necesaria.

		/// </summary>

		System::ComponentModel::Container^ components;



#pragma region Windows Form Designer generated code

		/// <summary>

		/// Método necesario para admitir el Diseñador. No se puede modificar

		/// el contenido de este método con el editor de código.

		/// </summary>

		void InitializeComponent(void)

		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewSuelos = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDistrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnTipoSuelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->cmbTipoSuelo = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbDistrito = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSuelos))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(21, 44);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(833, 404);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridViewSuelos);
			this->tabPage1->Controls->Add(this->btnEliminar);
			this->tabPage1->Controls->Add(this->btnModificar);
			this->tabPage1->Controls->Add(this->btnRegistrar);
			this->tabPage1->Controls->Add(this->cmbTipoSuelo);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->cmbDistrito);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(825, 375);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Gestión de Suelos";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &SueloForm::tabPage1_Click);
			// 
			// dataGridViewSuelos
			// 
			this->dataGridViewSuelos->AllowUserToAddRows = false;
			this->dataGridViewSuelos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSuelos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ColumnId,
					this->ColumnDistrito, this->ColumnTipoSuelo
			});
			this->dataGridViewSuelos->Location = System::Drawing::Point(43, 244);
			this->dataGridViewSuelos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridViewSuelos->Name = L"dataGridViewSuelos";
			this->dataGridViewSuelos->ReadOnly = true;
			this->dataGridViewSuelos->RowHeadersVisible = false;
			this->dataGridViewSuelos->RowHeadersWidth = 62;
			this->dataGridViewSuelos->RowTemplate->Height = 28;
			this->dataGridViewSuelos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewSuelos->Size = System::Drawing::Size(585, 120);
			this->dataGridViewSuelos->TabIndex = 7;
			this->dataGridViewSuelos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SueloForm::dataGridViewSuelos_CellContentClick);
			// 
			// ColumnId
			// 
			this->ColumnId->HeaderText = L"Id";
			this->ColumnId->MinimumWidth = 8;
			this->ColumnId->Name = L"ColumnId";
			this->ColumnId->ReadOnly = true;
			this->ColumnId->Width = 150;
			// 
			// ColumnDistrito
			// 
			this->ColumnDistrito->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumnDistrito->FillWeight = 200;
			this->ColumnDistrito->HeaderText = L"Distrito";
			this->ColumnDistrito->MinimumWidth = 8;
			this->ColumnDistrito->Name = L"ColumnDistrito";
			this->ColumnDistrito->ReadOnly = true;
			// 
			// ColumnTipoSuelo
			// 
			this->ColumnTipoSuelo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColumnTipoSuelo->FillWeight = 200;
			this->ColumnTipoSuelo->HeaderText = L"Tipo de Suelo";
			this->ColumnTipoSuelo->MinimumWidth = 8;
			this->ColumnTipoSuelo->Name = L"ColumnTipoSuelo";
			this->ColumnTipoSuelo->ReadOnly = true;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(354, 202);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(86, 20);
			this->btnEliminar->TabIndex = 6;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &SueloForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(218, 202);
			this->btnModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(95, 20);
			this->btnModificar->TabIndex = 5;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &SueloForm::btnModificar_Click);
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(43, 200);
			this->btnRegistrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(134, 22);
			this->btnRegistrar->TabIndex = 4;
			this->btnRegistrar->Text = L"Registrar/Añadir";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &SueloForm::button1_Click);
			// 
			// cmbTipoSuelo
			// 
			this->cmbTipoSuelo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbTipoSuelo->FormattingEnabled = true;
			this->cmbTipoSuelo->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Suelo Arenoso", L"Suelo Arcilloso", L"Suelo Limoso",
					L"Suelo Franco (Ideal)", L"Suelo Pedregoso", L"Suelo Orgánico"
			});
			this->cmbTipoSuelo->Location = System::Drawing::Point(31, 142);
			this->cmbTipoSuelo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbTipoSuelo->Name = L"cmbTipoSuelo";
			this->cmbTipoSuelo->Size = System::Drawing::Size(108, 24);
			this->cmbTipoSuelo->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tipo de Suelo:";
			// 
			// cmbDistrito
			// 
			this->cmbDistrito->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbDistrito->FormattingEnabled = true;
			this->cmbDistrito->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Ventanilla (Callao)", L"Lurín (Lima)", L"Pachacamac (Lima)",
					L"Ate Vitarte (Lima)", L"Chaclacayo (Lima)", L"San Juan de Lurigancho (Lima)", L"Carabayllo (Lima)", L"Puente Piedra (Lima)",
					L"Independencia (Lima)", L"Huaral (Lima Provincia)"
			});
			this->cmbDistrito->Location = System::Drawing::Point(31, 50);
			this->cmbDistrito->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbDistrito->Name = L"cmbDistrito";
			this->cmbDistrito->Size = System::Drawing::Size(108, 24);
			this->cmbDistrito->TabIndex = 1;
			this->cmbDistrito->SelectedIndexChanged += gcnew System::EventHandler(this, &SueloForm::cmbDistrito_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Distrito:";
			this->label1->Click += gcnew System::EventHandler(this, &SueloForm::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(825, 375);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// SueloForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(887, 468);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SueloForm";
			this->Text = L"SueloForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSuelos))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (cmbDistrito->SelectedIndex == -1 || cmbTipoSuelo->SelectedIndex == -1) {
			MessageBox::Show("Por favor, seleccione un distrito y un tipo de suelo.");
			return;
		}

		// Agregamos la fila a la tabla (DataGridView)
		dataGridViewSuelos->Rows->Add(
			proximoId.ToString(),
			cmbDistrito->SelectedItem->ToString(),
			cmbTipoSuelo->SelectedItem->ToString()
		);

		proximoId++; // Aumenta el contador para el siguiente registro

	}

	private: System::Void dataGridViewSuelos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

	private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridViewSuelos->SelectedRows->Count > 0) {
			DataGridViewRow^ fila = dataGridViewSuelos->SelectedRows[0];
			fila->Cells[1]->Value = cmbDistrito->SelectedItem->ToString();
			fila->Cells[2]->Value = cmbTipoSuelo->SelectedItem->ToString();
		}

	}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {


	if (dataGridViewSuelos->SelectedRows->Count > 0) {
		delete dataGridViewSuelos->SelectedRows[0];
	}

}
private: System::Void cmbDistrito_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}





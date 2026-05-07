#pragma once

namespace RiegoGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DireccionForm
	/// </summary>
	public ref class DireccionForm : public System::Windows::Forms::Form
	{
	public:
		DireccionForm(void)
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
		~DireccionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ cmbDistrito;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridViewDireccion;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Avenida;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ m2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcion;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->cmbDistrito = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewDireccion = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distrito = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Avenida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->m2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDireccion))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(179, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(179, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(481, 101);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			// 
			// cmbDistrito
			// 
			this->cmbDistrito->FormattingEnabled = true;
			this->cmbDistrito->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Ventanilla (Callao)", L"Lurín (Lima)", L"Pachacamac (Lima)",
					L"Ate Vitarte (Lima)", L"Chaclacayo (Lima)", L"San Juan de Lurigancho (Lima)", L"Carabayllo (Lima)", L"Puente Piedra (Lima)",
					L"Independencia (Lima)", L"Huaral (Lima Provincia)"
			});
			this->cmbDistrito->Location = System::Drawing::Point(481, 42);
			this->cmbDistrito->Name = L"cmbDistrito";
			this->cmbDistrito->Size = System::Drawing::Size(121, 24);
			this->cmbDistrito->TabIndex = 4;
			this->cmbDistrito->SelectedIndexChanged += gcnew System::EventHandler(this, &DireccionForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(66, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID:";
			this->label1->Click += gcnew System::EventHandler(this, &DireccionForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Avenida, calle o jr.:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(402, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Distrito:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Descripcion:";
			this->label4->Click += gcnew System::EventHandler(this, &DireccionForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(428, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"m2";
			// 
			// dataGridViewDireccion
			// 
			this->dataGridViewDireccion->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDireccion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID,
					this->Distrito, this->Avenida, this->m2, this->Descripcion
			});
			this->dataGridViewDireccion->Location = System::Drawing::Point(45, 208);
			this->dataGridViewDireccion->Name = L"dataGridViewDireccion";
			this->dataGridViewDireccion->RowHeadersWidth = 51;
			this->dataGridViewDireccion->RowTemplate->Height = 24;
			this->dataGridViewDireccion->Size = System::Drawing::Size(722, 202);
			this->dataGridViewDireccion->TabIndex = 10;
			this->dataGridViewDireccion->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DireccionForm::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 125;
			// 
			// Distrito
			// 
			this->Distrito->HeaderText = L"Distrito";
			this->Distrito->MinimumWidth = 6;
			this->Distrito->Name = L"Distrito";
			this->Distrito->Width = 125;
			// 
			// Avenida
			// 
			this->Avenida->HeaderText = L"Avenida";
			this->Avenida->MinimumWidth = 6;
			this->Avenida->Name = L"Avenida";
			this->Avenida->Width = 125;
			// 
			// m2
			// 
			this->m2->HeaderText = L"m2";
			this->m2->MinimumWidth = 6;
			this->m2->Name = L"m2";
			this->m2->Width = 125;
			// 
			// Descripcion
			// 
			this->Descripcion->HeaderText = L"Descripcion";
			this->Descripcion->MinimumWidth = 6;
			this->Descripcion->Name = L"Descripcion";
			this->Descripcion->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(506, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DireccionForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(609, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DireccionForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(710, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DireccionForm::button3_Click);
			// 
			// DireccionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 504);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridViewDireccion);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbDistrito);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"DireccionForm";
			this->Text = L"DireccionForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDireccion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewDireccion->CurrentRow == nullptr) {
		MessageBox::Show("Seleccione una fila");
		return;
	}

	dataGridViewDireccion->Rows->Remove(dataGridViewDireccion->CurrentRow);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	// Validación
	if (cmbDistrito->SelectedIndex == -1) {
		MessageBox::Show("Por favor, seleccione un distrito.");
		return;
	}

	// Agregamos la fila al DataGridView
	dataGridViewDireccion->Rows->Add(
		textBox1->Text,
		cmbDistrito->SelectedItem->ToString(),
		textBox2->Text,
		textBox4->Text,
		textBox3->Text
	);
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {

		DataGridViewRow^ fila = dataGridViewDireccion->Rows[e->RowIndex];

		textBox1->Text = fila->Cells[0]->Value->ToString();
		cmbDistrito->SelectedItem = fila->Cells[1]->Value->ToString();
		textBox2->Text = fila->Cells[2]->Value->ToString();
		textBox4->Text = fila->Cells[3]->Value->ToString();
		textBox3->Text = fila->Cells[4]->Value->ToString();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validación
	if (dataGridViewDireccion->CurrentRow == nullptr) {
		MessageBox::Show("Seleccione una fila");
		return;
	}

	// Editar datos
	DataGridViewRow^ fila = dataGridViewDireccion->CurrentRow;

	fila->Cells[0]->Value = textBox1->Text;
	fila->Cells[1]->Value = cmbDistrito->SelectedItem->ToString();
	fila->Cells[2]->Value = textBox2->Text;
	fila->Cells[3]->Value = textBox4->Text;
	fila->Cells[4]->Value = textBox3->Text;
}
};
}

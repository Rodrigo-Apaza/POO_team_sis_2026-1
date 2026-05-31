#pragma once
#include "SueloForm.h"


namespace RiegoGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RiegoModel;
	using namespace RiegoService;
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
	private: System::Windows::Forms::DataGridView^ dgvplantas;


	private: System::Windows::Forms::Button^ btnIrASuelos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDcolumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NAMEcolumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OPHcolumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OPTcolumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SOcolumna;
	private: System::Windows::Forms::Button^ modificarbtnp;
	private: System::Windows::Forms::Button^ consultarbtn;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxp1;
	private: System::Windows::Forms::TextBox^ textBoxp2;
	private: System::Windows::Forms::TextBox^ textBoxp4;



	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBoxp3;
	private: System::Windows::Forms::TextBox^ textBoxp5;


	private: System::Windows::Forms::Label^ label6;

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
			this->dgvplantas = (gcnew System::Windows::Forms::DataGridView());
			this->IDcolumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NAMEcolumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OPHcolumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OPTcolumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SOcolumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnIrASuelos = (gcnew System::Windows::Forms::Button());
			this->modificarbtnp = (gcnew System::Windows::Forms::Button());
			this->consultarbtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxp1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxp5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvplantas))->BeginInit();
			this->SuspendLayout();
			// 
			// addplantbtn
			// 
			this->addplantbtn->Location = System::Drawing::Point(767, 71);
			this->addplantbtn->Name = L"addplantbtn";
			this->addplantbtn->Size = System::Drawing::Size(75, 23);
			this->addplantbtn->TabIndex = 0;
			this->addplantbtn->Text = L"Agregar";
			this->addplantbtn->UseVisualStyleBackColor = true;
			this->addplantbtn->Click += gcnew System::EventHandler(this, &PlantasForm::addplantbtn_Click);
			// 
			// deleteplantbtn
			// 
			this->deleteplantbtn->Location = System::Drawing::Point(767, 100);
			this->deleteplantbtn->Name = L"deleteplantbtn";
			this->deleteplantbtn->Size = System::Drawing::Size(75, 23);
			this->deleteplantbtn->TabIndex = 1;
			this->deleteplantbtn->Text = L"Eliminar";
			this->deleteplantbtn->UseVisualStyleBackColor = true;
			this->deleteplantbtn->Click += gcnew System::EventHandler(this, &PlantasForm::deleteplantbtn_Click);
			// 
			// dgvplantas
			// 
			this->dgvplantas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvplantas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IDcolumna,
					this->NAMEcolumna, this->OPHcolumna, this->OPTcolumna, this->SOcolumna
			});
			this->dgvplantas->Location = System::Drawing::Point(12, 47);
			this->dgvplantas->Name = L"dgvplantas";
			this->dgvplantas->RowHeadersWidth = 51;
			this->dgvplantas->RowTemplate->Height = 24;
			this->dgvplantas->Size = System::Drawing::Size(679, 267);
			this->dgvplantas->TabIndex = 2;
			this->dgvplantas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PlantasForm::dgvplantas_CellContentClick);
			// 
			// IDcolumna
			// 
			this->IDcolumna->HeaderText = L"ID";
			this->IDcolumna->MinimumWidth = 6;
			this->IDcolumna->Name = L"IDcolumna";
			this->IDcolumna->Width = 125;
			// 
			// NAMEcolumna
			// 
			this->NAMEcolumna->HeaderText = L"Nombre";
			this->NAMEcolumna->MinimumWidth = 6;
			this->NAMEcolumna->Name = L"NAMEcolumna";
			this->NAMEcolumna->Width = 125;
			// 
			// OPHcolumna
			// 
			this->OPHcolumna->HeaderText = L"Humedad Optima";
			this->OPHcolumna->MinimumWidth = 6;
			this->OPHcolumna->Name = L"OPHcolumna";
			this->OPHcolumna->Width = 125;
			// 
			// OPTcolumna
			// 
			this->OPTcolumna->HeaderText = L"Temperatura Optima";
			this->OPTcolumna->MinimumWidth = 6;
			this->OPTcolumna->Name = L"OPTcolumna";
			this->OPTcolumna->Width = 125;
			// 
			// SOcolumna
			// 
			this->SOcolumna->HeaderText = L"Suelo Optimo";
			this->SOcolumna->MinimumWidth = 6;
			this->SOcolumna->Name = L"SOcolumna";
			this->SOcolumna->Width = 125;
			// 
			// btnIrASuelos
			// 
			this->btnIrASuelos->Location = System::Drawing::Point(685, 418);
			this->btnIrASuelos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnIrASuelos->Name = L"btnIrASuelos";
			this->btnIrASuelos->Size = System::Drawing::Size(129, 24);
			this->btnIrASuelos->TabIndex = 3;
			this->btnIrASuelos->Text = L"Configurar Suelo";
			this->btnIrASuelos->UseVisualStyleBackColor = true;
			// 
			// modificarbtnp
			// 
			this->modificarbtnp->Location = System::Drawing::Point(767, 129);
			this->modificarbtnp->Name = L"modificarbtnp";
			this->modificarbtnp->Size = System::Drawing::Size(75, 23);
			this->modificarbtnp->TabIndex = 4;
			this->modificarbtnp->Text = L"Modificar";
			this->modificarbtnp->UseVisualStyleBackColor = true;
			this->modificarbtnp->Click += gcnew System::EventHandler(this, &PlantasForm::modificarbtnp_Click);
			// 
			// consultarbtn
			// 
			this->consultarbtn->Location = System::Drawing::Point(767, 158);
			this->consultarbtn->Name = L"consultarbtn";
			this->consultarbtn->Size = System::Drawing::Size(75, 23);
			this->consultarbtn->TabIndex = 5;
			this->consultarbtn->Text = L"Consultar";
			this->consultarbtn->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 338);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Edite las plantas disponibles:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 372);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 403);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(277, 372);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Op. Humedad";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(277, 426);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Op. Suelo";
			// 
			// textBoxp1
			// 
			this->textBoxp1->Location = System::Drawing::Point(118, 372);
			this->textBoxp1->Name = L"textBoxp1";
			this->textBoxp1->Size = System::Drawing::Size(100, 22);
			this->textBoxp1->TabIndex = 11;
			// 
			// textBoxp2
			// 
			this->textBoxp2->Location = System::Drawing::Point(118, 403);
			this->textBoxp2->Name = L"textBoxp2";
			this->textBoxp2->Size = System::Drawing::Size(100, 22);
			this->textBoxp2->TabIndex = 12;
			// 
			// textBoxp4
			// 
			this->textBoxp4->Location = System::Drawing::Point(422, 400);
			this->textBoxp4->Name = L"textBoxp4";
			this->textBoxp4->Size = System::Drawing::Size(100, 22);
			this->textBoxp4->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(0, 0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(0, 0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 15;
			// 
			// textBoxp3
			// 
			this->textBoxp3->Location = System::Drawing::Point(422, 369);
			this->textBoxp3->Name = L"textBoxp3";
			this->textBoxp3->Size = System::Drawing::Size(100, 22);
			this->textBoxp3->TabIndex = 16;
			// 
			// textBoxp5
			// 
			this->textBoxp5->Location = System::Drawing::Point(422, 428);
			this->textBoxp5->Name = L"textBoxp5";
			this->textBoxp5->Size = System::Drawing::Size(100, 22);
			this->textBoxp5->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(277, 398);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Op. Temperatura";
			// 
			// PlantasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 472);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxp5);
			this->Controls->Add(this->textBoxp3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBoxp4);
			this->Controls->Add(this->textBoxp2);
			this->Controls->Add(this->textBoxp1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->consultarbtn);
			this->Controls->Add(this->modificarbtnp);
			this->Controls->Add(this->btnIrASuelos);
			this->Controls->Add(this->dgvplantas);
			this->Controls->Add(this->deleteplantbtn);
			this->Controls->Add(this->addplantbtn);
			this->Name = L"PlantasForm";
			this->Text = L"PlantasForm";
			this->Load += gcnew System::EventHandler(this, &PlantasForm::PlantasForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvplantas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void modificarbtnp_Click(System::Object^ sender, System::EventArgs^ e) {
	//convertimos el texto que se coloca en la interfaz del formulario en int,double o string 
	int nId = Convert::ToInt32(textBoxp1->Text);
	String^ nplantname = textBoxp2->Text;
	double noph = Convert::ToDouble(textBoxp3->Text);
	double nopt = Convert::ToDouble(textBoxp4->Text);
	String^ nstatus = textBoxp5->Text;
	//lo que hemos convertido lo agregamos al MainDish y asus respectivas propiedades
	Plantas^ dish = gcnew Plantas();
	dish->Id = nId;
	dish->plantname = nplantname;
	dish->optimalHumidity = noph;
	dish->optimalTemp = nopt;
	dish->Status = nstatus;


	RiegoService::Service::UpdatePlanta(dish); //Es el mismo codigo que AddDish solo que aqui le cambiamos a Update
	ShowMainDishes();


}

	   void ShowMainDishes() {
		   //Donde guardaremos el valor de lo de la lsita de main dishes cada unbo de los valores dle Rservice se guardaran en la lista
		   List<Plantas^>^ PlantasList = RiegoService::Service::QueryAllPlantas();
		   if (PlantasList != nullptr) {
			   //Si el objeto es diferente de nulo se borra lo de la tabla , esto es para que no se repitan los datos, ya que la lista vuelve
			   //a escribir , rows es filas
			   dgvplantas->Rows->Clear();
			   for each (Plantas ^ Plantas in PlantasList) {
				   //esta linea verifica que el dish sea un main dish, compara el tipo de dish con el typeid de main dish
				   if (Plantas->GetType() == Plantas::typeid) {
					   //si se cumple lo anterior entonces empieza a a adir un arreglo con los datos correspondientes
					   dgvplantas->Rows->Add(
						   gcnew array<String^>{
						   // como el dish es entero se a ade el " " igual con todos los enteros
						   "" + Plantas->Id,
							   "" + Plantas->plantname,
							   "" + Plantas->optimalHumidity,
							   "" + Plantas->optimalTemp,
							   "" + Plantas->Status
					   }
					   );
				   }
			   }
		   }
	   }
private: System::Void dgvplantas_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// se encarga de que cada vez que hacemos click en un plato de la tabla este aparezca en el texteditor 
//asi podemos modificarlo
	int URId = Convert::ToInt32(dgvplantas->Rows[dgvplantas->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Plantas^ UnidadRobotica = RiegoService::Service::QuerPlantaById(URId);
	if (UnidadRobotica != nullptr) {
		textBoxp1->Text = "" + UnidadRobotica->Id;
		textBoxp2->Text = UnidadRobotica->plantname;
		textBoxp3->Text = "" + UnidadRobotica->optimalHumidity;
		textBoxp4->Text = "" + UnidadRobotica->optimalTemp;
		textBoxp5->Text = "" + UnidadRobotica->Status;

	}
}

private: System::Void deleteplantbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//convertimos el texto que se coloca en la interfaz del formulario en int,double o string 
	int URId = Convert::ToInt32(textBoxp1->Text);
	//solo necesitamos el id porque DeleteDish usa el id
	RiegoService::Service::DeletePlanta(URId); //Es el mismo codigo que AddDish solo que aqui le cambiamos a Delete
	ShowMainDishes();
	MessageBox::Show("Se elimino correctamente");
}
private: System::Void addplantbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//convertimos el texto que se coloca en la interfaz del formulario en int,double o string 
	int id = Convert::ToInt32(textBoxp1->Text);
	String^ plant = textBoxp2->Text;
	double oph = Convert::ToDouble(textBoxp3->Text);
	double opt = Convert::ToDouble(textBoxp4->Text);
	String^ status = textBoxp5->Text;

	//lo que hemos convertido lo agregamos al MainDish y asus respectivas propiedades
	Plantas^ dish = gcnew Plantas();
	dish->Id = id;
	dish->plantname = plant;
	dish->optimalHumidity = oph;
	dish->optimalTemp = opt;
	dish->Status = status;

	RiegoService::Service::AddPlanta(dish); //Se agrega el plato a la Base de datos BD usando la capa de Servicio
	ShowMainDishes();
	MessageBox::Show("Se agrego correctamente");

}


private: System::Void PlantasForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowMainDishes();
}
};
}

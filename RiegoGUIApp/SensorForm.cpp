#include "SensorForm.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace RiegoModel;
using namespace RiegoService;

void RiegoGUIApp::SensorForm::LoadGrid()
{
	dataGridViewSensor->Rows->Clear();
	List<SensorHumedad^>^ lista = Service::GetAllSensorHumedad();
	for each (SensorHumedad^ s in lista) {
		dataGridViewSensor->Rows->Add(
			s->Id,
			s->Modelo,
			s->EstadoOperacional,
			s->UltimoRegistro.ToShortDateString(),
			s->Numero
		);
	}
}

System::Void RiegoGUIApp::SensorForm::SensorForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	LoadGrid();
}

System::Void RiegoGUIApp::SensorForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (cmbEstado->SelectedIndex == -1) {
		MessageBox::Show("Seleccione el estado operacional");
		return;
	}
	SensorHumedad^ s = gcnew SensorHumedad();
	s->Id                = Convert::ToInt32(txtIdDispositivo->Text);
	s->Modelo            = txtModelo->Text;
	s->EstadoOperacional = cmbEstado->SelectedItem->ToString();
	s->UltimoRegistro    = dtpUltimaRespuesta->Value;
	s->Numero            = txtNumero->Text->Trim() != "" ? Convert::ToInt32(txtNumero->Text) : 0;
	Service::AddSensorHumedad(s);
	LoadGrid();
	txtIdDispositivo->Clear();
	txtModelo->Clear();
	txtNumero->Clear();
	cmbEstado->SelectedIndex = -1;
}

System::Void RiegoGUIApp::SensorForm::dataGridViewSensor_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex >= 0) {
		DataGridViewRow^ fila = dataGridViewSensor->Rows[e->RowIndex];
		txtIdDispositivo->Text  = fila->Cells[0]->Value->ToString();
		txtModelo->Text         = fila->Cells[1]->Value->ToString();
		cmbEstado->SelectedItem = fila->Cells[2]->Value->ToString();
		txtNumero->Text         = fila->Cells[4]->Value->ToString();
	}
}

System::Void RiegoGUIApp::SensorForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridViewSensor->CurrentRow == nullptr) {
		MessageBox::Show("Seleccione una fila");
		return;
	}
	SensorHumedad^ s = gcnew SensorHumedad();
	s->Id                = Convert::ToInt32(txtIdDispositivo->Text);
	s->Modelo            = txtModelo->Text;
	s->EstadoOperacional = cmbEstado->SelectedItem->ToString();
	s->UltimoRegistro    = dtpUltimaRespuesta->Value;
	s->Numero            = txtNumero->Text->Trim() != "" ? Convert::ToInt32(txtNumero->Text) : 0;
	Service::UpdateSensorHumedad(s);
	LoadGrid();
}

System::Void RiegoGUIApp::SensorForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridViewSensor->CurrentRow == nullptr) {
		MessageBox::Show("Seleccione una fila");
		return;
	}
	int id = Convert::ToInt32(dataGridViewSensor->CurrentRow->Cells[0]->Value);
	Service::DeleteSensorHumedad(id);
	LoadGrid();
}

System::Void RiegoGUIApp::SensorForm::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
}

System::Void RiegoGUIApp::SensorForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtIdDispositivo->Clear();
	txtModelo->Clear();
	txtNumero->Clear();
	cmbEstado->SelectedIndex = -1;
	dtpUltimaRespuesta->Value = DateTime::Now;
}

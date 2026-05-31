#include "SensorTemperaturaForm.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace RiegoModel;
using namespace RiegoService;

void RiegoGUIApp::SensorTemperaturaForm::LoadGrid()
{
	dataGridViewSensor->Rows->Clear();
	List<SensorTemperatura^>^ lista = Service::GetAllSensorTemperatura();
	for each (SensorTemperatura^ s in lista) {
		dataGridViewSensor->Rows->Add(
			s->Id,
			s->Modelo,
			s->EstadoOperacional,
			s->UltimoRegistro.ToShortDateString(),
			s->Numero
		);
	}
}

System::Void RiegoGUIApp::SensorTemperaturaForm::SensorTemperaturaForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	LoadGrid();
}

System::Void RiegoGUIApp::SensorTemperaturaForm::dataGridViewSensor_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex >= 0) {
		DataGridViewRow^ fila = dataGridViewSensor->Rows[e->RowIndex];
		txtId->Text    = fila->Cells[0]->Value->ToString();
		txtModelo->Text = fila->Cells[1]->Value->ToString();
		cmbEstado->SelectedItem = fila->Cells[2]->Value->ToString();
		dtpUltimoRegistro->Value = Convert::ToDateTime(fila->Cells[3]->Value);
	}
}

System::Void RiegoGUIApp::SensorTemperaturaForm::btnGuardar_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (cmbEstado->SelectedIndex == -1) {
		MessageBox::Show(L"Seleccione el estado operacional.");
		return;
	}
	SensorTemperatura^ s = gcnew SensorTemperatura();
	s->Id                = Convert::ToInt32(txtId->Text);
	s->Modelo            = txtModelo->Text;
	s->EstadoOperacional = cmbEstado->SelectedItem->ToString();
	s->UltimoRegistro    = dtpUltimoRegistro->Value;
	s->Numero            = txtNumero->Text->Trim() != "" ? Convert::ToInt32(txtNumero->Text) : 0;
	Service::AddSensorTemperatura(s);
	LoadGrid();
	txtId->Clear();
	txtModelo->Clear();
	txtNumero->Clear();
	cmbEstado->SelectedIndex = -1;
}

System::Void RiegoGUIApp::SensorTemperaturaForm::btnEditar_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridViewSensor->CurrentRow == nullptr) {
		MessageBox::Show(L"Seleccione una fila.");
		return;
	}
	SensorTemperatura^ s = gcnew SensorTemperatura();
	s->Id                = Convert::ToInt32(txtId->Text);
	s->Modelo            = txtModelo->Text;
	s->EstadoOperacional = cmbEstado->SelectedItem->ToString();
	s->UltimoRegistro    = dtpUltimoRegistro->Value;
	s->Numero            = txtNumero->Text->Trim() != "" ? Convert::ToInt32(txtNumero->Text) : 0;
	Service::UpdateSensorTemperatura(s);
	LoadGrid();
}

System::Void RiegoGUIApp::SensorTemperaturaForm::btnBorrar_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridViewSensor->CurrentRow == nullptr) {
		MessageBox::Show(L"Seleccione una fila.");
		return;
	}
	int id = Convert::ToInt32(dataGridViewSensor->CurrentRow->Cells[0]->Value);
	Service::DeleteSensorTemperatura(id);
	LoadGrid();
}

System::Void RiegoGUIApp::SensorTemperaturaForm::btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e)
{
	txtId->Clear();
	txtModelo->Clear();
	txtNumero->Clear();
	cmbEstado->SelectedIndex = -1;
	dtpUltimoRegistro->Value = DateTime::Now;
}

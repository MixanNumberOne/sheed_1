#include "MyForm.h"
using namespace sheed1;

System::Void MyForm::dataGridView1_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) { // ���������� �������� �����
	updateNumbers();
}

System::Void MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) { // ���������� ������� ������
	switch (e->KeyCode)
	{
	case Keys::Delete:												// ���� ���� ���������� ������ �� ������ ����� ������� delete
		if (this->dataGridView1->SelectedRows->Count > 0) {
			for (int i = 0; i < dataGridView1->SelectedRows->Count - 1; i++) {
				dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[i]->Index);
			}
		}
		break;
	default:
		break;
	}
}

System::Void MyForm::dataGridView1_SortCompare(System::Object^ sender, System::Windows::Forms::DataGridViewSortCompareEventArgs^ e) {// ���������� ����� ���������� ������� /// �����
	updateNumbers();
}

System::Void MyForm::dataGridView1_UserAddedRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowEventArgs^ e) { // ���������� ����� ���������� ������ /// �����
	updateNumbers();
}

System::Void MyForm::MyForm_Resize(System::Object^ sender, System::EventArgs^ e) { // ���������� ��������� ������� ����
	this->dataGridView1->Size = System::Drawing::Size(this->Width, this->Height);
	return;
}

Void MyForm::updateNumbers() {										// ���������� ������� � ������� � ��������
	for (int i = 0; i < this->dataGridView1->Rows->Count; i++) {
		this->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
	}
}

System::Void MyForm::AddColumnClickEvent(System::Object^ sender, System::EventArgs^ e) { // ���������� �� ���������� ������� � �������
	this->dataGridView1->Columns->Add(nullptr, nullptr);
	this->dataGridView1->Columns[this->dataGridView1->Columns->Count - 1]
		->SortMode=DataGridViewColumnSortMode::NotSortable;
	updateNumbers();
	return;
}

System::Void MyForm::AddRowClickEvent(System::Object^ sender, System::EventArgs^ e) { // ���������� �� ���������� ������ � �������
	this->dataGridView1->Rows->Add();
	updateNumbers();
}

void MyForm::initMenuStrip() {											// ������������� ������������ ������� �������
		this->AddColumnToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::AddColumnClickEvent);
		this->AddRowToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::AddRowClickEvent);
		updateNumbers();
	}

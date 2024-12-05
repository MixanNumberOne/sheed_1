#include "MyForm.h"
using namespace sheed1;

System::Void MyForm::dataGridView1_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) { // обработчик удаления строк
	updateNumbers();
}

System::Void MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) { // обработчик нажатия кнопок
	switch (e->KeyCode)
	{
	case Keys::Delete:												// если есть выделенные строки то удалим после нажатия delete
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

System::Void MyForm::dataGridView1_SortCompare(System::Object^ sender, System::Windows::Forms::DataGridViewSortCompareEventArgs^ e) {// обработчик после добавления столбца /// хуйня
	updateNumbers();
}

System::Void MyForm::dataGridView1_UserAddedRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowEventArgs^ e) { // обработчик после добавления строки /// хуйня
	updateNumbers();
}

System::Void MyForm::MyForm_Resize(System::Object^ sender, System::EventArgs^ e) { // обработчик изменения размера окна
	this->dataGridView1->Size = System::Drawing::Size(this->Width, this->Height);
	return;
}

Void MyForm::updateNumbers() {										// обновление номеров в столбце с номерами
	for (int i = 0; i < this->dataGridView1->Rows->Count; i++) {
		this->dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
	}
}

System::Void MyForm::AddColumnClickEvent(System::Object^ sender, System::EventArgs^ e) { // обработчик на добавление столбца в таблицу
	this->dataGridView1->Columns->Add(nullptr, nullptr);
	this->dataGridView1->Columns[this->dataGridView1->Columns->Count - 1]
		->SortMode=DataGridViewColumnSortMode::NotSortable;
	updateNumbers();
	return;
}

System::Void MyForm::AddRowClickEvent(System::Object^ sender, System::EventArgs^ e) { // обработчик на добавление строки в таблицу
	this->dataGridView1->Rows->Add();
	updateNumbers();
}

void MyForm::initMenuStrip() {											// инициалиазция обработчиков верхней менюшки
		this->AddColumnToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::AddColumnClickEvent);
		this->AddRowToolStripMenuItem->Click += gcnew EventHandler(this, &MyForm::AddRowClickEvent);
		updateNumbers();
	}

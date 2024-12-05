#pragma once
namespace sheed1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			initMenuStrip();
		}

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;						// класс таблички
	private: System::Windows::Forms::MenuStrip^ menuStrip1;								// класс выпадающей сверху менюшки
	private: System::Windows::Forms::ToolStripMenuItem^ FileToolStripMenuItem;			// файл
	private: System::Windows::Forms::ToolStripMenuItem^ CreateToolStripMenuItem;		// файл->создать
	private: System::Windows::Forms::ToolStripMenuItem^ OpenToolStripMenuItem;			// файл->открыть
	private: System::Windows::Forms::ToolStripMenuItem^ SaveToolStripMenuItem;			// файл->сохранить
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAsToolStripMenuItem;		// файл->сохранить как
	private: System::Windows::Forms::ToolStripMenuItem^ ImportToolStripMenuItem;		// файл->импорт
	private: System::Windows::Forms::ToolStripMenuItem^ TableToolStripMenuItem;			// таблица
	private: System::Windows::Forms::ToolStripMenuItem^ AddColumnToolStripMenuItem;		// таблица->добавить столбец
	private: System::Windows::Forms::ToolStripMenuItem^ AddRowToolStripMenuItem;		// таблица->добавить стркоу
	private: System::Windows::Forms::ToolStripMenuItem^ CalculateToolStripMenuItem;		// таблица->расчитать дату
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;				// стобец1	/// посмотреть их имена можно в консткруторе формы
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;				// столбец2
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastCheck;				// таблица-> последняя проверка
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ checkPeriod;			// таблица-> периодичность поверки
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nextCheck;				// таблица-> следующая поверка

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ImportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddColumnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddRowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CalculateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastCheck = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkPeriod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nextCheck = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->lastCheck, this->checkPeriod, this->nextCheck
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(0, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(640, 453);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MyForm::dataGridView1_RowsRemoved);
			this->dataGridView1->SortCompare += gcnew System::Windows::Forms::DataGridViewSortCompareEventHandler(this, &MyForm::dataGridView1_SortCompare);
			this->dataGridView1->UserAddedRow += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &MyForm::dataGridView1_UserAddedRow);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->FileToolStripMenuItem,
					this->TableToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->CreateToolStripMenuItem,
					this->OpenToolStripMenuItem, this->SaveToolStripMenuItem, this->SaveAsToolStripMenuItem, this->ImportToolStripMenuItem
			});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->FileToolStripMenuItem->Text = L"Файл";
			// 
			// CreateToolStripMenuItem
			// 
			this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
			this->CreateToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->CreateToolStripMenuItem->Text = L"Создать";
			// 
			// OpenToolStripMenuItem
			// 
			this->OpenToolStripMenuItem->Name = L"OpenToolStripMenuItem";
			this->OpenToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->OpenToolStripMenuItem->Text = L"Открыть";
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->SaveToolStripMenuItem->Text = L"Сохранить";
			// 
			// SaveAsToolStripMenuItem
			// 
			this->SaveAsToolStripMenuItem->Name = L"SaveAsToolStripMenuItem";
			this->SaveAsToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->SaveAsToolStripMenuItem->Text = L"Сохранить как";
			// 
			// ImportToolStripMenuItem
			// 
			this->ImportToolStripMenuItem->Name = L"ImportToolStripMenuItem";
			this->ImportToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->ImportToolStripMenuItem->Text = L"Импорт";
			// 
			// TableToolStripMenuItem
			// 
			this->TableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->AddColumnToolStripMenuItem,
					this->AddRowToolStripMenuItem, this->CalculateToolStripMenuItem
			});
			this->TableToolStripMenuItem->Name = L"TableToolStripMenuItem";
			this->TableToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->TableToolStripMenuItem->Text = L"Таблица";
			// 
			// AddColumnToolStripMenuItem
			// 
			this->AddColumnToolStripMenuItem->Name = L"AddColumnToolStripMenuItem";
			this->AddColumnToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->AddColumnToolStripMenuItem->Text = L"Добавить столбец";
			// 
			// AddRowToolStripMenuItem
			// 
			this->AddRowToolStripMenuItem->Name = L"AddRowToolStripMenuItem";
			this->AddRowToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->AddRowToolStripMenuItem->Text = L"Добавить строку";
			// 
			// CalculateToolStripMenuItem
			// 
			this->CalculateToolStripMenuItem->Name = L"CalculateToolStripMenuItem";
			this->CalculateToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->CalculateToolStripMenuItem->Text = L"Расчитать дату";
			// 
			// Column1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->Format = L"N0";
			dataGridViewCellStyle1->NullValue = nullptr;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"№";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			dataGridViewCellStyle2->NullValue = nullptr;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"Наименование";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column2->Width = 125;
			// 
			// lastCheck
			// 
			dataGridViewCellStyle3->Format = L"d";
			dataGridViewCellStyle3->NullValue = L"00.00.0000";
			this->lastCheck->DefaultCellStyle = dataGridViewCellStyle3;
			this->lastCheck->HeaderText = L"Дата последней поверки";
			this->lastCheck->MinimumWidth = 6;
			this->lastCheck->Name = L"lastCheck";
			this->lastCheck->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->lastCheck->Width = 125;
			// 
			// checkPeriod
			// 
			dataGridViewCellStyle4->Format = L"N0";
			dataGridViewCellStyle4->NullValue = nullptr;
			this->checkPeriod->DefaultCellStyle = dataGridViewCellStyle4;
			this->checkPeriod->HeaderText = L"Периодчисность поверки";
			this->checkPeriod->MinimumWidth = 6;
			this->checkPeriod->Name = L"checkPeriod";
			this->checkPeriod->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->checkPeriod->Width = 125;
			// 
			// nextCheck
			// 
			dataGridViewCellStyle5->Format = L"d";
			dataGridViewCellStyle5->NullValue = nullptr;
			this->nextCheck->DefaultCellStyle = dataGridViewCellStyle5;
			this->nextCheck->HeaderText = L"Следующая поверка";
			this->nextCheck->MinimumWidth = 6;
			this->nextCheck->Name = L"nextCheck";
			this->nextCheck->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->nextCheck->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(640, 480);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->MinimumSize = System::Drawing::Size(640, 480);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void initMenuStrip();									// инициалиазция обработчиков верхней менюшки

	private: System::Void AddRowClickEvent(System::Object^ sender, System::EventArgs^ e); // обработчик на добавление строки в таблицу

	private: System::Void AddColumnClickEvent(System::Object^ sender, System::EventArgs^ e); // обработчик на добавление столбца в таблицу

	private: Void updateNumbers();										// обновление номеров в столбце с номерами

	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e); // обработчик изменения размера окна

	private: System::Void dataGridView1_UserAddedRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowEventArgs^ e); // обработчик после добавления строки /// хуйня

	private: System::Void dataGridView1_SortCompare(System::Object^ sender, System::Windows::Forms::DataGridViewSortCompareEventArgs^ e);// обработчик после добавления столбца /// хуйня

	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e); // обработчик нажатия кнопок

	private: System::Void dataGridView1_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e); // обработчик удаления строк

};
}

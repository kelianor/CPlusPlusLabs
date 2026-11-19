#pragma once
namespace zad1 {

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
			for (int i = 0; i < 10; i++)
			{
				dataGridView1->Rows->Add();
			}
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(1247, 639);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Название книги";
			this->Column1->MinimumWidth = 9;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Автор";
			this->Column2->MinimumWidth = 9;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Кол-во экземпляров";
			this->Column3->MinimumWidth = 9;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Стоимость";
			this->Column4->MinimumWidth = 9;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Восстребованность";
			this->Column5->MinimumWidth = 9;
			this->Column5->Name = L"Column5";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 657);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 84);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Записать в \r\nдокумент Word";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1271, 821);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	    int rows = dataGridView1->Rows->Count;
		int columns = dataGridView1->Columns->Count;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				if (j == 2)
				{
					try
					{
						double OrCount = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
					}
					catch (System::FormatException^ e)
					{
						MessageBox::Show("Вы вввели неправильный формат данных в столбце \"Кол-во экземпляров\"!", "Неправильный формат данных");
						return;
					}
				}
				if (j == 3)
				{
					try
					{
						double OrCount = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
					}
					catch (System::FormatException^ e)
					{
						MessageBox::Show("Вы вввели неправильный формат данных в столбце \"Стоимость\"!", "Неправильный формат данных");
						return;
					}
				}
			}
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				if (dataGridView1->Rows[i]->Cells[j]->Value == nullptr)
				{
					MessageBox::Show("Не во всех ячейках есть данные!", "Отсутсвие данных!");
					return;
				}
			}
		}
		auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
		word2->Visible = true;
		auto t = Type::Missing;
		auto document2 = word2->Documents->Add(t, t, t, t);
		word2->Selection->TypeText("\t\t\t\tДанные о книгах");
		System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
		word2->ActiveDocument->Tables->Add(word2->Selection->Range, rows + 1, columns, t1, t2);
		for (int j = 0; j < columns; j++)
		{
			String^ headerText = dataGridView1->Columns[j]->HeaderText;
			word2->ActiveDocument->Tables[1]->Cell(1, j + 1)->Range->Text = headerText;
		}
		for (int i = 0; i < rows; i++)
		{
			try
			{
				for (int j = 0; j < columns; j++)
				{
					String^ OrCount = Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value);
					word2->ActiveDocument->Tables[1]->Cell(i + 2, j + 1)->Range->Text = OrCount;
				}
			}
			catch (System::Runtime::InteropServices::COMException^ e)
			{
				MessageBox::Show("Ошибка COMException", "Ошибка");
			}
		}
		try
		{
			Object^ fileName = "11_КлимовИА.docx";
			word2->ActiveDocument->SaveAs2(fileName, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch(System::Runtime::InteropServices::COMException^ ex)
		{
			MessageBox::Show("Не удалось перезаписать файл.(Закройте пожалуйста файл во всех приложениях)", "Ошибка файла");
		}
}
};
}

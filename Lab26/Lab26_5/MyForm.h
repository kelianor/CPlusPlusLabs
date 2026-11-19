#pragma once

namespace Lab265 {

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
			//
			//TODO: добавьте код конструктора
			//
		}

	private: char* arr = nullptr;
	private: int currentLength = 0;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьСимволToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьСимволToolStripMenuItem;
	private: int size = 0;
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
			delete[] arr;
			arr = nullptr;
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ массивToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьМассивToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ записатьЧислоToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ инструментыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ генерацияСимволаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ авторToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ показатьАвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ скрытьАвтораToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ createArrButton;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ sizeInput;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ removeSymbol;
	private: System::Windows::Forms::Button^ addSymbol;




	private: System::Windows::Forms::TextBox^ symbol;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Button^ generateSymbol;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TextBox^ fromNum;
	private: System::Windows::Forms::TextBox^ toNum;




















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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->массивToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьМассивToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->записатьЧислоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьСимволToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьСимволToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструментыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->генерацияСимволаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->авторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->показатьАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->createArrButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sizeInput = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->generateSymbol = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->fromNum = (gcnew System::Windows::Forms::TextBox());
			this->toNum = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->removeSymbol = (gcnew System::Windows::Forms::Button());
			this->addSymbol = (gcnew System::Windows::Forms::Button());
			this->symbol = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->массивToolStripMenuItem,
					this->инструментыToolStripMenuItem, this->авторToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(412, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// массивToolStripMenuItem
			// 
			this->массивToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->создатьМассивToolStripMenuItem,
					this->записатьЧислоToolStripMenuItem
			});
			this->массивToolStripMenuItem->Name = L"массивToolStripMenuItem";
			this->массивToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->массивToolStripMenuItem->Text = L"Массив";
			// 
			// создатьМассивToolStripMenuItem
			// 
			this->создатьМассивToolStripMenuItem->Name = L"создатьМассивToolStripMenuItem";
			this->создатьМассивToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->создатьМассивToolStripMenuItem->Text = L"Создать массив";
			this->создатьМассивToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createArrButton_Click);
			// 
			// записатьЧислоToolStripMenuItem
			// 
			this->записатьЧислоToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->удалитьСимволToolStripMenuItem,
					this->добавитьСимволToolStripMenuItem
			});
			this->записатьЧислоToolStripMenuItem->Name = L"записатьЧислоToolStripMenuItem";
			this->записатьЧислоToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->записатьЧислоToolStripMenuItem->Text = L"Число";
			// 
			// удалитьСимволToolStripMenuItem
			// 
			this->удалитьСимволToolStripMenuItem->Name = L"удалитьСимволToolStripMenuItem";
			this->удалитьСимволToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->удалитьСимволToolStripMenuItem->Text = L"Удалить символ";
			this->удалитьСимволToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeSymbol_Click);
			// 
			// добавитьСимволToolStripMenuItem
			// 
			this->добавитьСимволToolStripMenuItem->Name = L"добавитьСимволToolStripMenuItem";
			this->добавитьСимволToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->добавитьСимволToolStripMenuItem->Text = L"Добавить символ";
			this->добавитьСимволToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addSymbol_Click);
			// 
			// инструментыToolStripMenuItem
			// 
			this->инструментыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->генерацияСимволаToolStripMenuItem });
			this->инструментыToolStripMenuItem->Name = L"инструментыToolStripMenuItem";
			this->инструментыToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->инструментыToolStripMenuItem->Text = L"Инструменты";
			// 
			// генерацияСимволаToolStripMenuItem
			// 
			this->генерацияСимволаToolStripMenuItem->Name = L"генерацияСимволаToolStripMenuItem";
			this->генерацияСимволаToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->генерацияСимволаToolStripMenuItem->Text = L"Сгенерировать символ";
			this->генерацияСимволаToolStripMenuItem->Visible = false;
			this->генерацияСимволаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generateSymbol_Click);
			// 
			// авторToolStripMenuItem
			// 
			this->авторToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->показатьАвтораToolStripMenuItem,
					this->скрытьАвтораToolStripMenuItem
			});
			this->авторToolStripMenuItem->Name = L"авторToolStripMenuItem";
			this->авторToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->авторToolStripMenuItem->Text = L"Автор";
			// 
			// показатьАвтораToolStripMenuItem
			// 
			this->показатьАвтораToolStripMenuItem->Name = L"показатьАвтораToolStripMenuItem";
			this->показатьАвтораToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->показатьАвтораToolStripMenuItem->Text = L"Показать автора";
			this->показатьАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::показатьАвтораToolStripMenuItem_Click);
			// 
			// скрытьАвтораToolStripMenuItem
			// 
			this->скрытьАвтораToolStripMenuItem->Name = L"скрытьАвтораToolStripMenuItem";
			this->скрытьАвтораToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->скрытьАвтораToolStripMenuItem->Text = L"Скрыть автора";
			this->скрытьАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::скрытьАвтораToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->groupBox2, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(412, 316);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->createArrButton, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->sizeInput, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 269);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(406, 44);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// createArrButton
			// 
			this->createArrButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createArrButton->Location = System::Drawing::Point(206, 17);
			this->createArrButton->Name = L"createArrButton";
			this->createArrButton->Size = System::Drawing::Size(197, 24);
			this->createArrButton->TabIndex = 0;
			this->createArrButton->Text = L"Создать массив";
			this->createArrButton->UseVisualStyleBackColor = true;
			this->createArrButton->Click += gcnew System::EventHandler(this, &MyForm::createArrButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Содержание массива:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(206, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 14);
			this->label2->TabIndex = 2;
			this->label2->Text = L"-";
			// 
			// sizeInput
			// 
			this->sizeInput->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sizeInput->Location = System::Drawing::Point(3, 17);
			this->sizeInput->Name = L"sizeInput";
			this->sizeInput->Size = System::Drawing::Size(197, 20);
			this->sizeInput->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel4);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(3, 163);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(406, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Генерация символов";
			this->groupBox1->Visible = false;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->generateSymbol, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 0, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(400, 81);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// generateSymbol
			// 
			this->generateSymbol->Dock = System::Windows::Forms::DockStyle::Fill;
			this->generateSymbol->Location = System::Drawing::Point(3, 54);
			this->generateSymbol->Name = L"generateSymbol";
			this->generateSymbol->Size = System::Drawing::Size(394, 24);
			this->generateSymbol->TabIndex = 0;
			this->generateSymbol->Text = L"Сгенерировать символ";
			this->generateSymbol->UseVisualStyleBackColor = true;
			this->generateSymbol->Click += gcnew System::EventHandler(this, &MyForm::generateSymbol_Click);
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->fromNum, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->toNum, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(394, 45);
			this->tableLayoutPanel5->TabIndex = 1;
			// 
			// fromNum
			// 
			this->fromNum->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fromNum->Location = System::Drawing::Point(3, 3);
			this->fromNum->Name = L"fromNum";
			this->fromNum->Size = System::Drawing::Size(191, 20);
			this->fromNum->TabIndex = 0;
			// 
			// toNum
			// 
			this->toNum->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toNum->Location = System::Drawing::Point(200, 3);
			this->toNum->Name = L"toNum";
			this->toNum->Size = System::Drawing::Size(191, 20);
			this->toNum->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel3);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(406, 154);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Управление массивом";
			this->groupBox2->Visible = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->removeSymbol, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->addSymbol, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->symbol, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(400, 135);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// removeSymbol
			// 
			this->removeSymbol->Dock = System::Windows::Forms::DockStyle::Fill;
			this->removeSymbol->Location = System::Drawing::Point(3, 78);
			this->removeSymbol->Name = L"removeSymbol";
			this->removeSymbol->Size = System::Drawing::Size(394, 24);
			this->removeSymbol->TabIndex = 0;
			this->removeSymbol->Text = L"Удалить символ";
			this->removeSymbol->UseVisualStyleBackColor = true;
			this->removeSymbol->Click += gcnew System::EventHandler(this, &MyForm::removeSymbol_Click);
			// 
			// addSymbol
			// 
			this->addSymbol->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addSymbol->Location = System::Drawing::Point(3, 108);
			this->addSymbol->Name = L"addSymbol";
			this->addSymbol->Size = System::Drawing::Size(394, 24);
			this->addSymbol->TabIndex = 1;
			this->addSymbol->Text = L"Добавить символ";
			this->addSymbol->UseVisualStyleBackColor = true;
			this->addSymbol->Click += gcnew System::EventHandler(this, &MyForm::addSymbol_Click);
			// 
			// symbol
			// 
			this->symbol->Dock = System::Windows::Forms::DockStyle::Fill;
			this->symbol->Location = System::Drawing::Point(3, 3);
			this->symbol->Name = L"symbol";
			this->symbol->Size = System::Drawing::Size(394, 20);
			this->symbol->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 340);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"26 ЛР";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: void updateArrayLabel()
		{
			if (arr == nullptr || currentLength == 0)
			{
				label2->Text = "-";
				return;
			}

			System::String^ result = "";
			for (int i = 0; i < currentLength; i++)
			{
				wchar_t wch = (wchar_t)arr[i];
				result += gcnew System::String(wch, 1);
				result += " ";
			}

			label2->Text = result;
		}

private: System::Void createArrButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (arr == nullptr)
	{
		int inputSize = 0;
		if (!System::Int32::TryParse(sizeInput->Text, inputSize) || inputSize <= 0)
		{
			System::Windows::Forms::MessageBox::Show("Ошибка! Размер массива должен быть целым положительным числом.", "Ошибка ввода", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			sizeInput->Clear();
			return;
		}

		size = inputSize;
		currentLength = 0;
		arr = new char[size];

		groupBox1->Show();
		groupBox2->Show();
		создатьМассивToolStripMenuItem->Text = "Удалить массив";
		createArrButton->Text = "Удалить массив";
		записатьЧислоToolStripMenuItem->Visible = true;
		инструментыToolStripMenuItem->Visible = true;

		updateArrayLabel();
	}
	else
	{
		delete[] arr;
		arr = nullptr;
		size = 0;
		currentLength = 0;

		groupBox1->Hide();
		groupBox2->Hide();
		создатьМассивToolStripMenuItem->Text = "Создать массив";
		createArrButton->Text = "Создать массив";
		записатьЧислоToolStripMenuItem->Visible = false;
		инструментыToolStripMenuItem->Visible = false;

		updateArrayLabel();
	}
}

private: System::Void addSymbol_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ inputText = symbol->Text->Trim();
	if (inputText->Length != 1)
	{
		System::Windows::Forms::MessageBox::Show("Ошибка! Введите ровно один символ для добавления.", "Ошибка ввода", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		symbol->Clear();
		return;
	}

	if (currentLength >= size)
	{
		System::Windows::Forms::MessageBox::Show("Ошибка! Массив уже полностью заполнен.", "Переполнение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
		symbol->Clear();
		return;
	}

	char charToAppend = (char)inputText[0];
	arr[currentLength] = charToAppend;
	currentLength++;

	symbol->Clear();
	updateArrayLabel();
}

private: System::Void removeSymbol_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ inputText = symbol->Text->Trim();
	if (inputText->Length != 1)
	{
		System::Windows::Forms::MessageBox::Show("Ошибка! Введите ровно один символ для удаления.", "Ошибка ввода", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		symbol->Clear();
		return;
	}

	if (currentLength == 0)
	{
		System::Windows::Forms::MessageBox::Show("Массив пуст, удалять нечего.", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		symbol->Clear();
		return;
	}

	char charToRemove = (char)inputText[0];
	int targetIndex = -1;

	for (int i = 0; i < currentLength; i++)
	{
		if (arr[i] == charToRemove)
		{
			targetIndex = i;
			break;
		}
	}

	if (targetIndex == -1)
	{
		System::Windows::Forms::MessageBox::Show("Символ '" + inputText + "' не найден в массиве.", "Результат", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		symbol->Clear();
		return;
	}

	for (int i = targetIndex; i < currentLength - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	currentLength--;

	symbol->Clear();
	updateArrayLabel();
}

private: System::Void generateSymbol_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ fromText = fromNum->Text->Trim();
	System::String^ toText = toNum->Text->Trim();

	if (fromText->Length != 1 || toText->Length != 1)
	{
		System::Windows::Forms::MessageBox::Show(
			"Ошибка! Для задания диапазона введите строго по одному символу в каждое поле.",
			"Некорректный ввод",
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Error
		);
		fromNum->Clear();
		toNum->Clear();
		return;
	}

	int startCode = (int)fromText[0];
	int endCode = (int)toText[0];

	if (startCode > endCode)
	{
		int tmp = startCode;
		startCode = endCode;
		endCode = tmp;
	}

	System::Random^ rand = gcnew System::Random();
	int randomAscii = rand->Next(startCode, endCode + 1);

	wchar_t generatedChar = (wchar_t)randomAscii;
	symbol->Text = gcnew System::String(generatedChar, 1);
}


private: System::Void показатьАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "ЛР 26 - Климов Илья Андреевич Т-493";
}

private: System::Void скрытьАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "ЛР 26";
}
};
}

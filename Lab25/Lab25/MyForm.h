#pragma once

namespace Lab25 {

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
			this->Text = "Работа с MS Word Климов И.А. Т-493";
			this->textBox1->Multiline = true;
			this->textBox1->TabIndex = 0;
			this->button1->TabIndex = 1;
			this->button2->TabIndex = 2;
			this->button1->Text = "Проверка орфографии";
			this->button2->Text = "Создать документ MS Word";
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(388, 420);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 440);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 440);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(217, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 577);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		auto word1 = gcnew Microsoft::Office::Interop::Word::Application();
		word1->Visible = false;
		Object^ t = Type::Missing;
		auto document = word1->Documents->Add(t, t, t, t);
		document->Words->First->InsertBefore(this->textBox1->Text);
		document->CheckSpelling(t, t, t, t, t, t, t, t, t, t, t, t);
		String^ correctText = document->Content->Text;
		this->textBox1->Text = correctText->Replace("\r", "");
		Boolean^ tt = false;
		word1->Documents->Close(tt, t, t);
		word1->Quit(tt, t, t);
		word1 = nullptr;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			array<String^>^ names = { "Казачок Артём", "Карчевский Марк", "Качанов Андрей", "Миранович Ярослав", "Вскрытие замков", "Справочная служба", "Прогноз погоды", "Swith Jack", "Рожденственский Эдуард Ипполиттович", "ЖЭС" };
			array<String^>^ telephones = { "+375(29)378-60-14", "+375(13)807-82-65", "+375(17)123-45-67", "+375(23)560-76-00", "7788", "007", "909", "+100(98)904-45-21", "+315(03)509-87-43 или 777","117" };
			auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
			word2->Visible = true;
			auto t = Type::Missing;
			auto document2 = word2->Documents->Add(t, t, t, t);
			word2->Selection->TypeText("\t\t\t\tТаблица телефонных номеров");
			System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
			System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, 10,2,t1,t2);
			for (int i = 0; i < 10; i++)
			{
				try
				{
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(names[i]);
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(telephones[i]);
				}
				catch (System::Runtime::InteropServices::COMException^ e)
				{
					textBox1->Text += i.ToString() + " " + e->Message + "\t";
					i--;
				}
			}
			Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine;
			Int32^ str10 = 10;
			word2->Selection->MoveDown(t3,str10,t);
			word2->Selection->TypeText("\tВ таблице выше перечислены номера телефонов и владельцы. Многие номера имеют международный формат отображения номера: + код страны (код оператора) собственно номер телефона абонента.\n\tНачало следующего абзаца текста.\n");
			Object^ fileName = "Lab25.docx";
			word2->ActiveDocument->SaveAs2(fileName, t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t);
		}
		catch (System::Exception^ e0)
		{
			textBox1->Text += e0->Message + "\t";
		}
	}
};
}

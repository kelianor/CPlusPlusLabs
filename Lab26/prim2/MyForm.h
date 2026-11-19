#pragma once

namespace prim2 {

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
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
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
			this->fileListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::FileListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// fileListBox1
			// 
			this->fileListBox1->FormattingEnabled = true;
			this->fileListBox1->Location = System::Drawing::Point(8, 8);
			this->fileListBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->fileListBox1->Name = L"fileListBox1";
			this->fileListBox1->Pattern = L"*.*";
			this->fileListBox1->Size = System::Drawing::Size(239, 355);
			this->fileListBox1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(250, 8);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(374, 6);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 21);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сгенерировать рандомное число";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 164);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(356, 26);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Создать новый массив (размерность берется выше)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(250, 203);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(357, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 32);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(356, 25);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Добавить число в массив";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(250, 237);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(356, 26);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Распечатать имеющийся в массиве значения";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(250, 62);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 375);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->fileListBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int n = 0;
			int* m = nullptr;
			int i = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Random^ r = gcnew Random();
		int a = 10 + (r->Next()) % (99 - 10 + 1);
		textBox1->Text = a.ToString();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		if (m != nullptr)
		{
			delete[] m;
			m = nullptr;
			n = 0;
			label1->Text = "";
			label1->Text = "Удален имевшийся массив.";
		}
		this->n = Convert::ToInt32(this->textBox1->Text);
		m = new int[n];
		if (!m)
		{
			MessageBox::Show("Не удалось создать массив на " + n.ToString() + " элементов.");
			return;
		}
		i = 0;
		label1->Text = "Создан массив на " + n.ToString() + " элементов.";
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message);
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		if (i < n && n > 0 && m != nullptr)
		{
			m[i] = Convert::ToInt32(this->textBox1->Text);
			i++;
			label1->Text = "";
			label1->Text = "Заполнен элемент № " + i.ToString() + " из " + n.ToString();
		}
		else
		{
			MessageBox::Show("Массив размерности " + n + " заполнен или не создан.");
		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message);
	}
	catch (System::Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox2->ReadOnly = true;
	this->textBox2->Clear();
	this->textBox1->Clear();
	for (int j = 0; j < i && j < n; j++)
	{
		this->textBox2->Text += m[j].ToString() + " ";
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

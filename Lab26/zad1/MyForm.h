#pragma once
#include <time.h>
#include <cstdlib>

namespace zad1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			srand(time(NULL));
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ созданиећассиваToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьћассивToolStripMenuItem;









	private: System::Windows::Forms::ToolStripMenuItem^ генераци€„ислаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалить„ислоToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьћассивToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструментыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ генераци€„ислаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ авторToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ показатьјвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ скрытьјвтораToolStripMenuItem;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->созданиећассиваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьћассивToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->генераци€„ислаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалить„ислоToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьћассивToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструментыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->генераци€„ислаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->авторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->показатьјвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьјвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 42);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(231, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"ћакс.размер массива";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 79);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(229, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"—оздать массив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(11, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 29);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Ќач.диапазон";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(245, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 29);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L" он.диапазон";
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 202);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(227, 29);
			this->textBox4->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(228, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"—генерировать число";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(333, 57);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(479, 139);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"√енераци€ числа";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(9, 56);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(308, 140);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"—оздание массива";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(242, 202);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(252, 38);
			this->button3->TabIndex = 8;
			this->button3->Text = L"«аписать в массив";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(514, 202);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(530, 29);
			this->textBox5->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(362, 248);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"1";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 245);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(346, 29);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"„исло четных положительных чисел";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(362, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 25);
			this->label2->TabIndex = 12;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Location = System::Drawing::Point(818, 58);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(226, 138);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"”далить число";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 67);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(190, 42);
			this->button4->TabIndex = 1;
			this->button4->Text = L"”далить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(7, 30);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(190, 29);
			this->textBox7->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->созданиећассиваToolStripMenuItem,
					this->инструментыToolStripMenuItem, this->авторToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1152, 38);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// созданиећассиваToolStripMenuItem
			// 
			this->созданиећассиваToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->создатьћассивToolStripMenuItem,
					this->генераци€„ислаToolStripMenuItem1, this->удалить„ислоToolStripMenuItem1
			});
			this->созданиећассиваToolStripMenuItem->Name = L"созданиећассиваToolStripMenuItem";
			this->созданиећассиваToolStripMenuItem->Size = System::Drawing::Size(104, 34);
			this->созданиећассиваToolStripMenuItem->Text = L"ћассив";
			// 
			// создатьћассивToolStripMenuItem
			// 
			this->создатьћассивToolStripMenuItem->Name = L"создатьћассивToolStripMenuItem";
			this->создатьћассивToolStripMenuItem->Size = System::Drawing::Size(282, 40);
			this->создатьћассивToolStripMenuItem->Text = L"—оздать массив";
			this->создатьћассивToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создатьћассивToolStripMenuItem_Click);
			// 
			// генераци€„ислаToolStripMenuItem1
			// 
			this->генераци€„ислаToolStripMenuItem1->Name = L"генераци€„ислаToolStripMenuItem1";
			this->генераци€„ислаToolStripMenuItem1->Size = System::Drawing::Size(282, 40);
			this->генераци€„ислаToolStripMenuItem1->Text = L"«аписать число";
			this->генераци€„ислаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::генераци€„ислаToolStripMenuItem1_Click);
			// 
			// удалить„ислоToolStripMenuItem1
			// 
			this->удалить„ислоToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->удалитьћассивToolStripMenuItem });
			this->удалить„ислоToolStripMenuItem1->Name = L"удалить„ислоToolStripMenuItem1";
			this->удалить„ислоToolStripMenuItem1->Size = System::Drawing::Size(282, 40);
			this->удалить„ислоToolStripMenuItem1->Text = L"”далить число";
			this->удалить„ислоToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::удалить„ислоToolStripMenuItem1_Click);
			// 
			// удалитьћассивToolStripMenuItem
			// 
			this->удалитьћассивToolStripMenuItem->Name = L"удалитьћассивToolStripMenuItem";
			this->удалитьћассивToolStripMenuItem->Size = System::Drawing::Size(283, 40);
			this->удалитьћассивToolStripMenuItem->Text = L"”далить массив";
			this->удалитьћассивToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьћассивToolStripMenuItem_Click);
			// 
			// инструментыToolStripMenuItem
			// 
			this->инструментыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->генераци€„ислаToolStripMenuItem });
			this->инструментыToolStripMenuItem->Name = L"инструментыToolStripMenuItem";
			this->инструментыToolStripMenuItem->Size = System::Drawing::Size(162, 34);
			this->инструментыToolStripMenuItem->Text = L"»нструменты";
			// 
			// генераци€„ислаToolStripMenuItem
			// 
			this->генераци€„ислаToolStripMenuItem->Name = L"генераци€„ислаToolStripMenuItem";
			this->генераци€„ислаToolStripMenuItem->Size = System::Drawing::Size(296, 40);
			this->генераци€„ислаToolStripMenuItem->Text = L"√енераци€ числа";
			this->генераци€„ислаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::генераци€„ислаToolStripMenuItem_Click);
			// 
			// авторToolStripMenuItem
			// 
			this->авторToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->показатьјвтораToolStripMenuItem,
					this->скрытьјвтораToolStripMenuItem
			});
			this->авторToolStripMenuItem->Name = L"авторToolStripMenuItem";
			this->авторToolStripMenuItem->Size = System::Drawing::Size(89, 34);
			this->авторToolStripMenuItem->Text = L"јвтор";
			// 
			// показатьјвтораToolStripMenuItem
			// 
			this->показатьјвтораToolStripMenuItem->Name = L"показатьјвтораToolStripMenuItem";
			this->показатьјвтораToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->показатьјвтораToolStripMenuItem->Text = L"ѕоказать автора";
			this->показатьјвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::показатьјвтораToolStripMenuItem_Click_1);
			// 
			// скрытьјвтораToolStripMenuItem
			// 
			this->скрытьјвтораToolStripMenuItem->Name = L"скрытьјвтораToolStripMenuItem";
			this->скрытьјвтораToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->скрытьјвтораToolStripMenuItem->Text = L"—крыть автора";
			this->скрытьјвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::скрытьјвтораToolStripMenuItem_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1152, 340);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		short int* mas = nullptr;
		bool* prov = nullptr;
		int sizeMas = 0;
		int ct = 0;
		int countPol = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			if (mas != nullptr) 
			{
				delete[] mas;
				delete[] prov;
				mas = nullptr;
				prov = nullptr;
				this->textBox5->Clear();
				ct = 0;
				countPol = 0;
				this->label1->Text = "";
				this->label2->Text = "";
			}
			sizeMas = Convert::ToInt32(this->textBox1->Text);
			mas = new short int[sizeMas];
			prov = new bool[sizeMas];
			for (int i = 0; i < sizeMas; i++)
			{
				prov[i] = false;
			}
			if (mas == nullptr)
			{
				MessageBox::Show("Ќе удалось выделить пам€ть под массив", "ќшибка пам€ти");
			}
			else
			{
				MessageBox::Show("ћассив создан");
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("¬ы ввели неправильный тип данных", "Ќеправильный тип данных");
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			short int start = Convert::ToInt32(this->textBox2->Text);
			short int end = Convert::ToInt32(this->textBox3->Text);
			if (start > end)
			{
				MessageBox::Show("Ќе может начальный диапазон быть больше конечного", "ќшибка значений");
			}
			short int randomNum = start + rand() % (end - start + 1);
			this->textBox4->Text = Convert::ToString(randomNum);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("¬ы ввели неправильный тип данных либо оставили пустое поле", "Ќеправильный тип данных");
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		short int number = Convert::ToInt32(this->textBox4->Text);
		if (mas == nullptr)
		{
			MessageBox::Show("¬ы не создали массив", "ќшибка данных");
			return;
		}
		else
		{
			if (ct < sizeMas)
			{
				for (int i = 0; i < sizeMas; i++)
				{
					if (prov[i] == false)
					{
						mas[i] = number;
						prov[i] = true;
						ct++;
						this->textBox5->Text += number.ToString() + " ";
						this->label1->Text = "ћассив заполнен на " + ct.ToString() + " элемента из" + sizeMas.ToString();
						if (number > 0 && number % 2 == 0)
						{
							countPol++;
							this->label2->Text = countPol.ToString();
						}
						break;
					}
				}
			}
			else
			{
				this->label1->Text = "ћассив полностью заполнен";
			}
		
		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("¬ы ввели неправильный тип данных", "Ќеправильный тип данных");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (mas == nullptr)
	{
		MessageBox::Show("¬ы не создали массив", "ќшибка данных");
		return;
	}
	try
	{
		int search = Convert::ToInt32(this->textBox7->Text);
		for (int i = 0; i < sizeMas; i++)
		{
			if (mas[i] == search && prov[i] == true)
			{
				if (mas[i] > 0 && mas[i] % 2 == 0)
				{
					countPol--;
				}
				mas[i] = 0;
				prov[i] = false;
				ct--;
			}
		}
		this->textBox5->Clear();
		for (int i = 0; i < sizeMas; i++)
		{
			if (prov[i] == true)
			{
				this->textBox5->Text += mas[i].ToString() + " ";
			}
		}
		this->label1->Text = "ћассив заполнен на " + ct.ToString() + " элемента из" + sizeMas.ToString();
		this->label2->Text = countPol.ToString();
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("¬ы ввели неправильный тип данных", "Ќеправильный тип данных");
	}
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox1->Clear();
}

private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox2->Clear();
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox3->Clear();
}
private: System::Void создатьћассивToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button1_Click(sender, System::EventArgs::Empty);
}
private: System::Void генераци€„ислаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) // запись числа 
{
	button3_Click(sender, System::EventArgs::Empty);
}
private: System::Void удалить„ислоToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button4_Click(sender, System::EventArgs::Empty);
}
private: System::Void удалитьћассивToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (mas != nullptr)
	{
		delete[] mas;  
		mas = nullptr; 
		if (prov != nullptr)
		{
			delete[] prov;
			prov = nullptr;
		}
		ct = 0;
		countPol = 0;
		sizeMas = 0;
		this->textBox5->Clear();
		this->label1->Text = "ћассив удален из пам€ти";
		this->label2->Text = "0";
		MessageBox::Show("ƒинамический массив полностью удален из оперативной пам€ти!", "ќчистка пам€ти");
	}
	else
	{
		MessageBox::Show("ћассив еще не был создан или уже удален!");
	}
}
private: System::Void генераци€„ислаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button2_Click(sender, System::EventArgs::Empty);
}
private: System::Void показатьјвтораToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = " азачок јртЄм јндреевич “-493";
}
private: System::Void скрытьјвтораToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = "";
}
};
}

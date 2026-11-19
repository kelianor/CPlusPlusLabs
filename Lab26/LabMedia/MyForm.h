#pragma once

namespace LabMedia {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьФайлToolStripMenuItem;
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer2;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog2;
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ следующийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ предыдущийToolStripMenuItem;
	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->axWindowsMediaPlayer2 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->следующийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->предыдущийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->fileListBox2 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::FileListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer2
			// 
			this->axWindowsMediaPlayer2->Enabled = true;
			this->axWindowsMediaPlayer2->Location = System::Drawing::Point(12, 104);
			this->axWindowsMediaPlayer2->Name = L"axWindowsMediaPlayer2";
			this->axWindowsMediaPlayer2->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer2.OcxState")));
			this->axWindowsMediaPlayer2->Size = System::Drawing::Size(893, 496);
			this->axWindowsMediaPlayer2->TabIndex = 0;
			this->axWindowsMediaPlayer2->StatusChange += gcnew System::EventHandler(this, &MyForm::axWindowsMediaPlayer2_StatusChange);
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(2198, 33);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem3,
					this->следующийToolStripMenuItem, this->предыдущийToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(69, 29);
			this->toolStripMenuItem1->Text = L"Файл";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(270, 34);
			this->toolStripMenuItem3->Text = L"Открыть файл";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// следующийToolStripMenuItem
			// 
			this->следующийToolStripMenuItem->Name = L"следующийToolStripMenuItem";
			this->следующийToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->следующийToolStripMenuItem->Text = L"Следующий";
			this->следующийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::следующийToolStripMenuItem_Click);
			// 
			// предыдущийToolStripMenuItem
			// 
			this->предыдущийToolStripMenuItem->Name = L"предыдущийToolStripMenuItem";
			this->предыдущийToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->предыдущийToolStripMenuItem->Text = L"Проигрывать";
			this->предыдущийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::предыдущийToolStripMenuItem_Click);
			// 
			// fileListBox2
			// 
			this->fileListBox2->FormattingEnabled = true;
			this->fileListBox2->Location = System::Drawing::Point(923, 36);
			this->fileListBox2->Name = L"fileListBox2";
			this->fileListBox2->Pattern = L"*.*";
			this->fileListBox2->Size = System::Drawing::Size(329, 324);
			this->fileListBox2->TabIndex = 2;
			this->fileListBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::fileListBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(2198, 1111);
			this->Controls->Add(this->fileListBox2);
			this->Controls->Add(this->axWindowsMediaPlayer2);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip2;
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		fileListBox2->Pattern = "*.mp3";
		folderBrowserDialog2->ShowDialog();
		fileListBox2->FileName = folderBrowserDialog2->SelectedPath;
	}
private: System::Void axWindowsMediaPlayer2_StatusChange(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = "Проигрывается: " + axWindowsMediaPlayer2->status;
}
private: System::Void fileListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	axWindowsMediaPlayer2->URL = folderBrowserDialog2->SelectedPath + "\\" + fileListBox2->SelectedItem->ToString();
}
private: System::Void следующийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		fileListBox2->SelectedIndex += 1;
	}
	catch (System::ArgumentOutOfRangeException^ e)
	{
		MessageBox::Show("Список закончился.");
	}
	catch (System::Exception^ e)
	{
		MessageBox::Show("Ошибка: " + e->Message);
	}
}

private: System::Void предыдущийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		axWindowsMediaPlayer2->Ctlcontrols->play();
	}
	catch (System::Exception^ e)
	{
		MessageBox::Show("Ошибка: " + e->Message);
	}
}
};
}

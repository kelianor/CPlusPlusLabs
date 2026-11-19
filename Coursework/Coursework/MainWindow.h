#pragma once
#include "Functions.h"
#include "AboutDialog.h"
#include <iostream>

namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		AccountManager^ account = nullptr; // Àêêàóíò

		MainWindow(void) : MainWindow(nullptr) {}

		MainWindow(AccountManager^ account)
		{
			InitializeComponent();

			map = gcnew MapManager((int)rowsUpDown->Value, (int)colsUpDown->Value, nullptr);
			lee = gcnew PathFinder(map);
			drawer = gcnew MapDrawer(mapPanel->CreateGraphics(), lee);
			this->account = account;
			map->setAuthor(account->getName());

			settings = gcnew SettingsManager("settings.bin");
			ApplyColor(settings->getColor());
			ApplyLanguage(settings->getCulture());
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::TabPage^ editTabPage;
	private: System::Windows::Forms::TabPage^ pathTabPage;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::NumericUpDown^ rowsUpDown;
	private: System::Windows::Forms::NumericUpDown^ colsUpDown;
	private: System::Windows::Forms::Label^ labelRows;
	private: System::Windows::Forms::Label^ labelCols;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ labelA;
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::Label^ labelDistance;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüÊàğòóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÔîíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâåòëîñèíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâåòëîêğàñíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÓìîë÷àíèşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëàğóñêàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Button^ logoutButton;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ mapPanel;
	private: System::Windows::Forms::Label^ mapLabel;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;



	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÊàğòóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÔîíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâåòëîñèíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâåòëîêğàñíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÓìîë÷àíèşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëàğóñêàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->editTabPage = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->rowsUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->colsUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelRows = (gcnew System::Windows::Forms::Label());
			this->labelCols = (gcnew System::Windows::Forms::Label());
			this->pathTabPage = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->labelDistance = (gcnew System::Windows::Forms::Label());
			this->mapPanel = (gcnew System::Windows::Forms::PictureBox());
			this->mapLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->editTabPage->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rowsUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->colsUpDown))->BeginInit();
			this->pathTabPage->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mapPanel))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			resources->ApplyResources(this->tableLayoutPanel1, L"tableLayoutPanel1");
			this->tableLayoutPanel1->Controls->Add(this->menuStrip1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->mapLabel, 0, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->âèäToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			resources->ApplyResources(this->ôàéëToolStripMenuItem, L"ôàéëToolStripMenuItem");
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->createToolStripMenuItem,
					this->ñîõğàíèòüToolStripMenuItem, this->ñîõğàíèòüToolStripMenuItem1, this->ñîõğàíèòüÊàêToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			// 
			// createToolStripMenuItem
			// 
			resources->ApplyResources(this->createToolStripMenuItem, L"createToolStripMenuItem");
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::createToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			resources->ApplyResources(this->ñîõğàíèòüToolStripMenuItem, L"ñîõğàíèòüToolStripMenuItem");
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::îòêğûòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem1
			// 
			resources->ApplyResources(this->ñîõğàíèòüToolStripMenuItem1, L"ñîõğàíèòüToolStripMenuItem1");
			this->ñîõğàíèòüToolStripMenuItem1->Name = L"ñîõğàíèòüToolStripMenuItem1";
			this->ñîõğàíèòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::ñîõğàíèòüToolStripMenuItem1_Click);
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			resources->ApplyResources(this->ñîõğàíèòüÊàêToolStripMenuItem, L"ñîõğàíèòüÊàêToolStripMenuItem");
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ñîõğàíèòüÊàêToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			resources->ApplyResources(this->ïğàâêàToolStripMenuItem, L"ïğàâêàToolStripMenuItem");
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem,
					this->ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem, this->î÷èñòèòüÊàğòóToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			// 
			// ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem
			// 
			resources->ApplyResources(this->ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem, L"ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem");
			this->ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem->Name = L"ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem";
			this->ïîñòàâèòüÍà÷àëüíóşÒî÷êóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::textBoxA_Click);
			// 
			// ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem
			// 
			resources->ApplyResources(this->ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem, L"ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem");
			this->ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem->Name = L"ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem";
			this->ïîñòàâèòüÊîíå÷íóşÒî÷êóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::textBoxB_Click);
			// 
			// î÷èñòèòüÊàğòóToolStripMenuItem
			// 
			resources->ApplyResources(this->î÷èñòèòüÊàğòóToolStripMenuItem, L"î÷èñòèòüÊàğòóToolStripMenuItem");
			this->î÷èñòèòüÊàğòóToolStripMenuItem->Name = L"î÷èñòèòüÊàğòóToolStripMenuItem";
			this->î÷èñòèòüÊàğòóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::clearButton_Click);
			// 
			// âèäToolStripMenuItem
			// 
			resources->ApplyResources(this->âèäToolStripMenuItem, L"âèäToolStripMenuItem");
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->öâåòÔîíàToolStripMenuItem,
					this->ÿçûêToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			// 
			// öâåòÔîíàToolStripMenuItem
			// 
			resources->ApplyResources(this->öâåòÔîíàToolStripMenuItem, L"öâåòÔîíàToolStripMenuItem");
			this->öâåòÔîíàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñâåòëîñèíèéToolStripMenuItem,
					this->ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem, this->ñâåòëîêğàñíûéToolStripMenuItem, this->ïîÓìîë÷àíèşToolStripMenuItem
			});
			this->öâåòÔîíàToolStripMenuItem->Name = L"öâåòÔîíàToolStripMenuItem";
			// 
			// ñâåòëîñèíèéToolStripMenuItem
			// 
			resources->ApplyResources(this->ñâåòëîñèíèéToolStripMenuItem, L"ñâåòëîñèíèéToolStripMenuItem");
			this->ñâåòëîñèíèéToolStripMenuItem->Name = L"ñâåòëîñèíèéToolStripMenuItem";
			this->ñâåòëîñèíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::lightCyanToolStripMenuItem_Click);
			// 
			// ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem
			// 
			resources->ApplyResources(this->ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem, L"ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem");
			this->ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem->Name = L"ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem";
			this->ñâåòëîçîëîòèñòîæ¸ëòûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::lightYellowToolStripMenuItem_Click);
			// 
			// ñâåòëîêğàñíûéToolStripMenuItem
			// 
			resources->ApplyResources(this->ñâåòëîêğàñíûéToolStripMenuItem, L"ñâåòëîêğàñíûéToolStripMenuItem");
			this->ñâåòëîêğàñíûéToolStripMenuItem->Name = L"ñâåòëîêğàñíûéToolStripMenuItem";
			this->ñâåòëîêğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::lightRedColorToolStripMenuItem_Click);
			// 
			// ïîÓìîë÷àíèşToolStripMenuItem
			// 
			resources->ApplyResources(this->ïîÓìîë÷àíèşToolStripMenuItem, L"ïîÓìîë÷àíèşToolStripMenuItem");
			this->ïîÓìîë÷àíèşToolStripMenuItem->Name = L"ïîÓìîë÷àíèşToolStripMenuItem";
			this->ïîÓìîë÷àíèşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::defaultToolStripMenuItem_Click);
			// 
			// ÿçûêToolStripMenuItem
			// 
			resources->ApplyResources(this->ÿçûêToolStripMenuItem, L"ÿçûêToolStripMenuItem");
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->englishToolStripMenuItem,
					this->áåëàğóñêàÿToolStripMenuItem, this->ğóññêèéToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			// 
			// englishToolStripMenuItem
			// 
			resources->ApplyResources(this->englishToolStripMenuItem, L"englishToolStripMenuItem");
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// áåëàğóñêàÿToolStripMenuItem
			// 
			resources->ApplyResources(this->áåëàğóñêàÿToolStripMenuItem, L"áåëàğóñêàÿToolStripMenuItem");
			this->áåëàğóñêàÿToolStripMenuItem->Name = L"áåëàğóñêàÿToolStripMenuItem";
			this->áåëàğóñêàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::áåëàğóñêàÿToolStripMenuItem_Click);
			// 
			// ğóññêèéToolStripMenuItem
			// 
			resources->ApplyResources(this->ğóññêèéToolStripMenuItem, L"ğóññêèéToolStripMenuItem");
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ğóññêèéToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			resources->ApplyResources(this->ñïğàâêàToolStripMenuItem, L"ñïğàâêàToolStripMenuItem");
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->îÏğîãğàììåToolStripMenuItem });
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			resources->ApplyResources(this->îÏğîãğàììåToolStripMenuItem, L"îÏğîãğàììåToolStripMenuItem");
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::aboutProgrammStripMenuItem_Click);
			// 
			// tableLayoutPanel2
			// 
			resources->ApplyResources(this->tableLayoutPanel2, L"tableLayoutPanel2");
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel5, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->mapPanel, 0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			// 
			// tableLayoutPanel5
			// 
			resources->ApplyResources(this->tableLayoutPanel5, L"tableLayoutPanel5");
			this->tableLayoutPanel5->Controls->Add(this->logoutButton, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->tabControl, 0, 0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			// 
			// logoutButton
			// 
			resources->ApplyResources(this->logoutButton, L"logoutButton");
			this->logoutButton->BackColor = System::Drawing::Color::Red;
			this->logoutButton->ForeColor = System::Drawing::Color::White;
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->UseVisualStyleBackColor = false;
			this->logoutButton->Click += gcnew System::EventHandler(this, &MainWindow::logoutButton_Click);
			// 
			// tabControl
			// 
			resources->ApplyResources(this->tabControl, L"tabControl");
			this->tabControl->Controls->Add(this->editTabPage);
			this->tabControl->Controls->Add(this->pathTabPage);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::tabControl_SelectedIndexChanged);
			// 
			// editTabPage
			// 
			resources->ApplyResources(this->editTabPage, L"editTabPage");
			this->editTabPage->Controls->Add(this->tableLayoutPanel3);
			this->editTabPage->Name = L"editTabPage";
			this->editTabPage->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel3
			// 
			resources->ApplyResources(this->tableLayoutPanel3, L"tableLayoutPanel3");
			this->tableLayoutPanel3->Controls->Add(this->clearButton, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->rowsUpDown, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->colsUpDown, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->labelRows, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->labelCols, 0, 2);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			// 
			// clearButton
			// 
			resources->ApplyResources(this->clearButton, L"clearButton");
			this->clearButton->Name = L"clearButton";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MainWindow::clearButton_Click);
			// 
			// rowsUpDown
			// 
			resources->ApplyResources(this->rowsUpDown, L"rowsUpDown");
			this->rowsUpDown->Name = L"rowsUpDown";
			this->rowsUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->rowsUpDown->ValueChanged += gcnew System::EventHandler(this, &MainWindow::rowsUpDown_ValueChanged);
			// 
			// colsUpDown
			// 
			resources->ApplyResources(this->colsUpDown, L"colsUpDown");
			this->colsUpDown->Name = L"colsUpDown";
			this->colsUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->colsUpDown->ValueChanged += gcnew System::EventHandler(this, &MainWindow::colsUpDown_ValueChanged);
			// 
			// labelRows
			// 
			resources->ApplyResources(this->labelRows, L"labelRows");
			this->labelRows->Name = L"labelRows";
			// 
			// labelCols
			// 
			resources->ApplyResources(this->labelCols, L"labelCols");
			this->labelCols->Name = L"labelCols";
			// 
			// pathTabPage
			// 
			resources->ApplyResources(this->pathTabPage, L"pathTabPage");
			this->pathTabPage->Controls->Add(this->tableLayoutPanel4);
			this->pathTabPage->Name = L"pathTabPage";
			this->pathTabPage->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel4
			// 
			resources->ApplyResources(this->tableLayoutPanel4, L"tableLayoutPanel4");
			this->tableLayoutPanel4->Controls->Add(this->labelA, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->labelB, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->textBoxA, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->textBoxB, 0, 3);
			this->tableLayoutPanel4->Controls->Add(this->labelDistance, 0, 4);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			// 
			// labelA
			// 
			resources->ApplyResources(this->labelA, L"labelA");
			this->labelA->Name = L"labelA";
			// 
			// labelB
			// 
			resources->ApplyResources(this->labelB, L"labelB");
			this->labelB->Name = L"labelB";
			// 
			// textBoxA
			// 
			resources->ApplyResources(this->textBoxA, L"textBoxA");
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->ReadOnly = true;
			this->textBoxA->Click += gcnew System::EventHandler(this, &MainWindow::textBoxA_Click);
			// 
			// textBoxB
			// 
			resources->ApplyResources(this->textBoxB, L"textBoxB");
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->ReadOnly = true;
			this->textBoxB->Click += gcnew System::EventHandler(this, &MainWindow::textBoxB_Click);
			// 
			// labelDistance
			// 
			resources->ApplyResources(this->labelDistance, L"labelDistance");
			this->labelDistance->Name = L"labelDistance";
			// 
			// mapPanel
			// 
			resources->ApplyResources(this->mapPanel, L"mapPanel");
			this->mapPanel->Name = L"mapPanel";
			this->mapPanel->TabStop = false;
			this->mapPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainWindow::mapPanel_Paint);
			this->mapPanel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mapPanel_MouseClick);
			this->mapPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mapPanel_MouseMove);
			this->mapPanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mapPanel_MouseUp);
			this->mapPanel->Resize += gcnew System::EventHandler(this, &MainWindow::mapPanel_Resize);
			// 
			// mapLabel
			// 
			resources->ApplyResources(this->mapLabel, L"mapLabel");
			this->mapLabel->Name = L"mapLabel";
			// 
			// MainWindow
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tableLayoutPanel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainWindow::MainWindow_FormClosing);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tabControl->ResumeLayout(false);
			this->editTabPage->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rowsUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->colsUpDown))->EndInit();
			this->pathTabPage->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mapPanel))->EndInit();
			this->ResumeLayout(false);

		}
	#pragma endregion
private:
	SettingsManager^ settings;
	AboutDialog^ aboutWindow = nullptr;
	MapManager^ map;
	MapDrawer^ drawer;
	PathFinder^ lee;
	EditMode currentMode = EditMode::EditObstacles;
	bool down = false;
	bool mapLoading = false;
	bool state;
	void ApplyColor(Color backColor) {
		this->BackColor = backColor;
		settings->setColor(backColor);
	}
	void ApplyLanguage(System::Globalization::CultureInfo^ culture) {
		System::Threading::Thread::CurrentThread->CurrentUICulture = culture;
		System::Threading::Thread::CurrentThread->CurrentCulture = culture;

		this->Controls->Clear();
		InitializeComponent();

		settings->setCulture(culture);
		updatePathTab();
		updateMapInfo();
	}

	// ßçûêè
	System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyLanguage(gcnew CultureInfo("en"));
	}
	System::Void áåëàğóñêàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyLanguage(gcnew CultureInfo("be"));
	}
	System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyLanguage(gcnew CultureInfo("ru"));
	}

	// Öâåòà
	System::Void lightYellowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(Color::LightGoldenrodYellow);
	}
	System::Void lightCyanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(Color::LightCyan);
	}
	System::Void lightRedColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(Color::MistyRose);
	}
	System::Void defaultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(SystemColors::Control);
	}

	// Êàğòà
	System::Void mapPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		drawer->setGraphics(e->Graphics);
		if (currentMode == EditMode::EditObstacles)
		{
			drawer->drawMap(mapPanel->Width, mapPanel->Height, false);
		}
		else
		{
			drawer->drawMap(mapPanel->Width, mapPanel->Height, true);
		}
	}

	void updateMapInfo()
	{
		String^ lang = settings->getCulture()->TwoLetterISOLanguageName;
		if (lang == "en")
		{
			mapLabel->Text = "File: " + (String::IsNullOrWhiteSpace(map->getPath()) ? "not saved" : map->getPath()) + "   Author: " + map->getAuthor() + "   Rows: " + map->getRows().ToString() + "   Cols: " + map->getCols().ToString();
		}
		else if (lang == "be")
		{
			mapLabel->Text = "Ôàéë: " + (String::IsNullOrWhiteSpace(map->getPath()) ? "íå çàõàâàíû" : map->getPath()) + "   À¢òàğ: " + map->getAuthor() + "   Ğàäêî¢: " + map->getRows().ToString() + "   Ñëóïêî¢: " + map->getCols().ToString();
		}
		else
		{
			mapLabel->Text = "Ôàéë: " + (String::IsNullOrWhiteSpace(map->getPath()) ? "íå ñîõğàí¸í" : map->getPath()) + "   Àâòîğ: " + map->getAuthor() + "   Ñòğîê: " + map->getRows().ToString() + "   Ñòîëáöîâ: " + map->getCols().ToString();
		}
	}
	System::Void tabControl_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (tabControl->SelectedTab == editTabPage)
		{
			currentMode = EditMode::EditObstacles;
		}
		else
		{
			currentMode = EditMode::SetStart;
		}
		mapPanel->Invalidate();
	}
	System::Void textBoxA_Click(System::Object^ sender, System::EventArgs^ e) {
		currentMode = EditMode::SetStart;
		tabControl->SelectedIndex = 1;
	}
	System::Void textBoxB_Click(System::Object^ sender, System::EventArgs^ e) {
		currentMode = EditMode::SetFinish;
		tabControl->SelectedIndex = 1;
	}
	System::Void rowsUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if(!mapLoading)
		{
			map->setRows((int)rowsUpDown->Value);
			lee->findPath();
			mapPanel->Invalidate();
		}
	}
	System::Void colsUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if(!mapLoading)
		{
			map->setCols((int)colsUpDown->Value);
			lee->findPath();
			mapPanel->Invalidate();
		}
	}
	System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		account->logout();
		settings->logout();
		this->Close();
	}

	// Î ïğîãğàììå
	System::Void aboutWindow_Closed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		aboutWindow = nullptr;
	}

	System::Void aboutProgrammStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (aboutWindow == nullptr || aboutWindow->IsDisposed) {
			aboutWindow = gcnew AboutDialog();
			aboutWindow->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::aboutWindow_Closed);

			aboutWindow->Show();
		}
		else {
			if (aboutWindow->WindowState == FormWindowState::Minimized) {
				aboutWindow->WindowState = FormWindowState::Normal;
			}
			aboutWindow->Activate();
		}
	}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void mapPanel_Resize(System::Object^ sender, System::EventArgs^ e) {
	mapPanel->Invalidate();
}
private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	lee->clear();
	mapPanel->Invalidate();
}
private: System::Void mapPanel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left & currentMode == EditMode::EditObstacles)
	{
		Point pos = drawer->getCellPos(e->X, e->Y, mapPanel->Width, mapPanel->Height);
		if (!down)
		{
			state = map->getCell(pos);
			down = true;
		}
		map->setCell(pos, !state);
		mapPanel->Invalidate();
	}
}
private: System::Void mapPanel_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		down = false;
	}
}
private: System::Void mapPanel_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Point pos = drawer->getCellPos(e->X, e->Y, mapPanel->Width, mapPanel->Height);
	if (currentMode == EditMode::SetStart)
	{
		map->setStart(pos);
	}
	else if (currentMode == EditMode::SetFinish)
	{
		map->setEnd(pos);
	}
	else if (currentMode == EditMode::EditObstacles)
	{
		map->setCell(pos, !state);
	}
	lee->findPath();
	mapPanel->Invalidate();
	updatePathTab();
}
void updateEditTab() {
	rowsUpDown->Value = map->getRows();
	colsUpDown->Value = map->getCols();
}
void updatePathTab() {
	Point start = map->getStart();
	Point end = map->getEnd();

	textBoxA->Text = "(" + start.X + "; " + start.Y + ")";
	textBoxB->Text = "(" + end.X + "; " + end.Y + ")";

	String^ lang = settings->getCulture()->TwoLetterISOLanguageName;
	if (lee->pathFound & lee->result.pathList != nullptr)
	{
		if (lang == "en")
		{
			labelDistance->Text = "Distance: " + lee->result.pathList->Count + " c. u.";
		}
		else if (lang == "be")
		{
			labelDistance->Text = "Àäëåãëàñöü: " + lee->result.pathList->Count + " ó. à.";
		}
		else
		{
			labelDistance->Text = "Ğàññòîÿíèå: " + lee->result.pathList->Count + " c. u.";
		}
	}
	else
	{
		if (lang == "en")
		{
			labelDistance->Text = "Path not found!";
		}
		else if (lang == "be")
		{
			labelDistance->Text = "Ïóöü íå çíîéäçåí!";
		}
		else
		{
			labelDistance->Text = "Ïóòü íå íàéäåí!";
		}
	}
}
System::Void ñîõğàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	String^ lang = settings->getCulture()->TwoLetterISOLanguageName;
	if (lang == "en")
	{
		sfd->Filter = "Map files (*.map)|*.map|All files (*.*)|*.*";
		sfd->Title = "Save map as...";
	}
	else if (lang == "be")
	{
		sfd->Filter = "Ôàéëû ìàï (*.map)|*.map|Óñå ôàéëû (*.*)|*.*";
		sfd->Title = "Çàõàâàöü ìàïó ÿê...";
	}
	else
	{
		sfd->Filter = "Ôàéëû êàğò (*.map)|*.map|Âñå ôàéëû (*.*)|*.*";
		sfd->Title = "Ñîõğàíèòü êàğòó êàê...";
	}


	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		map->setAuthor(account->getName());
		map->saveAs(sfd->FileName);
	}
}

System::Void ñîõğàíèòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if(map->getChanged())
	{
		if (map->getPath() != nullptr) {
			map->save();
		}
		else {
			ñîõğàíèòüÊàêToolStripMenuItem_Click(sender, e);
		}
	}
}

System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ñîõğàíèòüToolStripMenuItem1_Click(sender, e);
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	String^ lang = settings->getCulture()->TwoLetterISOLanguageName;
	if (lang == "en")
	{
		ofd->Filter = "Map files (*.map)|*.map|All files (*.*)|*.*";
		ofd->Title = "Open map file...";
	}
	else if (lang == "be")
	{
		ofd->Filter = "Ôàéëû ìàï (*.map)|*.map|Óñå ôàéëû (*.*)|*.*";
		ofd->Title = "Àäêğûöü ôàéë ìàïû...";
	}
	else
	{
		ofd->Filter = "Ôàéëû êàğò (*.map)|*.map|Âñå ôàéëû (*.*)|*.*";
		ofd->Title = "Îòêğûòü ôàéë êàğòû...";
	}

	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		mapLoading = true;
		lee->clear();
		map->open(ofd->FileName);
	}

	lee->findPath();
	mapPanel->Invalidate();
	updatePathTab();
	updateEditTab();
	updateMapInfo();
	mapLoading = false;
}
private: System::Void MainWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	ñîõğàíèòüToolStripMenuItem1_Click(sender, e);
}
private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ñîõğàíèòüToolStripMenuItem1_Click(sender, e);
	map->setPath(nullptr);
	lee->clear();
	map->setRows(10);
	map->setCols(10);
	map->setChanged(false);
	updatePathTab();
	updateEditTab();
	updateMapInfo();
	mapPanel->Invalidate();
}
};
}

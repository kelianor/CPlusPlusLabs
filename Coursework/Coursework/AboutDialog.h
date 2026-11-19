#pragma once
#include "Functions.h"

namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AboutDialog (Окно справки и информации о программе)
	/// </summary>
	public ref class AboutDialog : public System::Windows::Forms::Form
	{
	public:
		AboutDialog(void)
		{
			InitializeComponent();

			settings = gcnew SettingsManager("settings.bin");
			ApplyColor(settings->getColor());
			ApplyLanguage(settings->getCulture());
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AboutDialog()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::Label^ labelInfo;
	private: System::Windows::Forms::Button^ closeButton;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutDialog::typeid));
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelTitle
			// 
			resources->ApplyResources(this->labelTitle, L"labelTitle");
			this->labelTitle->Name = L"labelTitle";
			// 
			// labelInfo
			// 
			resources->ApplyResources(this->labelInfo, L"labelInfo");
			this->labelInfo->Name = L"labelInfo";
			// 
			// closeButton
			// 
			resources->ApplyResources(this->closeButton, L"closeButton");
			this->closeButton->Name = L"closeButton";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &AboutDialog::closeButton_Click);
			// 
			// AboutDialog
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->closeButton);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->labelTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AboutDialog";
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		SettingsManager^ settings;

		System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

	public:
		void ApplyColor(System::Drawing::Color backColor) {
			this->BackColor = backColor;
		}

		void ApplyLanguage(System::Globalization::CultureInfo^ culture) {
			System::Threading::Thread::CurrentThread->CurrentUICulture = culture;
			System::Threading::Thread::CurrentThread->CurrentCulture = culture;

			String^ lang = culture->TwoLetterISOLanguageName;

			if (lang == "en")
			{
				this->Text = "About Program";
				this->labelTitle->Text = "Help & Information System";
				this->closeButton->Text = "Close";

				this->labelInfo->Text =
					"Coursework Project\n"
					"Theme: Development of pathfinding software based on Lee's algorithm\n"
					"Developer: Student of group T-493, Klimov Ilya Andreevich\n\n"
					"User Guide:\n"
					"1. 'Edit' Tab:\n"
					"   - Hold and drag Left Mouse Button to draw obstacles (walls).\n"
					"   - Set map dimensions in 'Rows' and 'Cols' fields.\n"
					"   - Click 'Clear' to reset all obstacles.\n"
					"2. 'Path' Tab:\n"
					"   - Click on the map in 'Set Start' mode to place start (Red).\n"
					"   - Click on the map in 'Set Finish' mode to place finish (Green).\n"
					"   - The path is calculated automatically and highlighted in Yellow!";
			}
			else if (lang == "be")
			{
				this->Text = "Аб праграме";
				this->labelTitle->Text = "Даведачная сістэма";
				this->closeButton->Text = "Зачыніць";

				this->labelInfo->Text =
					"Курсавы праект\n"
					"Тэма: Распрацоўка праграмнага сродку разліку шляху па хвалевым алгарытме Лі\n"
					"Выканаўца: Студэнт групы Т-493, Клімаў Ілля Андрэевіч\n\n"
					"Кіраўніцтва карыстальніка:\n"
					"1. Укладка 'Рэдагаванне':\n"
					"   - Выкарыстоўвайце левую кнопку мышы (зацісніце і вадзіце) для малявання перашкод.\n"
					"   - Задавайце памеры карты ў палях 'Радкі' і 'Слупкі'.\n"
					"   - Націсніце 'Ачысціць', каб скінуць усе сцены.\n"
					"2. Укладка 'Маршрут':\n"
					"   - Клікніце па карце ў рэжыме 'Пачатковая кропка' для ўстаноўкі старту (чырвоны).\n"
					"   - Клікніце ў рэжыме 'Канчатковая кропка' для ўстаноўкі фінішу (зялёны).\n"
					"   - Шлях пракладаецца аўтаматычна і падсвечваецца жоўтым колерам!";
			}
			else // По умолчанию русский ("ru")
			{
				this->Text = "О программе";
				this->labelTitle->Text = "Справочная система";
				this->closeButton->Text = "Закрыть";

				this->labelInfo->Text =
					"Курсовой проект\n"
					"Тема: Разработка программного средства расчета пути по волновому алгоритму Ли в окружении фон Неймана\n"
					"Исполнитель: группа Т-493, Климов Илья Андреевич\n\n"
					"Руководство пользователя:\n"
					"1. Вкладка 'Редактирование':\n"
					"   - Зажмите левую кнопку мыши и водите по карте для рисования препятствий.\n"
					"   - Задавайте размеры сетки в полях 'Строки' и 'Столбцы'.\n"
					"   - Нажмите кнопку 'Очистить', чтобы убрать все препятствия.\n"
					"2. Вкладка 'Поиск пути':\n"
					"   - Нажмите на 'Начальная точка', а затем на карту для установки старта (Красный).\n"
					"   - Нажмите на 'Конечная точка', а затем на карту для установки финиша (Зелёный).\n"
					"   - Кратчайший путь прокладывается автоматически и подсвечивается Жёлтым!";
			}
		}
	};
}
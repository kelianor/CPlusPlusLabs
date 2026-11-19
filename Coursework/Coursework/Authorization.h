#pragma once
#include "Functions.h"
#include "AboutDialog.h"

namespace Coursework {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Authorization
	/// </summary>
	public ref class Authorization : public System::Windows::Forms::Form
	{
	public:
		AccountManager^ account = nullptr; // Аккаунт

		Authorization(void)
		{
			InitializeComponent();

			settings = gcnew SettingsManager("settings.bin");
			ApplyColor(settings->getColor());
			ApplyLanguage(settings->getCulture());

			account = gcnew AccountManager();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Authorization()
		{
			if (components)
			{
				delete components;
			}
			delete aboutWindow;
		}

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ welcomeLabel;
	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Label^ loginLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutProgrammStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветФонаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкПриложенияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ беларускаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ defaultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lightGoldenYellowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lightCyanToolStripMenuItem;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::CheckBox^ showPasswordCheckBox;
	private: System::Windows::Forms::ToolStripMenuItem^ lightRedToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ defaultColorToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ rememberMeCheckBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Authorization::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->welcomeLabel = (gcnew System::Windows::Forms::Label());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightCyanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightGoldenYellowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightRedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкПриложенияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->беларускаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgrammStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showPasswordCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->rememberMeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			resources->ApplyResources(this->tableLayoutPanel1, L"tableLayoutPanel1");
			this->tableLayoutPanel1->Controls->Add(this->welcomeLabel, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->loginTextBox, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->loginButton, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->loginLabel, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->passwordLabel, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->passwordTextBox, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->registerButton, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->menuStrip1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->showPasswordCheckBox, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->rememberMeCheckBox, 0, 6);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			// 
			// welcomeLabel
			// 
			resources->ApplyResources(this->welcomeLabel, L"welcomeLabel");
			this->welcomeLabel->Name = L"welcomeLabel";
			// 
			// loginTextBox
			// 
			resources->ApplyResources(this->loginTextBox, L"loginTextBox");
			this->loginTextBox->Name = L"loginTextBox";
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			resources->ApplyResources(this->loginButton, L"loginButton");
			this->loginButton->ForeColor = System::Drawing::Color::White;
			this->loginButton->Name = L"loginButton";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &Authorization::loginButton_Click);
			// 
			// loginLabel
			// 
			resources->ApplyResources(this->loginLabel, L"loginLabel");
			this->loginLabel->Name = L"loginLabel";
			// 
			// passwordLabel
			// 
			resources->ApplyResources(this->passwordLabel, L"passwordLabel");
			this->passwordLabel->Name = L"passwordLabel";
			// 
			// passwordTextBox
			// 
			resources->ApplyResources(this->passwordTextBox, L"passwordTextBox");
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Name = L"label3";
			// 
			// registerButton
			// 
			this->registerButton->BackColor = System::Drawing::Color::MediumAquamarine;
			resources->ApplyResources(this->registerButton, L"registerButton");
			this->registerButton->ForeColor = System::Drawing::Color::White;
			this->registerButton->Name = L"registerButton";
			this->registerButton->UseVisualStyleBackColor = false;
			this->registerButton->Click += gcnew System::EventHandler(this, &Authorization::registerButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->видToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветФонаToolStripMenuItem,
					this->языкПриложенияToolStripMenuItem
			});
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			resources->ApplyResources(this->видToolStripMenuItem, L"видToolStripMenuItem");
			// 
			// цветФонаToolStripMenuItem
			// 
			this->цветФонаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->lightCyanToolStripMenuItem,
					this->lightGoldenYellowToolStripMenuItem, this->lightRedToolStripMenuItem, this->defaultColorToolStripMenuItem
			});
			this->цветФонаToolStripMenuItem->Name = L"цветФонаToolStripMenuItem";
			resources->ApplyResources(this->цветФонаToolStripMenuItem, L"цветФонаToolStripMenuItem");
			// 
			// lightCyanToolStripMenuItem
			// 
			this->lightCyanToolStripMenuItem->Name = L"lightCyanToolStripMenuItem";
			resources->ApplyResources(this->lightCyanToolStripMenuItem, L"lightCyanToolStripMenuItem");
			this->lightCyanToolStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::lightCyanToolStripMenuItem_Click);
			// 
			// lightGoldenYellowToolStripMenuItem
			// 
			this->lightGoldenYellowToolStripMenuItem->Name = L"lightGoldenYellowToolStripMenuItem";
			resources->ApplyResources(this->lightGoldenYellowToolStripMenuItem, L"lightGoldenYellowToolStripMenuItem");
			this->lightGoldenYellowToolStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::lightYellowToolStripMenuItem_Click);
			// 
			// lightRedToolStripMenuItem
			// 
			this->lightRedToolStripMenuItem->Name = L"lightRedToolStripMenuItem";
			resources->ApplyResources(this->lightRedToolStripMenuItem, L"lightRedToolStripMenuItem");
			this->lightRedToolStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::lightRedColorToolStripMenuItem_Click);
			// 
			// defaultColorToolStripMenuItem
			// 
			this->defaultColorToolStripMenuItem->Name = L"defaultColorToolStripMenuItem";
			resources->ApplyResources(this->defaultColorToolStripMenuItem, L"defaultColorToolStripMenuItem");
			this->defaultColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::defaultToolStripMenuItem_Click);
			// 
			// языкПриложенияToolStripMenuItem
			// 
			this->языкПриложенияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->английскийToolStripMenuItem,
					this->беларускаяToolStripMenuItem, this->defaultToolStripMenuItem
			});
			this->языкПриложенияToolStripMenuItem->Name = L"языкПриложенияToolStripMenuItem";
			resources->ApplyResources(this->языкПриложенияToolStripMenuItem, L"языкПриложенияToolStripMenuItem");
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			resources->ApplyResources(this->английскийToolStripMenuItem, L"английскийToolStripMenuItem");
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::английскийToolStripMenuItem_Click);
			// 
			// беларускаяToolStripMenuItem
			// 
			this->беларускаяToolStripMenuItem->Name = L"беларускаяToolStripMenuItem";
			resources->ApplyResources(this->беларускаяToolStripMenuItem, L"беларускаяToolStripMenuItem");
			this->беларускаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::беларускаяToolStripMenuItem_Click);
			// 
			// defaultToolStripMenuItem
			// 
			this->defaultToolStripMenuItem->Name = L"defaultToolStripMenuItem";
			resources->ApplyResources(this->defaultToolStripMenuItem, L"defaultToolStripMenuItem");
			this->defaultToolStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::русскийToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgrammStripMenuItem });
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			resources->ApplyResources(this->справкаToolStripMenuItem, L"справкаToolStripMenuItem");
			// 
			// aboutProgrammStripMenuItem
			// 
			this->aboutProgrammStripMenuItem->Name = L"aboutProgrammStripMenuItem";
			resources->ApplyResources(this->aboutProgrammStripMenuItem, L"aboutProgrammStripMenuItem");
			this->aboutProgrammStripMenuItem->Click += gcnew System::EventHandler(this, &Authorization::aboutProgrammStripMenuItem_Click);
			// 
			// showPasswordCheckBox
			// 
			resources->ApplyResources(this->showPasswordCheckBox, L"showPasswordCheckBox");
			this->showPasswordCheckBox->Name = L"showPasswordCheckBox";
			this->showPasswordCheckBox->UseVisualStyleBackColor = true;
			this->showPasswordCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Authorization::showPasswordCheckBox_CheckedChanged);
			// 
			// rememberMeCheckBox
			// 
			resources->ApplyResources(this->rememberMeCheckBox, L"rememberMeCheckBox");
			this->rememberMeCheckBox->Name = L"rememberMeCheckBox";
			this->rememberMeCheckBox->UseVisualStyleBackColor = true;
			// 
			// Authorization
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tableLayoutPanel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Authorization";
			this->Load += gcnew System::EventHandler(this, &Authorization::Authorization_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: 
	SettingsManager^ settings;
	AboutDialog^ aboutWindow = nullptr;
	bool successLogin = false;

	void ApplyColor(System::Drawing::Color backColor) {
		this->BackColor = backColor;
		settings->setColor(backColor);
	}

	void ApplyLanguage(System::Globalization::CultureInfo^ culture) {
		System::Threading::Thread::CurrentThread->CurrentUICulture = culture;
		System::Threading::Thread::CurrentThread->CurrentCulture = culture;

		this->Controls->Clear();
		InitializeComponent();

		settings->setCulture(culture);
	}

	// Языки
	System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyLanguage(gcnew System::Globalization::CultureInfo("en"));
	}
	System::Void беларускаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyLanguage(gcnew System::Globalization::CultureInfo("be"));
	}
	System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyLanguage(gcnew System::Globalization::CultureInfo("ru"));
	}

	// Цвета
	System::Void lightYellowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(System::Drawing::Color::LightGoldenrodYellow);
	}
	System::Void lightCyanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(System::Drawing::Color::LightCyan);
	}
	System::Void lightRedColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(System::Drawing::Color::MistyRose);
	}
	System::Void defaultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ApplyColor(System::Drawing::SystemColors::Control);
	}

	// Логин и регистрация
	System::Void Authorization_Load(System::Object^ sender, System::EventArgs^ e) {
		UserRecord user;
		user.login = settings->getLogin();
		user.password = settings->getPassword();

		if (!String::IsNullOrEmpty(user.login) && account->signIn(user))
		{
			this->Close();
		}
	}
	System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->loginTextBox->Text;
		String^ password = this->passwordTextBox->Text;

		if (String::IsNullOrWhiteSpace(login) || String::IsNullOrWhiteSpace(password)) {
			fillAll();
			return;
		}

		UserRecord user;
		user.login = login;
		user.password = password;

		if (account->signIn(user)) {
			if (rememberMeCheckBox->Checked)
			{
				settings->setLogin(user.login);
				settings->setPassword(user.password);
			}
			this->Close();
		}
		else {
			this->label3->Visible = true; // Показываем ошибку "Неверный логин или пароль"
		}
	}
	void fillAll()
	{
		String^ lang = settings->getCulture()->TwoLetterISOLanguageName;
		if (lang == "en")
		{
			MessageBox::Show("Пожалуйста, заполните все поля!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (lang == "be")
		{
			MessageBox::Show("Калі ласка, запоўніце ўсе палі!", "Папярэджанне", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			MessageBox::Show("Пожалуйста, заполните все поля!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	void successRegister()
	{
		String^ lang = settings->getCulture()->TwoLetterISOLanguageName;
		if (lang == "en")
		{
			MessageBox::Show("Registration completed successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (lang == "be")
		{
			MessageBox::Show("Рэгістрацыя паспяхова завершана!", "Поспех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Регистрация успешно завершена!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	void failRegister()
	{
		String^ lang = settings->getCulture()->TwoLetterISOLanguageName;
		if (lang == "en")
		{
			MessageBox::Show("A user with this login already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (lang == "be")
		{
			MessageBox::Show("Карыстальнік з такім лагінам ужо існуе!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MessageBox::Show("Пользователь с таким логином уже существует!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label3->Visible = false;
		String^ login = this->loginTextBox->Text;
		String^ password = this->passwordTextBox->Text;

		if (String::IsNullOrWhiteSpace(login) || String::IsNullOrWhiteSpace(password)) {
			fillAll();
			return;
		}

		UserRecord user;
		user.login = login;
		user.password = password;

		// Пытаемся зарегистрировать через менеджер
		if (account->signUp(user)) {
			successRegister();
		}
		else {
			failRegister();
		}
	}
	System::Void aboutWindow_Closed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		aboutWindow = nullptr;
	}

	System::Void aboutProgrammStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (aboutWindow == nullptr || aboutWindow->IsDisposed) {
			aboutWindow = gcnew AboutDialog();
			aboutWindow->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Authorization::aboutWindow_Closed);

			aboutWindow->Show();
		}
		else {
			if (aboutWindow->WindowState == FormWindowState::Minimized) {
				aboutWindow->WindowState = FormWindowState::Normal;
			}
			aboutWindow->Activate();
		}
	}
	System::Void showPasswordCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->passwordTextBox->UseSystemPasswordChar = !showPasswordCheckBox->Checked;
	}
};
}

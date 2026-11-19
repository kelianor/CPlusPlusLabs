#pragma once

namespace Lab252 {

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
			this->studentsTable->RowCount = 10;
			this->notPassedTable->RowCount = 1;
			this->avgMarkTable->RowCount = 1;
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
	private: System::Windows::Forms::DataGridView^ studentsTable;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Student;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Math;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Physics;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ History;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Chemistry;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Average;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Min;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ notPassed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProcentFromMax;
	private: System::Windows::Forms::DataGridView^ notPassedTable;





	private: System::Windows::Forms::Button^ writeButton;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ avgMarkTable;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MathsNotPassed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PhysicsNotPassed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HistoryNotPassed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ChemistryNotPassed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->studentsTable = (gcnew System::Windows::Forms::DataGridView());
			this->Student = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Math = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Physics = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->History = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Chemistry = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Average = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Min = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->notPassed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProcentFromMax = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->notPassedTable = (gcnew System::Windows::Forms::DataGridView());
			this->MathsNotPassed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhysicsNotPassed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HistoryNotPassed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ChemistryNotPassed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->writeButton = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->avgMarkTable = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentsTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notPassedTable))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgMarkTable))->BeginInit();
			this->SuspendLayout();
			// 
			// studentsTable
			// 
			this->studentsTable->AllowUserToAddRows = false;
			this->studentsTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->studentsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->studentsTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Student,
					this->Math, this->Physics, this->History, this->Chemistry, this->Average, this->Min, this->notPassed, this->ProcentFromMax
			});
			this->studentsTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->studentsTable->Location = System::Drawing::Point(3, 3);
			this->studentsTable->Name = L"studentsTable";
			this->studentsTable->Size = System::Drawing::Size(835, 328);
			this->studentsTable->TabIndex = 0;
			this->studentsTable->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::studentsTable_CellValueChanged);
			// 
			// Student
			// 
			this->Student->HeaderText = L"ФИО Студента";
			this->Student->Name = L"Student";
			// 
			// Math
			// 
			this->Math->HeaderText = L"Математика";
			this->Math->Name = L"Math";
			// 
			// Physics
			// 
			this->Physics->HeaderText = L"Физика";
			this->Physics->Name = L"Physics";
			// 
			// History
			// 
			this->History->HeaderText = L"История";
			this->History->Name = L"History";
			// 
			// Chemistry
			// 
			this->Chemistry->HeaderText = L"Химия";
			this->Chemistry->Name = L"Chemistry";
			// 
			// Average
			// 
			this->Average->HeaderText = L"Ср. балл";
			this->Average->Name = L"Average";
			this->Average->ReadOnly = true;
			// 
			// Min
			// 
			this->Min->HeaderText = L"Минимальная оценка";
			this->Min->Name = L"Min";
			this->Min->ReadOnly = true;
			// 
			// notPassed
			// 
			this->notPassed->HeaderText = L"Не сдано";
			this->notPassed->Name = L"notPassed";
			this->notPassed->ReadOnly = true;
			// 
			// ProcentFromMax
			// 
			this->ProcentFromMax->HeaderText = L"% от макс. баллов";
			this->ProcentFromMax->Name = L"ProcentFromMax";
			this->ProcentFromMax->ReadOnly = true;
			// 
			// notPassedTable
			// 
			this->notPassedTable->AllowUserToAddRows = false;
			this->notPassedTable->AllowUserToDeleteRows = false;
			this->notPassedTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->notPassedTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->notPassedTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->MathsNotPassed,
					this->PhysicsNotPassed, this->HistoryNotPassed, this->ChemistryNotPassed
			});
			this->notPassedTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->notPassedTable->Location = System::Drawing::Point(3, 3);
			this->notPassedTable->Name = L"notPassedTable";
			this->notPassedTable->ReadOnly = true;
			this->notPassedTable->Size = System::Drawing::Size(841, 364);
			this->notPassedTable->TabIndex = 1;
			// 
			// MathsNotPassed
			// 
			this->MathsNotPassed->HeaderText = L"Математика";
			this->MathsNotPassed->Name = L"MathsNotPassed";
			this->MathsNotPassed->ReadOnly = true;
			// 
			// PhysicsNotPassed
			// 
			this->PhysicsNotPassed->HeaderText = L"Физика";
			this->PhysicsNotPassed->Name = L"PhysicsNotPassed";
			this->PhysicsNotPassed->ReadOnly = true;
			// 
			// HistoryNotPassed
			// 
			this->HistoryNotPassed->HeaderText = L"История";
			this->HistoryNotPassed->Name = L"HistoryNotPassed";
			this->HistoryNotPassed->ReadOnly = true;
			// 
			// ChemistryNotPassed
			// 
			this->ChemistryNotPassed->HeaderText = L"Химия";
			this->ChemistryNotPassed->Name = L"ChemistryNotPassed";
			this->ChemistryNotPassed->ReadOnly = true;
			// 
			// writeButton
			// 
			this->writeButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->writeButton->Location = System::Drawing::Point(3, 338);
			this->writeButton->Name = L"writeButton";
			this->writeButton->Size = System::Drawing::Size(835, 23);
			this->writeButton->TabIndex = 2;
			this->writeButton->Text = L"Записать в MS Word";
			this->writeButton->UseVisualStyleBackColor = true;
			this->writeButton->Click += gcnew System::EventHandler(this, &MyForm::writeButton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(855, 396);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(847, 370);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Таблица студентов";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->studentsTable, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->writeButton, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(841, 364);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->notPassedTable);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(847, 370);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Не сдало";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(847, 370);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Диаграмма";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(841, 364);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->avgMarkTable);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(847, 370);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Средний балл по предмету";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// avgMarkTable
			// 
			this->avgMarkTable->AllowUserToAddRows = false;
			this->avgMarkTable->AllowUserToDeleteRows = false;
			this->avgMarkTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->avgMarkTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->avgMarkTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->avgMarkTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->avgMarkTable->Location = System::Drawing::Point(3, 3);
			this->avgMarkTable->Name = L"avgMarkTable";
			this->avgMarkTable->ReadOnly = true;
			this->avgMarkTable->Size = System::Drawing::Size(841, 364);
			this->avgMarkTable->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Математика";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Физика";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"История";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Химия";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 396);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentsTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notPassedTable))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgMarkTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void updateNotPassedTable()
		{
			// Обновляет таблицу. Столбцы (Математика, Физика и так далее) ниже количество тех кто не сдал. Объект носит имя notPassedTable
			try
			{

				for (int subject = 0; subject < 4; subject++)
				{
					int notPassed = 0;
					for (int row = 0; row < 10; row++)
					{
						System::Object^ val = studentsTable->Rows[row]->Cells[subject+1]->Value;
						if (val == nullptr) continue;

						System::String^ strVal = val->ToString()->Trim();
						if (strVal == "н/я" || strVal == "") continue;

						int mark = System::Convert::ToInt32(strVal);
						if (mark < 3) notPassed++;
					}
					notPassedTable->Rows[0]->Cells[subject]->Value = notPassed.ToString();
				}
			}
			catch (System::Exception^ ex) {
			}

		}

		void updateMarksChart()
		{
			try
			{
				if (chart1->Series->Count == 0) {
					chart1->Series->Add("Средний балл");
				}

				chart1->Series[0]->Points->Clear();
				chart1->Series[0]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
				chart1->Series[0]->IsValueShownAsLabel = true;

				for (int row = 0; row < studentsTable->Rows->Count; row++)
				{
					System::Object^ nameObj = studentsTable->Rows[row]->Cells[0]->Value;
					System::String^ studentName = (nameObj != nullptr) ? nameObj->ToString()->Trim() : "";

					if (studentName == "") {
						studentName = "Студент " + (row + 1).ToString();
					}

					System::Object^ avgObj = studentsTable->Rows[row]->Cells[5]->Value;
					if (avgObj == nullptr) continue;

					System::String^ avgStr = avgObj->ToString()->Trim();

					if (avgStr == "" || avgStr == "-") continue;
					double avgValue = 0.0;
					if (System::Double::TryParse(avgStr, avgValue)) {
						chart1->Series[0]->Points->AddXY(studentName, avgValue);
					}
				}

				if (chart1->ChartAreas->Count > 0) {
					chart1->ChartAreas[0]->AxisY->Minimum = 0;
					chart1->ChartAreas[0]->AxisY->Maximum = 10;
					chart1->ChartAreas[0]->AxisY->Interval = 1;
					chart1->ChartAreas[0]->AxisX->LabelStyle->Interval = 1;
					chart1->ChartAreas[0]->AxisX->LabelStyle->Angle = -45;
				}

				chart1->Invalidate();
			}
			catch (System::Exception^ ex)
			{
			}
		}


		void updateAverageMarksTable()
		{
			// Обновляет таблицу средних баллов по группе. Столбцы (Математика, Физика и так далее) ниже средние баллы по группе. Объект носит имя avgMarksTable
			try
			{

				for (int subject = 0; subject < 4; subject++)
				{
					int count = 0;
					double sum = 0.0;
					for (int row = 0; row < 10; row++)
					{
						System::Object^ val = studentsTable->Rows[row]->Cells[subject + 1]->Value;
						if (val == nullptr) continue;

						System::String^ strVal = val->ToString()->Trim();
						if (strVal == "н/я" || strVal == "") continue;

						sum += System::Convert::ToInt32(strVal);
						count++;
						
					}
					avgMarkTable->Rows[0]->Cells[subject]->Value = (sum / (double) count).ToString("F1");
				}
			}
			catch (System::Exception^ ex) {
			}
		}

		void recalculateRowCalculations(int rowIndex)
		{
			// Временно отключаем событие, чтобы избежать бесконечного цикла
			this->studentsTable->CellValueChanged -= gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::studentsTable_CellValueChanged);

			try {
				float sum = 0;
				int validMarksCount = 0;
				int minMark = 999;
				int failedCount = 0;

				for (int col = 1; col <= 4; col++) {
					System::Object^ val = studentsTable->Rows[rowIndex]->Cells[col]->Value;
					if (val == nullptr) continue;

					System::String^ strVal = val->ToString()->Trim();
					if (strVal == "н/я" || strVal == "") continue;

					int mark = System::Convert::ToInt32(strVal);
					sum += mark;
					validMarksCount++;

					if (mark < minMark) minMark = mark;
					if (mark < 3) failedCount++;
				}

				if (validMarksCount > 0) {
					float avg = sum / validMarksCount;
					float percent = (sum / (10.0 * 4.0)) * 100.0;

					studentsTable->Rows[rowIndex]->Cells[5]->Value = avg.ToString("F1");
					studentsTable->Rows[rowIndex]->Cells[6]->Value = minMark.ToString();
					studentsTable->Rows[rowIndex]->Cells[7]->Value = failedCount.ToString();
					studentsTable->Rows[rowIndex]->Cells[8]->Value = percent.ToString("F0") + "%";
				}
				else {
					studentsTable->Rows[rowIndex]->Cells[5]->Value = "-";
					studentsTable->Rows[rowIndex]->Cells[6]->Value = "-";
					studentsTable->Rows[rowIndex]->Cells[7]->Value = "0";
					studentsTable->Rows[rowIndex]->Cells[8]->Value = "0%";
				}
			}
			catch (System::Exception^ ex) {
			}
			this->studentsTable->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::studentsTable_CellValueChanged);
		}

private: System::Void studentsTable_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex < 0 || e->ColumnIndex < 0) return;
	if (e->ColumnIndex >= 1 && e->ColumnIndex <= 4) {

		System::Object^ cellValue = studentsTable->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
		if (cellValue == nullptr) return;

		System::String^ text = cellValue->ToString()->Trim();

		int parsedMark = 0;
		bool isValidInt = System::Int32::TryParse(text, parsedMark);

		if (!isValidInt && text != "н/я" && text != "") {
			System::Windows::Forms::MessageBox::Show(
				"Ошибка! Допускаются только целые числа или 'н/я'.",
				"Некорректный ввод",
				System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Error
			);

			this->studentsTable->CellValueChanged -= gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::studentsTable_CellValueChanged);
			studentsTable->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "";
			this->studentsTable->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::studentsTable_CellValueChanged);

			return;
		}

		recalculateRowCalculations(e->RowIndex);
		updateNotPassedTable();
		updateMarksChart();
		updateAverageMarksTable();
	}
}
private: System::Void writeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int rows = studentsTable->Rows->Count;
	int columns = studentsTable->Columns->Count;
	auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
	word2->Visible = true;
	auto t = Type::Missing;
	auto document2 = word2->Documents->Add(t, t, t, t);
	word2->Selection->TypeText("\t\t\t\tДанные студентов");
	System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
	System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
	word2->ActiveDocument->Tables->Add(word2->Selection->Range, rows + 1, columns, t1, t2);
	for (int j = 0; j < columns; j++)
	{
		String^ headerText = studentsTable->Columns[j]->HeaderText;
		word2->ActiveDocument->Tables[1]->Cell(1, j + 1)->Range->Text = headerText;
	}
	for (int i = 0; i < rows; i++)
	{
		try
		{
			for (int j = 0; j < columns; j++)
			{
				String^ OrCount = Convert::ToString(studentsTable->Rows[i]->Cells[j]->Value);
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
	catch (System::Runtime::InteropServices::COMException^ ex)
	{
		MessageBox::Show("Не удалось перезаписать файл.(Закройте пожалуйста файл во всех приложениях)", "Ошибка файла");
	}
}
};
}

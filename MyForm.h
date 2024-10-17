#pragma once
#define _USE_MATH_DEFINES
namespace ITsignal {

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

			Default();
			textBox_A1->Text = Convert::ToString(A1);
			textBox_A2->Text = Convert::ToString(A2);
			textBox_A3->Text = Convert::ToString(A3);

			textBox_f1->Text = Convert::ToString(f1);
			textBox_f2->Text = Convert::ToString(f2);
			textBox_f3->Text = Convert::ToString(f3);

			textBox_faza1->Text = Convert::ToString(faza1);
			textBox_faza2->Text = Convert::ToString(faza2);
			textBox_faza3->Text = Convert::ToString(faza3);

			textBox_N->Text = Convert::ToString(N);
			textBox_chastDiskret->Text = Convert::ToString(chastDiskret);

			textBox_alf->Text = Convert::ToString(alf);
			textBox_gumma->Text = Convert::ToString(gumma);
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
	private: System::Windows::Forms::ToolStripMenuItem^ startToolStripMenuItem;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_signalEnter;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_signalExit;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_spectr;


	private: System::Windows::Forms::TextBox^ textBox_f1;
	private: System::Windows::Forms::TextBox^ textBox_f2;
	private: System::Windows::Forms::TextBox^ textBox_f3;
	private: System::Windows::Forms::TextBox^ textBox_faza1;
	private: System::Windows::Forms::TextBox^ textBox_faza2;
	private: System::Windows::Forms::TextBox^ textBox_faza3;
	private: System::Windows::Forms::TextBox^ textBox_A1;
	private: System::Windows::Forms::TextBox^ textBox_A2;
	private: System::Windows::Forms::TextBox^ textBox_A3;










	private: System::Windows::Forms::Label^ label_A1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label_faza3;

	private: System::Windows::Forms::Label^ label_faza2;

	private: System::Windows::Forms::Label^ label_faza1;

	private: System::Windows::Forms::Label^ label_f3;

	private: System::Windows::Forms::Label^ label_f2;

	private: System::Windows::Forms::Label^ label_f1;

	private: System::Windows::Forms::Label^ label_A3;

	private: System::Windows::Forms::Label^ label_A2;
	private: System::Windows::Forms::TextBox^ textBox_chastDiskret;
	private: System::Windows::Forms::Label^ label_chastDiskret;
	private: System::Windows::Forms::TextBox^ textBox_N;
	private: System::Windows::Forms::Label^ label_N;


	private: System::Windows::Forms::TextBox^ textBox_alf;





	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox_gumma;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart_signalEnter = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_signalExit = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart_spectr = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox_f1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_f2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_f3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_faza1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_faza2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_faza3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_A1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_A2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_A3 = (gcnew System::Windows::Forms::TextBox());
			this->label_A1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label_faza3 = (gcnew System::Windows::Forms::Label());
			this->label_faza2 = (gcnew System::Windows::Forms::Label());
			this->label_faza1 = (gcnew System::Windows::Forms::Label());
			this->label_f3 = (gcnew System::Windows::Forms::Label());
			this->label_f2 = (gcnew System::Windows::Forms::Label());
			this->label_f1 = (gcnew System::Windows::Forms::Label());
			this->label_A3 = (gcnew System::Windows::Forms::Label());
			this->label_A2 = (gcnew System::Windows::Forms::Label());
			this->textBox_chastDiskret = (gcnew System::Windows::Forms::TextBox());
			this->label_chastDiskret = (gcnew System::Windows::Forms::Label());
			this->textBox_N = (gcnew System::Windows::Forms::TextBox());
			this->label_N = (gcnew System::Windows::Forms::Label());
			this->textBox_alf = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_gumma = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_signalEnter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_signalExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_spectr))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->startToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1462, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(62, 26);
			this->startToolStripMenuItem->Text = L"Start";
			this->startToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::startToolStripMenuItem_Click);
			// 
			// chart_signalEnter
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart_signalEnter->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart_signalEnter->Legends->Add(legend1);
			this->chart_signalEnter->Location = System::Drawing::Point(614, 31);
			this->chart_signalEnter->Name = L"chart_signalEnter";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			this->chart_signalEnter->Series->Add(series1);
			this->chart_signalEnter->Series->Add(series2);
			this->chart_signalEnter->Size = System::Drawing::Size(814, 259);
			this->chart_signalEnter->TabIndex = 1;
			this->chart_signalEnter->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Входящий сигнал";
			this->chart_signalEnter->Titles->Add(title1);
			// 
			// chart_signalExit
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_signalExit->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart_signalExit->Legends->Add(legend2);
			this->chart_signalExit->Location = System::Drawing::Point(614, 567);
			this->chart_signalExit->Name = L"chart_signalExit";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series2";
			this->chart_signalExit->Series->Add(series3);
			this->chart_signalExit->Series->Add(series4);
			this->chart_signalExit->Size = System::Drawing::Size(814, 268);
			this->chart_signalExit->TabIndex = 2;
			this->chart_signalExit->Text = L"chart1";
			title2->Name = L"Title1";
			title2->Text = L"Восстановленный сигнал";
			this->chart_signalExit->Titles->Add(title2);
			// 
			// chart_spectr
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart_spectr->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart_spectr->Legends->Add(legend3);
			this->chart_spectr->Location = System::Drawing::Point(614, 296);
			this->chart_spectr->Name = L"chart_spectr";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"Series2";
			this->chart_spectr->Series->Add(series5);
			this->chart_spectr->Series->Add(series6);
			this->chart_spectr->Size = System::Drawing::Size(814, 265);
			this->chart_spectr->TabIndex = 3;
			this->chart_spectr->Text = L"chart1";
			title3->Name = L"Title1";
			title3->Text = L"Спектр";
			this->chart_spectr->Titles->Add(title3);
			// 
			// textBox_f1
			// 
			this->textBox_f1->Location = System::Drawing::Point(233, 40);
			this->textBox_f1->Name = L"textBox_f1";
			this->textBox_f1->Size = System::Drawing::Size(100, 26);
			this->textBox_f1->TabIndex = 4;
			// 
			// textBox_f2
			// 
			this->textBox_f2->Location = System::Drawing::Point(233, 95);
			this->textBox_f2->Name = L"textBox_f2";
			this->textBox_f2->Size = System::Drawing::Size(100, 26);
			this->textBox_f2->TabIndex = 5;
			// 
			// textBox_f3
			// 
			this->textBox_f3->Location = System::Drawing::Point(233, 150);
			this->textBox_f3->Name = L"textBox_f3";
			this->textBox_f3->Size = System::Drawing::Size(100, 26);
			this->textBox_f3->TabIndex = 6;
			// 
			// textBox_faza1
			// 
			this->textBox_faza1->Location = System::Drawing::Point(404, 40);
			this->textBox_faza1->Name = L"textBox_faza1";
			this->textBox_faza1->Size = System::Drawing::Size(100, 26);
			this->textBox_faza1->TabIndex = 7;
			// 
			// textBox_faza2
			// 
			this->textBox_faza2->Location = System::Drawing::Point(404, 95);
			this->textBox_faza2->Name = L"textBox_faza2";
			this->textBox_faza2->Size = System::Drawing::Size(100, 26);
			this->textBox_faza2->TabIndex = 8;
			// 
			// textBox_faza3
			// 
			this->textBox_faza3->Location = System::Drawing::Point(404, 147);
			this->textBox_faza3->Name = L"textBox_faza3";
			this->textBox_faza3->Size = System::Drawing::Size(100, 26);
			this->textBox_faza3->TabIndex = 9;
			// 
			// textBox_A1
			// 
			this->textBox_A1->Location = System::Drawing::Point(64, 40);
			this->textBox_A1->Name = L"textBox_A1";
			this->textBox_A1->Size = System::Drawing::Size(100, 26);
			this->textBox_A1->TabIndex = 10;
			// 
			// textBox_A2
			// 
			this->textBox_A2->Location = System::Drawing::Point(65, 95);
			this->textBox_A2->Name = L"textBox_A2";
			this->textBox_A2->Size = System::Drawing::Size(100, 26);
			this->textBox_A2->TabIndex = 11;
			// 
			// textBox_A3
			// 
			this->textBox_A3->Location = System::Drawing::Point(64, 150);
			this->textBox_A3->Name = L"textBox_A3";
			this->textBox_A3->Size = System::Drawing::Size(100, 26);
			this->textBox_A3->TabIndex = 12;
			// 
			// label_A1
			// 
			this->label_A1->AutoSize = true;
			this->label_A1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_A1->Location = System::Drawing::Point(26, 43);
			this->label_A1->Name = L"label_A1";
			this->label_A1->Size = System::Drawing::Size(32, 19);
			this->label_A1->TabIndex = 13;
			this->label_A1->Text = L"A1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label_faza3);
			this->groupBox1->Controls->Add(this->label_faza2);
			this->groupBox1->Controls->Add(this->label_faza1);
			this->groupBox1->Controls->Add(this->label_f3);
			this->groupBox1->Controls->Add(this->label_f2);
			this->groupBox1->Controls->Add(this->label_f1);
			this->groupBox1->Controls->Add(this->label_A3);
			this->groupBox1->Controls->Add(this->label_A2);
			this->groupBox1->Controls->Add(this->textBox_faza2);
			this->groupBox1->Controls->Add(this->label_A1);
			this->groupBox1->Controls->Add(this->textBox_f1);
			this->groupBox1->Controls->Add(this->textBox_A3);
			this->groupBox1->Controls->Add(this->textBox_f2);
			this->groupBox1->Controls->Add(this->textBox_A2);
			this->groupBox1->Controls->Add(this->textBox_f3);
			this->groupBox1->Controls->Add(this->textBox_A1);
			this->groupBox1->Controls->Add(this->textBox_faza1);
			this->groupBox1->Controls->Add(this->textBox_faza3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(31, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(549, 202);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры входящего сигнала";
			// 
			// label_faza3
			// 
			this->label_faza3->AutoSize = true;
			this->label_faza3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_faza3->Location = System::Drawing::Point(355, 150);
			this->label_faza3->Name = L"label_faza3";
			this->label_faza3->Size = System::Drawing::Size(43, 19);
			this->label_faza3->TabIndex = 21;
			this->label_faza3->Text = L" φ 3";
			// 
			// label_faza2
			// 
			this->label_faza2->AutoSize = true;
			this->label_faza2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_faza2->Location = System::Drawing::Point(355, 98);
			this->label_faza2->Name = L"label_faza2";
			this->label_faza2->Size = System::Drawing::Size(43, 19);
			this->label_faza2->TabIndex = 20;
			this->label_faza2->Text = L" φ 2";
			// 
			// label_faza1
			// 
			this->label_faza1->AutoSize = true;
			this->label_faza1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_faza1->Location = System::Drawing::Point(355, 43);
			this->label_faza1->Name = L"label_faza1";
			this->label_faza1->Size = System::Drawing::Size(43, 19);
			this->label_faza1->TabIndex = 19;
			this->label_faza1->Text = L" φ 1";
			// 
			// label_f3
			// 
			this->label_f3->AutoSize = true;
			this->label_f3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_f3->Location = System::Drawing::Point(200, 153);
			this->label_f3->Name = L"label_f3";
			this->label_f3->Size = System::Drawing::Size(27, 19);
			this->label_f3->TabIndex = 18;
			this->label_f3->Text = L"F3";
			// 
			// label_f2
			// 
			this->label_f2->AutoSize = true;
			this->label_f2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_f2->Location = System::Drawing::Point(200, 98);
			this->label_f2->Name = L"label_f2";
			this->label_f2->Size = System::Drawing::Size(27, 19);
			this->label_f2->TabIndex = 17;
			this->label_f2->Text = L"F2";
			// 
			// label_f1
			// 
			this->label_f1->AutoSize = true;
			this->label_f1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_f1->Location = System::Drawing::Point(200, 43);
			this->label_f1->Name = L"label_f1";
			this->label_f1->Size = System::Drawing::Size(27, 19);
			this->label_f1->TabIndex = 16;
			this->label_f1->Text = L"F1";
			// 
			// label_A3
			// 
			this->label_A3->AutoSize = true;
			this->label_A3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_A3->Location = System::Drawing::Point(26, 153);
			this->label_A3->Name = L"label_A3";
			this->label_A3->Size = System::Drawing::Size(32, 19);
			this->label_A3->TabIndex = 15;
			this->label_A3->Text = L"A3";
			// 
			// label_A2
			// 
			this->label_A2->AutoSize = true;
			this->label_A2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_A2->Location = System::Drawing::Point(26, 98);
			this->label_A2->Name = L"label_A2";
			this->label_A2->Size = System::Drawing::Size(32, 19);
			this->label_A2->TabIndex = 14;
			this->label_A2->Text = L"A2";
			// 
			// textBox_chastDiskret
			// 
			this->textBox_chastDiskret->Location = System::Drawing::Point(96, 336);
			this->textBox_chastDiskret->Name = L"textBox_chastDiskret";
			this->textBox_chastDiskret->Size = System::Drawing::Size(100, 22);
			this->textBox_chastDiskret->TabIndex = 15;
			// 
			// label_chastDiskret
			// 
			this->label_chastDiskret->AutoSize = true;
			this->label_chastDiskret->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_chastDiskret->Location = System::Drawing::Point(62, 304);
			this->label_chastDiskret->Name = L"label_chastDiskret";
			this->label_chastDiskret->Size = System::Drawing::Size(196, 18);
			this->label_chastDiskret->TabIndex = 16;
			this->label_chastDiskret->Text = L"Частота дискретизации";
			// 
			// textBox_N
			// 
			this->textBox_N->Location = System::Drawing::Point(390, 336);
			this->textBox_N->Name = L"textBox_N";
			this->textBox_N->Size = System::Drawing::Size(100, 22);
			this->textBox_N->TabIndex = 17;
			// 
			// label_N
			// 
			this->label_N->AutoSize = true;
			this->label_N->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_N->Location = System::Drawing::Point(346, 304);
			this->label_N->Name = L"label_N";
			this->label_N->Size = System::Drawing::Size(189, 18);
			this->label_N->TabIndex = 18;
			this->label_N->Text = L"Количестов отсчётов N";
			// 
			// textBox_alf
			// 
			this->textBox_alf->Location = System::Drawing::Point(95, 422);
			this->textBox_alf->Name = L"textBox_alf";
			this->textBox_alf->Size = System::Drawing::Size(100, 22);
			this->textBox_alf->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(77, 391);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 18);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Процент шума α ";
			// 
			// textBox_gumma
			// 
			this->textBox_gumma->Location = System::Drawing::Point(390, 422);
			this->textBox_gumma->Name = L"textBox_gumma";
			this->textBox_gumma->Size = System::Drawing::Size(100, 22);
			this->textBox_gumma->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(376, 391);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 18);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Доля энергии γ ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1462, 847);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_gumma);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_alf);
			this->Controls->Add(this->label_N);
			this->Controls->Add(this->textBox_N);
			this->Controls->Add(this->label_chastDiskret);
			this->Controls->Add(this->textBox_chastDiskret);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart_spectr);
			this->Controls->Add(this->chart_signalExit);
			this->Controls->Add(this->chart_signalEnter);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_signalEnter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_signalExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_spectr))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void startToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

		   double A1, A2, A3, f1, f2, f3, faza1, faza2, faza3, chastDiskret, alf, gumma;
		   int N;
		   double* signalEnter;
		   double* signalRecover;
		   double* spectr;
		   double* freq;
		   double* magnitude;
		   double* shum;
		   double* ni;
		   double* n1;
		   void Function();
		   double SumN12();
		   void Default();
		   
		  



};

}

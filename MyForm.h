#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;


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
			menuStrip1->Hide();
			panel2->Hide();
			array<String^>^ lines = File::ReadAllLines("BaseProd.txt");
			for each (String ^ str in lines)
			{
				DataGridViewRow^ row = gcnew DataGridViewRow();
				row->CreateCells(dataGridView2);
				for (int i = 0; i < str->Split(L' ')->Length; ++i)
					row->Cells[i]->Value = str->Split(L' ')[i];
				dataGridView2->Rows->Add(row);

			}
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьБазуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьБазуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ дневнаяПрибыльToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;



	private: System::Windows::Forms::DataGridView^ dataGridView2;






	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;

















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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьБазуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьБазуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->дневнаяПрибыльToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1118, 634);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(133, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(738, 431);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(254, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 80);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(252, 223);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(238, 41);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(252, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(238, 41);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пароль";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(247, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->менюToolStripMenuItem,
					this->справкаToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1118, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->открытьБазуToolStripMenuItem,
					this->сохранитьБазуToolStripMenuItem, this->дневнаяПрибыльToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// открытьБазуToolStripMenuItem
			// 
			this->открытьБазуToolStripMenuItem->Name = L"открытьБазуToolStripMenuItem";
			this->открытьБазуToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->открытьБазуToolStripMenuItem->Text = L"Открыть базу ";
			this->открытьБазуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ОткрытьБазуToolStripMenuItem_Click);
			// 
			// сохранитьБазуToolStripMenuItem
			// 
			this->сохранитьБазуToolStripMenuItem->Name = L"сохранитьБазуToolStripMenuItem";
			this->сохранитьБазуToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->сохранитьБазуToolStripMenuItem->Text = L"Сохранить базу";
			this->сохранитьБазуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::СохранитьБазуToolStripMenuItem_Click);
			// 
			// дневнаяПрибыльToolStripMenuItem
			// 
			this->дневнаяПрибыльToolStripMenuItem->Name = L"дневнаяПрибыльToolStripMenuItem";
			this->дневнаяПрибыльToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->дневнаяПрибыльToolStripMenuItem->Text = L"Дневная прибыль";
			this->дневнаяПрибыльToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ДневнаяПрибыльToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ВыходToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Silver;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1025, 488);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Дата";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Прибыль";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->dataGridView2);
			this->groupBox4->Controls->Add(this->dateTimePicker3);
			this->groupBox4->Location = System::Drawing::Point(3, 31);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1022, 723);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L" ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(731, 129);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(200, 22);
			this->textBox7->TabIndex = 15;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(731, 216);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(200, 22);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox6_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Игрушки", L"Обувь", L"Вещи(девочка_до_6_лет)",
					L"Вещи(мальчик_до_6_лет)", L"Вещи(девочка_до_12_лет)", L"Вещи(мальчик_до_12_лет)"
			});
			this->comboBox1->Location = System::Drawing::Point(731, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 24);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(731, 85);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox5_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(947, 40);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 200);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Добавить ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column3,
					this->Column4, this->Column7, this->Column5, this->Column6
			});
			this->dataGridView2->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->Location = System::Drawing::Point(6, 21);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(713, 293);
			this->dataGridView2->TabIndex = 8;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DataGridView2_CellContentClick);
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Тип товара";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Наименование ";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Количество";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Дата завоза";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Стоимость";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(731, 169);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker3->TabIndex = 9;
			this->dateTimePicker3->ValueChanged += gcnew System::EventHandler(this, &MyForm::DateTimePicker3_ValueChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 58);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(134, 20);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::DateTimePicker1_ValueChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox3_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Silver;
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(495, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(355, 133);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L" ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Общая прибыль";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(164, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 22);
			this->textBox4->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1118, 634);
			this->panel2->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(280, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(811, 134);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Добро пожаловать Татьяна!\r\nХорошего трудового дня!\r\n";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::Label5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1118, 662);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridView1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void СохранитьБазуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	/*Вход*/private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*Владелец*/if (textBox1->Text == "admin" && textBox2->Text == "admin")
		{
			panel2->Show();
			menuStrip1->Show();
			textBox1->Text = "";
			textBox2->Text = "";
			groupBox1->Hide();
			panel1->Hide();
			groupBox2->Hide();
			groupBox4->Hide();
			dataGridView1->Hide();
			/*asdasd*/
		}
		else 
			if
		/*Работники*/ (textBox1->Text == "user1" && textBox2->Text == "2222")
		{   
			panel2->Hide();
			menuStrip1->Show();
			textBox1->Text = "";
			textBox2->Text = "";
			groupBox1->Hide();
			panel1->Hide();
			groupBox2->Hide();
			groupBox4->Hide();
			dataGridView1->Hide();
			bool ison = true;
		}
		else
		{ MessageBox::Show("you print incorect data"); }
	}
	/*Выход*/private: System::Void ВыходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panel2->Hide();
		menuStrip1->Hide();
		groupBox1->Show();
		panel1->Show();
	}

	/*Таблица прибыли*/private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{

	}

	/*Добавление записи дневная прибыль*/private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*добавление даты*/
		int n = dataGridView1->Rows->Add();
		dataGridView1->Rows[n]->Cells[0]->Value = dateTimePicker1->Value.ToString("dd.MM.yyyy");

		/*Добавление прибыли*/
		String^ profit = textBox3->Text;
		dataGridView1->Rows[n]->Cells[1]->Value = textBox3->Text;

		/*Сохранение*/
		{
			array<String^>^ lines = gcnew array<String^>(dataGridView1->RowCount - (dataGridView1->AllowUserToAddRows ? 1 : 0)); // проверка тут
			array<String^>^ values = gcnew array<String^>(dataGridView1->ColumnCount);
			for (int i = 0; i < lines->Length; ++i) //количество строк указывает размер массива
			{
				for (int j = 0; j < dataGridView1->ColumnCount; ++j)
					values[j] = (String^)dataGridView1->Rows[i]->Cells[j]->Value;
				lines[i] = String::Join(L" ", values);
			}
			IO::File::WriteAllLines("Profit1.txt", lines, System::Text::Encoding::UTF8);
		}
		
		/*Подсчет суммы*/
		{   double summ = 0;
		
		for (int i = 0; i < dataGridView1->RowCount; i++){
			summ +=  Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}
		textBox4->Text = summ.ToString();
		}
	}

	/*Открыти Дневная Прибыль*/ private: System::Void ДневнаяПрибыльToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{

		groupBox4->Hide();
		groupBox2->Show();
		dataGridView1->Show();

		array<String^>^ lines = File::ReadAllLines("Profit1.txt");
		for each (String ^ str in lines)
		{
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);
			for (int i = 0; i < str->Split(L' ')->Length; i++)
				row->Cells[i]->Value = str->Split(L' ')[i];
			dataGridView1->Rows->Add(row);
		}

		{   double summ = 0;

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			summ += Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}
		textBox4->Text = summ.ToString();
		}

	}


	/*Открыть базу*/private: System::Void ОткрытьБазуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panel2->Hide();
		groupBox2->Hide();
		groupBox4->Show();
		dataGridView2->Show();
		dateTimePicker3->Show();
	}


	/*База товара*/private: System::Void DataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		panel2->Hide();
		/*добавление даты*/
		{
			int n = dataGridView2->Rows->Add();
			//dataGridView2->Rows[n]->Cells[4]->Value = dateTimePicker3->Value.ToString("dd.MM.yyyy");

			/*Сохранение*/
			{
				array<String^>^ lines = gcnew array<String^>(dataGridView1->RowCount - (dataGridView1->AllowUserToAddRows ? 1 : 0)); // проверка тут
				array<String^>^ values = gcnew array<String^>(dataGridView1->ColumnCount);
				for (int i = 0; i < lines->Length; ++i) //количество строк указывает размер массива
				{
					for (int j = 0; j < dataGridView2->ColumnCount; ++j)
						values[j] = (String^)dataGridView2->Rows[i]->Cells[j]->Value;
					lines[i] = String::Join(L" ", values);
				}
				IO::File::WriteAllLines("BaseProd.txt", lines, System::Text::Encoding::UTF8);
			}
		}
	}

	/*Добавление запсиси и схоранение базы*/ private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*добавление даты*/
		{
			int n = dataGridView2->Rows->Add();
			dataGridView2->Rows[n]->Cells[3]->Value = dateTimePicker3->Value.ToString("dd.MM.yyyy");
			dataGridView2->Rows[n]->Cells[1]->Value = textBox5->Text;
			dataGridView2->Rows[n]->Cells[0]->Value = comboBox1->Text;
			dataGridView2->Rows[n]->Cells[2]->Value = textBox7->Text;
			dataGridView2->Rows[n]->Cells[4]->Value = textBox6->Text;

			/*Сохранение*/
			{
				array<String^>^ lines = gcnew array<String^>(dataGridView2->RowCount - (dataGridView2->AllowUserToAddRows ? 1 : 0)); // проверка тут
				array<String^>^ values = gcnew array<String^>(dataGridView2->ColumnCount);
				for (int i = 0; i < lines->Length; ++i) //количество строк указывает размер массива
				{
					for (int j = 0; j < dataGridView2->ColumnCount; ++j)
						values[j] = (String^)dataGridView2->Rows[i]->Cells[j]->Value;
					lines[i] = String::Join(L" ", values);
				}
				IO::File::WriteAllLines("BaseProd.txt", lines, System::Text::Encoding::UTF8);
			}
		}
	}
	
};
}
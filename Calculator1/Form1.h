#pragma once
#include <string>
#include "Processing_string.h"
using namespace std;

namespace Calculator1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button0;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button0->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button0->FlatAppearance->BorderSize = 0;
			this->button0->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::Color::Black;
			this->button0->Location = System::Drawing::Point(102, 436);
			this->button0->Margin = System::Windows::Forms::Padding(0);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(90, 80);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button0_MouseClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(12, 356);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 80);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button1_MouseClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(102, 356);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 80);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button2_MouseClick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(192, 356);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 80);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button3_MouseClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(12, 276);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 80);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button4_MouseClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(102, 276);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 80);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button5_MouseClick);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(192, 276);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 80);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button6_MouseClick);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(12, 196);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 80);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button7_MouseClick);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(102, 196);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 80);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button8_MouseClick);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(192, 196);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 80);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button9_MouseClick);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(192, 436);
			this->button10->Margin = System::Windows::Forms::Padding(0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 80);
			this->button10->TabIndex = 10;
			this->button10->Text = L",";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button10_MouseClick);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::SlateGray;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Silver;
			this->button11->Location = System::Drawing::Point(12, 116);
			this->button11->Margin = System::Windows::Forms::Padding(1);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 80);
			this->button11->TabIndex = 11;
			this->button11->Text = L"С";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button11_MouseClick);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::SlateGray;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Silver;
			this->button12->Location = System::Drawing::Point(282, 196);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 80);
			this->button12->TabIndex = 12;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button12_MouseClick);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::SlateGray;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Silver;
			this->button13->Location = System::Drawing::Point(282, 276);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(90, 80);
			this->button13->TabIndex = 13;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button13_MouseClick);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::SlateGray;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Silver;
			this->button14->Location = System::Drawing::Point(101, 116);
			this->button14->Margin = System::Windows::Forms::Padding(1);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(90, 80);
			this->button14->TabIndex = 14;
			this->button14->Text = L"<=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button14_MouseClick);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::SlateGray;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Silver;
			this->button15->Location = System::Drawing::Point(282, 356);
			this->button15->Margin = System::Windows::Forms::Padding(0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(90, 80);
			this->button15->TabIndex = 15;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button15_MouseClick);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::SlateGray;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Silver;
			this->button16->Location = System::Drawing::Point(282, 436);
			this->button16->Margin = System::Windows::Forms::Padding(0);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(90, 80);
			this->button16->TabIndex = 16;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button16_MouseClick);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::SteelBlue;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SteelBlue;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Silver;
			this->button17->Location = System::Drawing::Point(372, 356);
			this->button17->Margin = System::Windows::Forms::Padding(0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(90, 160);
			this->button17->TabIndex = 17;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button17_MouseClick);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 13, System::Drawing::FontStyle::Bold));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(12, 436);
			this->button18->Margin = System::Windows::Forms::Padding(0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(90, 80);
			this->button18->TabIndex = 18;
			this->button18->Text = L"x^n";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button18_MouseClick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(448, 98);
			this->textBox1->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(195, 116);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(267, 80);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::SlateGray;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Silver;
			this->button19->Location = System::Drawing::Point(372, 276);
			this->button19->Margin = System::Windows::Forms::Padding(0);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(90, 80);
			this->button19->TabIndex = 21;
			this->button19->Text = L")";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button19_MouseClick);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::SlateGray;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::Silver;
			this->button20->Location = System::Drawing::Point(372, 196);
			this->button20->Margin = System::Windows::Forms::Padding(0);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 80);
			this->button20->TabIndex = 22;
			this->button20->Text = L"(";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button20_MouseClick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(472, 521);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->ForeColor = System::Drawing::Color::DimGray;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(494, 577);
			this->MinimumSize = System::Drawing::Size(494, 577);
			this->Name = L"Form1";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button0_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		System::String^ s = Button_print(textBox1->Text, "0", 0);
		if (s == "Ошибка") {
			textBox2->Text = "Ошибка";
		}
		else {
			textBox1->Text = s;
		}
	}
	private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "1", 0);
	}
	private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "2", 0);
	}
	private: System::Void button3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "3", 0);
	}
	private: System::Void button4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "4", 0);
	}
	private: System::Void button5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "5", 0);
	}
	private: System::Void button6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "6", 0);
	}
	private: System::Void button7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "7", 0);
	}
	private: System::Void button8_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "8", 0);
	}
	private: System::Void button9_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "9", 0);
	}	
	private: System::Void button10_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, ",", 1);
	}
	private: System::Void button11_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = erase_all(textBox1->Text, 1);
		textBox2->Text = (textBox2->Text)->Substring(0, 0);
	}
	private: System::Void button12_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "/", 2);
	}
	private: System::Void button13_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "*", 2);
	}
	private: System::Void button14_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = erase_all(textBox1->Text, 0);
		textBox2->Text = (textBox2->Text)->Substring(0, 0);
	}
	private: System::Void button15_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "-", 2);
	}
	private: System::Void button16_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "+", 2);
	}
	private: System::Void button17_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox2->Text = equals(textBox1->Text);
	}
	private: System::Void button18_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = Button_print(textBox1->Text, "^", 2);
	}
	private: System::Void button19_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = parentheses(textBox1->Text, 0);
	}
	private: System::Void button20_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = parentheses(textBox1->Text, 1);
	}
};
}

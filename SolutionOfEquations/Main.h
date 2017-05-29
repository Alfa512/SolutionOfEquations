#include "SM4.h"

namespace SolutionOfEquations {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			SM4s = new SM4();
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  MainTextBox;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  X0;
	private: System::Windows::Forms::CheckBox^  X15;


	private: System::Windows::Forms::CheckBox^  X14;

	private: System::Windows::Forms::CheckBox^  X13;

	private: System::Windows::Forms::CheckBox^  X12;

	private: System::Windows::Forms::CheckBox^  X11;

	private: System::Windows::Forms::CheckBox^  X10;
	private: System::Windows::Forms::CheckBox^  X9;
	private: System::Windows::Forms::CheckBox^  X8;
	private: System::Windows::Forms::CheckBox^  X7;
	private: System::Windows::Forms::CheckBox^  X6;
	private: System::Windows::Forms::CheckBox^  X5;
	private: System::Windows::Forms::CheckBox^  X4;
	private: System::Windows::Forms::CheckBox^  X3;
	private: System::Windows::Forms::CheckBox^  X2;



	private: System::Windows::Forms::CheckBox^  X1;
	private: System::Windows::Forms::CheckBox^  X32;
	private: System::Windows::Forms::CheckBox^  X47;
	private: System::Windows::Forms::CheckBox^  X46;




	private: System::Windows::Forms::CheckBox^  X45;
	private: System::Windows::Forms::CheckBox^  X44;
	private: System::Windows::Forms::CheckBox^  X43;
	private: System::Windows::Forms::CheckBox^  X42;
	private: System::Windows::Forms::CheckBox^  X41;
	private: System::Windows::Forms::CheckBox^  X40;
	private: System::Windows::Forms::CheckBox^  X39;
	private: System::Windows::Forms::CheckBox^  X38;
	private: System::Windows::Forms::CheckBox^  X37;
	private: System::Windows::Forms::CheckBox^  X36;
	private: System::Windows::Forms::CheckBox^  X35;
	private: System::Windows::Forms::CheckBox^  X34;
	private: System::Windows::Forms::CheckBox^  X33;
	private: System::Windows::Forms::CheckBox^  X16;
	private: System::Windows::Forms::CheckBox^  X31;
	private: System::Windows::Forms::CheckBox^  X30;


	private: System::Windows::Forms::CheckBox^  X29;
	private: System::Windows::Forms::CheckBox^  X28;
	private: System::Windows::Forms::CheckBox^  X27;
	private: System::Windows::Forms::CheckBox^  X26;
	private: System::Windows::Forms::CheckBox^  X25;
	private: System::Windows::Forms::CheckBox^  X24;
	private: System::Windows::Forms::CheckBox^  X23;
	private: System::Windows::Forms::CheckBox^  X22;
	private: System::Windows::Forms::CheckBox^  X21;
	private: System::Windows::Forms::CheckBox^  X20;
	private: System::Windows::Forms::CheckBox^  X19;
	private: System::Windows::Forms::CheckBox^  X18;
	private: System::Windows::Forms::CheckBox^  X17;
	private: System::Windows::Forms::CheckBox^  X63;
	private: System::Windows::Forms::CheckBox^  X62;
	private: System::Windows::Forms::CheckBox^  X61;
	private: System::Windows::Forms::CheckBox^  X60;
	private: System::Windows::Forms::CheckBox^  X59;
	private: System::Windows::Forms::CheckBox^  X58;
	private: System::Windows::Forms::CheckBox^  X57;
	private: System::Windows::Forms::CheckBox^  X56;
	private: System::Windows::Forms::CheckBox^  X55;
	private: System::Windows::Forms::CheckBox^  X54;
	private: System::Windows::Forms::CheckBox^  X53;
	private: System::Windows::Forms::CheckBox^  X52;
	private: System::Windows::Forms::CheckBox^  X51;
	private: System::Windows::Forms::CheckBox^  X50;
	private: System::Windows::Forms::CheckBox^  X49;
	private: System::Windows::Forms::CheckBox^  X48;
private: System::Windows::Forms::CheckBox^  X127;
private: System::Windows::Forms::CheckBox^  X126;
private: System::Windows::Forms::CheckBox^  X125;
private: System::Windows::Forms::CheckBox^  X124;
private: System::Windows::Forms::CheckBox^  X123;
private: System::Windows::Forms::CheckBox^  X122;
private: System::Windows::Forms::CheckBox^  X121;
private: System::Windows::Forms::CheckBox^  X120;
private: System::Windows::Forms::CheckBox^  X119;
private: System::Windows::Forms::CheckBox^  X118;
private: System::Windows::Forms::CheckBox^  X117;
private: System::Windows::Forms::CheckBox^  X116;
private: System::Windows::Forms::CheckBox^  X115;
private: System::Windows::Forms::CheckBox^  X114;
private: System::Windows::Forms::CheckBox^  X113;
private: System::Windows::Forms::CheckBox^  X112;
private: System::Windows::Forms::CheckBox^  X111;
private: System::Windows::Forms::CheckBox^  X110;
private: System::Windows::Forms::CheckBox^  X109;
private: System::Windows::Forms::CheckBox^  X108;
private: System::Windows::Forms::CheckBox^  X107;
private: System::Windows::Forms::CheckBox^  X106;
private: System::Windows::Forms::CheckBox^  X105;
private: System::Windows::Forms::CheckBox^  X104;
private: System::Windows::Forms::CheckBox^  X103;
private: System::Windows::Forms::CheckBox^  X102;
private: System::Windows::Forms::CheckBox^  X101;
private: System::Windows::Forms::CheckBox^  X100;
private: System::Windows::Forms::CheckBox^  X99;
private: System::Windows::Forms::CheckBox^  X98;
private: System::Windows::Forms::CheckBox^  X97;
private: System::Windows::Forms::CheckBox^  X96;
private: System::Windows::Forms::CheckBox^  X95;
private: System::Windows::Forms::CheckBox^  X94;
private: System::Windows::Forms::CheckBox^  X93;
private: System::Windows::Forms::CheckBox^  X92;
private: System::Windows::Forms::CheckBox^  X91;
private: System::Windows::Forms::CheckBox^  X90;
private: System::Windows::Forms::CheckBox^  X89;
private: System::Windows::Forms::CheckBox^  X88;
private: System::Windows::Forms::CheckBox^  X87;
private: System::Windows::Forms::CheckBox^  X86;
private: System::Windows::Forms::CheckBox^  X85;
private: System::Windows::Forms::CheckBox^  X84;
private: System::Windows::Forms::CheckBox^  X83;
private: System::Windows::Forms::CheckBox^  X82;
private: System::Windows::Forms::CheckBox^  X81;
private: System::Windows::Forms::CheckBox^  X80;
private: System::Windows::Forms::CheckBox^  X79;
private: System::Windows::Forms::CheckBox^  X78;
private: System::Windows::Forms::CheckBox^  X77;
private: System::Windows::Forms::CheckBox^  X76;
private: System::Windows::Forms::CheckBox^  X75;
private: System::Windows::Forms::CheckBox^  X74;
private: System::Windows::Forms::CheckBox^  X73;
private: System::Windows::Forms::CheckBox^  X72;
private: System::Windows::Forms::CheckBox^  X71;
private: System::Windows::Forms::CheckBox^  X70;
private: System::Windows::Forms::CheckBox^  X69;
private: System::Windows::Forms::CheckBox^  X68;
private: System::Windows::Forms::CheckBox^  X67;
private: System::Windows::Forms::CheckBox^  X66;
private: System::Windows::Forms::CheckBox^  X65;
private: System::Windows::Forms::CheckBox^  X64;
private: System::Windows::Forms::GroupBox^  groupBox2;


	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->MainTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->X127 = (gcnew System::Windows::Forms::CheckBox());
			this->X126 = (gcnew System::Windows::Forms::CheckBox());
			this->X125 = (gcnew System::Windows::Forms::CheckBox());
			this->X124 = (gcnew System::Windows::Forms::CheckBox());
			this->X123 = (gcnew System::Windows::Forms::CheckBox());
			this->X122 = (gcnew System::Windows::Forms::CheckBox());
			this->X121 = (gcnew System::Windows::Forms::CheckBox());
			this->X120 = (gcnew System::Windows::Forms::CheckBox());
			this->X119 = (gcnew System::Windows::Forms::CheckBox());
			this->X118 = (gcnew System::Windows::Forms::CheckBox());
			this->X117 = (gcnew System::Windows::Forms::CheckBox());
			this->X116 = (gcnew System::Windows::Forms::CheckBox());
			this->X115 = (gcnew System::Windows::Forms::CheckBox());
			this->X114 = (gcnew System::Windows::Forms::CheckBox());
			this->X113 = (gcnew System::Windows::Forms::CheckBox());
			this->X112 = (gcnew System::Windows::Forms::CheckBox());
			this->X111 = (gcnew System::Windows::Forms::CheckBox());
			this->X110 = (gcnew System::Windows::Forms::CheckBox());
			this->X109 = (gcnew System::Windows::Forms::CheckBox());
			this->X108 = (gcnew System::Windows::Forms::CheckBox());
			this->X107 = (gcnew System::Windows::Forms::CheckBox());
			this->X106 = (gcnew System::Windows::Forms::CheckBox());
			this->X105 = (gcnew System::Windows::Forms::CheckBox());
			this->X104 = (gcnew System::Windows::Forms::CheckBox());
			this->X103 = (gcnew System::Windows::Forms::CheckBox());
			this->X102 = (gcnew System::Windows::Forms::CheckBox());
			this->X101 = (gcnew System::Windows::Forms::CheckBox());
			this->X100 = (gcnew System::Windows::Forms::CheckBox());
			this->X99 = (gcnew System::Windows::Forms::CheckBox());
			this->X98 = (gcnew System::Windows::Forms::CheckBox());
			this->X97 = (gcnew System::Windows::Forms::CheckBox());
			this->X96 = (gcnew System::Windows::Forms::CheckBox());
			this->X95 = (gcnew System::Windows::Forms::CheckBox());
			this->X94 = (gcnew System::Windows::Forms::CheckBox());
			this->X93 = (gcnew System::Windows::Forms::CheckBox());
			this->X92 = (gcnew System::Windows::Forms::CheckBox());
			this->X91 = (gcnew System::Windows::Forms::CheckBox());
			this->X90 = (gcnew System::Windows::Forms::CheckBox());
			this->X89 = (gcnew System::Windows::Forms::CheckBox());
			this->X88 = (gcnew System::Windows::Forms::CheckBox());
			this->X87 = (gcnew System::Windows::Forms::CheckBox());
			this->X86 = (gcnew System::Windows::Forms::CheckBox());
			this->X85 = (gcnew System::Windows::Forms::CheckBox());
			this->X84 = (gcnew System::Windows::Forms::CheckBox());
			this->X83 = (gcnew System::Windows::Forms::CheckBox());
			this->X82 = (gcnew System::Windows::Forms::CheckBox());
			this->X81 = (gcnew System::Windows::Forms::CheckBox());
			this->X80 = (gcnew System::Windows::Forms::CheckBox());
			this->X79 = (gcnew System::Windows::Forms::CheckBox());
			this->X78 = (gcnew System::Windows::Forms::CheckBox());
			this->X77 = (gcnew System::Windows::Forms::CheckBox());
			this->X76 = (gcnew System::Windows::Forms::CheckBox());
			this->X75 = (gcnew System::Windows::Forms::CheckBox());
			this->X74 = (gcnew System::Windows::Forms::CheckBox());
			this->X73 = (gcnew System::Windows::Forms::CheckBox());
			this->X72 = (gcnew System::Windows::Forms::CheckBox());
			this->X71 = (gcnew System::Windows::Forms::CheckBox());
			this->X70 = (gcnew System::Windows::Forms::CheckBox());
			this->X69 = (gcnew System::Windows::Forms::CheckBox());
			this->X68 = (gcnew System::Windows::Forms::CheckBox());
			this->X67 = (gcnew System::Windows::Forms::CheckBox());
			this->X66 = (gcnew System::Windows::Forms::CheckBox());
			this->X65 = (gcnew System::Windows::Forms::CheckBox());
			this->X64 = (gcnew System::Windows::Forms::CheckBox());
			this->X63 = (gcnew System::Windows::Forms::CheckBox());
			this->X62 = (gcnew System::Windows::Forms::CheckBox());
			this->X61 = (gcnew System::Windows::Forms::CheckBox());
			this->X60 = (gcnew System::Windows::Forms::CheckBox());
			this->X59 = (gcnew System::Windows::Forms::CheckBox());
			this->X58 = (gcnew System::Windows::Forms::CheckBox());
			this->X57 = (gcnew System::Windows::Forms::CheckBox());
			this->X56 = (gcnew System::Windows::Forms::CheckBox());
			this->X55 = (gcnew System::Windows::Forms::CheckBox());
			this->X54 = (gcnew System::Windows::Forms::CheckBox());
			this->X53 = (gcnew System::Windows::Forms::CheckBox());
			this->X52 = (gcnew System::Windows::Forms::CheckBox());
			this->X51 = (gcnew System::Windows::Forms::CheckBox());
			this->X50 = (gcnew System::Windows::Forms::CheckBox());
			this->X49 = (gcnew System::Windows::Forms::CheckBox());
			this->X48 = (gcnew System::Windows::Forms::CheckBox());
			this->X32 = (gcnew System::Windows::Forms::CheckBox());
			this->X47 = (gcnew System::Windows::Forms::CheckBox());
			this->X46 = (gcnew System::Windows::Forms::CheckBox());
			this->X45 = (gcnew System::Windows::Forms::CheckBox());
			this->X44 = (gcnew System::Windows::Forms::CheckBox());
			this->X43 = (gcnew System::Windows::Forms::CheckBox());
			this->X42 = (gcnew System::Windows::Forms::CheckBox());
			this->X41 = (gcnew System::Windows::Forms::CheckBox());
			this->X40 = (gcnew System::Windows::Forms::CheckBox());
			this->X39 = (gcnew System::Windows::Forms::CheckBox());
			this->X38 = (gcnew System::Windows::Forms::CheckBox());
			this->X37 = (gcnew System::Windows::Forms::CheckBox());
			this->X36 = (gcnew System::Windows::Forms::CheckBox());
			this->X35 = (gcnew System::Windows::Forms::CheckBox());
			this->X34 = (gcnew System::Windows::Forms::CheckBox());
			this->X33 = (gcnew System::Windows::Forms::CheckBox());
			this->X16 = (gcnew System::Windows::Forms::CheckBox());
			this->X31 = (gcnew System::Windows::Forms::CheckBox());
			this->X0 = (gcnew System::Windows::Forms::CheckBox());
			this->X30 = (gcnew System::Windows::Forms::CheckBox());
			this->X15 = (gcnew System::Windows::Forms::CheckBox());
			this->X29 = (gcnew System::Windows::Forms::CheckBox());
			this->X14 = (gcnew System::Windows::Forms::CheckBox());
			this->X28 = (gcnew System::Windows::Forms::CheckBox());
			this->X13 = (gcnew System::Windows::Forms::CheckBox());
			this->X27 = (gcnew System::Windows::Forms::CheckBox());
			this->X12 = (gcnew System::Windows::Forms::CheckBox());
			this->X26 = (gcnew System::Windows::Forms::CheckBox());
			this->X11 = (gcnew System::Windows::Forms::CheckBox());
			this->X25 = (gcnew System::Windows::Forms::CheckBox());
			this->X10 = (gcnew System::Windows::Forms::CheckBox());
			this->X24 = (gcnew System::Windows::Forms::CheckBox());
			this->X9 = (gcnew System::Windows::Forms::CheckBox());
			this->X23 = (gcnew System::Windows::Forms::CheckBox());
			this->X8 = (gcnew System::Windows::Forms::CheckBox());
			this->X22 = (gcnew System::Windows::Forms::CheckBox());
			this->X7 = (gcnew System::Windows::Forms::CheckBox());
			this->X21 = (gcnew System::Windows::Forms::CheckBox());
			this->X6 = (gcnew System::Windows::Forms::CheckBox());
			this->X20 = (gcnew System::Windows::Forms::CheckBox());
			this->X5 = (gcnew System::Windows::Forms::CheckBox());
			this->X19 = (gcnew System::Windows::Forms::CheckBox());
			this->X4 = (gcnew System::Windows::Forms::CheckBox());
			this->X18 = (gcnew System::Windows::Forms::CheckBox());
			this->X3 = (gcnew System::Windows::Forms::CheckBox());
			this->X17 = (gcnew System::Windows::Forms::CheckBox());
			this->X2 = (gcnew System::Windows::Forms::CheckBox());
			this->X1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"—делать всЄ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// MainTextBox
			// 
			this->MainTextBox->Location = System::Drawing::Point(12, 86);
			this->MainTextBox->Multiline = true;
			this->MainTextBox->Name = L"MainTextBox";
			this->MainTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->MainTextBox->Size = System::Drawing::Size(192, 323);
			this->MainTextBox->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->X127);
			this->groupBox1->Controls->Add(this->X126);
			this->groupBox1->Controls->Add(this->X125);
			this->groupBox1->Controls->Add(this->X124);
			this->groupBox1->Controls->Add(this->X123);
			this->groupBox1->Controls->Add(this->X122);
			this->groupBox1->Controls->Add(this->X121);
			this->groupBox1->Controls->Add(this->X120);
			this->groupBox1->Controls->Add(this->X119);
			this->groupBox1->Controls->Add(this->X118);
			this->groupBox1->Controls->Add(this->X117);
			this->groupBox1->Controls->Add(this->X116);
			this->groupBox1->Controls->Add(this->X115);
			this->groupBox1->Controls->Add(this->X114);
			this->groupBox1->Controls->Add(this->X113);
			this->groupBox1->Controls->Add(this->X112);
			this->groupBox1->Controls->Add(this->X111);
			this->groupBox1->Controls->Add(this->X110);
			this->groupBox1->Controls->Add(this->X109);
			this->groupBox1->Controls->Add(this->X108);
			this->groupBox1->Controls->Add(this->X107);
			this->groupBox1->Controls->Add(this->X106);
			this->groupBox1->Controls->Add(this->X105);
			this->groupBox1->Controls->Add(this->X104);
			this->groupBox1->Controls->Add(this->X103);
			this->groupBox1->Controls->Add(this->X102);
			this->groupBox1->Controls->Add(this->X101);
			this->groupBox1->Controls->Add(this->X100);
			this->groupBox1->Controls->Add(this->X99);
			this->groupBox1->Controls->Add(this->X98);
			this->groupBox1->Controls->Add(this->X97);
			this->groupBox1->Controls->Add(this->X96);
			this->groupBox1->Controls->Add(this->X95);
			this->groupBox1->Controls->Add(this->X94);
			this->groupBox1->Controls->Add(this->X93);
			this->groupBox1->Controls->Add(this->X92);
			this->groupBox1->Controls->Add(this->X91);
			this->groupBox1->Controls->Add(this->X90);
			this->groupBox1->Controls->Add(this->X89);
			this->groupBox1->Controls->Add(this->X88);
			this->groupBox1->Controls->Add(this->X87);
			this->groupBox1->Controls->Add(this->X86);
			this->groupBox1->Controls->Add(this->X85);
			this->groupBox1->Controls->Add(this->X84);
			this->groupBox1->Controls->Add(this->X83);
			this->groupBox1->Controls->Add(this->X82);
			this->groupBox1->Controls->Add(this->X81);
			this->groupBox1->Controls->Add(this->X80);
			this->groupBox1->Controls->Add(this->X79);
			this->groupBox1->Controls->Add(this->X78);
			this->groupBox1->Controls->Add(this->X77);
			this->groupBox1->Controls->Add(this->X76);
			this->groupBox1->Controls->Add(this->X75);
			this->groupBox1->Controls->Add(this->X74);
			this->groupBox1->Controls->Add(this->X73);
			this->groupBox1->Controls->Add(this->X72);
			this->groupBox1->Controls->Add(this->X71);
			this->groupBox1->Controls->Add(this->X70);
			this->groupBox1->Controls->Add(this->X69);
			this->groupBox1->Controls->Add(this->X68);
			this->groupBox1->Controls->Add(this->X67);
			this->groupBox1->Controls->Add(this->X66);
			this->groupBox1->Controls->Add(this->X65);
			this->groupBox1->Controls->Add(this->X64);
			this->groupBox1->Controls->Add(this->X63);
			this->groupBox1->Controls->Add(this->X62);
			this->groupBox1->Controls->Add(this->X61);
			this->groupBox1->Controls->Add(this->X60);
			this->groupBox1->Controls->Add(this->X59);
			this->groupBox1->Controls->Add(this->X58);
			this->groupBox1->Controls->Add(this->X57);
			this->groupBox1->Controls->Add(this->X56);
			this->groupBox1->Controls->Add(this->X55);
			this->groupBox1->Controls->Add(this->X54);
			this->groupBox1->Controls->Add(this->X53);
			this->groupBox1->Controls->Add(this->X52);
			this->groupBox1->Controls->Add(this->X51);
			this->groupBox1->Controls->Add(this->X50);
			this->groupBox1->Controls->Add(this->X49);
			this->groupBox1->Controls->Add(this->X48);
			this->groupBox1->Controls->Add(this->X32);
			this->groupBox1->Controls->Add(this->X47);
			this->groupBox1->Controls->Add(this->X46);
			this->groupBox1->Controls->Add(this->X45);
			this->groupBox1->Controls->Add(this->X44);
			this->groupBox1->Controls->Add(this->X43);
			this->groupBox1->Controls->Add(this->X42);
			this->groupBox1->Controls->Add(this->X41);
			this->groupBox1->Controls->Add(this->X40);
			this->groupBox1->Controls->Add(this->X39);
			this->groupBox1->Controls->Add(this->X38);
			this->groupBox1->Controls->Add(this->X37);
			this->groupBox1->Controls->Add(this->X36);
			this->groupBox1->Controls->Add(this->X35);
			this->groupBox1->Controls->Add(this->X34);
			this->groupBox1->Controls->Add(this->X33);
			this->groupBox1->Controls->Add(this->X16);
			this->groupBox1->Controls->Add(this->X31);
			this->groupBox1->Controls->Add(this->X0);
			this->groupBox1->Controls->Add(this->X30);
			this->groupBox1->Controls->Add(this->X15);
			this->groupBox1->Controls->Add(this->X29);
			this->groupBox1->Controls->Add(this->X14);
			this->groupBox1->Controls->Add(this->X28);
			this->groupBox1->Controls->Add(this->X13);
			this->groupBox1->Controls->Add(this->X27);
			this->groupBox1->Controls->Add(this->X12);
			this->groupBox1->Controls->Add(this->X26);
			this->groupBox1->Controls->Add(this->X11);
			this->groupBox1->Controls->Add(this->X25);
			this->groupBox1->Controls->Add(this->X10);
			this->groupBox1->Controls->Add(this->X24);
			this->groupBox1->Controls->Add(this->X9);
			this->groupBox1->Controls->Add(this->X23);
			this->groupBox1->Controls->Add(this->X8);
			this->groupBox1->Controls->Add(this->X22);
			this->groupBox1->Controls->Add(this->X7);
			this->groupBox1->Controls->Add(this->X21);
			this->groupBox1->Controls->Add(this->X6);
			this->groupBox1->Controls->Add(this->X20);
			this->groupBox1->Controls->Add(this->X5);
			this->groupBox1->Controls->Add(this->X19);
			this->groupBox1->Controls->Add(this->X4);
			this->groupBox1->Controls->Add(this->X18);
			this->groupBox1->Controls->Add(this->X3);
			this->groupBox1->Controls->Add(this->X17);
			this->groupBox1->Controls->Add(this->X2);
			this->groupBox1->Controls->Add(this->X1);
			this->groupBox1->Location = System::Drawing::Point(210, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(419, 397);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ѕиты X";
			// 
			// X127
			// 
			this->X127->AutoSize = true;
			this->X127->Location = System::Drawing::Point(363, 364);
			this->X127->Name = L"X127";
			this->X127->Size = System::Drawing::Size(51, 17);
			this->X127->TabIndex = 130;
			this->X127->Text = L"X127";
			this->X127->UseVisualStyleBackColor = true;
			// 
			// X126
			// 
			this->X126->AutoSize = true;
			this->X126->Location = System::Drawing::Point(363, 341);
			this->X126->Name = L"X126";
			this->X126->Size = System::Drawing::Size(51, 17);
			this->X126->TabIndex = 129;
			this->X126->Text = L"X126";
			this->X126->UseVisualStyleBackColor = true;
			// 
			// X125
			// 
			this->X125->AutoSize = true;
			this->X125->Location = System::Drawing::Point(363, 318);
			this->X125->Name = L"X125";
			this->X125->Size = System::Drawing::Size(51, 17);
			this->X125->TabIndex = 128;
			this->X125->Text = L"X125";
			this->X125->UseVisualStyleBackColor = true;
			// 
			// X124
			// 
			this->X124->AutoSize = true;
			this->X124->Location = System::Drawing::Point(363, 295);
			this->X124->Name = L"X124";
			this->X124->Size = System::Drawing::Size(51, 17);
			this->X124->TabIndex = 127;
			this->X124->Text = L"X124";
			this->X124->UseVisualStyleBackColor = true;
			// 
			// X123
			// 
			this->X123->AutoSize = true;
			this->X123->Location = System::Drawing::Point(363, 272);
			this->X123->Name = L"X123";
			this->X123->Size = System::Drawing::Size(51, 17);
			this->X123->TabIndex = 126;
			this->X123->Text = L"X123";
			this->X123->UseVisualStyleBackColor = true;
			// 
			// X122
			// 
			this->X122->AutoSize = true;
			this->X122->Location = System::Drawing::Point(363, 249);
			this->X122->Name = L"X122";
			this->X122->Size = System::Drawing::Size(51, 17);
			this->X122->TabIndex = 125;
			this->X122->Text = L"X122";
			this->X122->UseVisualStyleBackColor = true;
			// 
			// X121
			// 
			this->X121->AutoSize = true;
			this->X121->Location = System::Drawing::Point(363, 226);
			this->X121->Name = L"X121";
			this->X121->Size = System::Drawing::Size(51, 17);
			this->X121->TabIndex = 124;
			this->X121->Text = L"X121";
			this->X121->UseVisualStyleBackColor = true;
			// 
			// X120
			// 
			this->X120->AutoSize = true;
			this->X120->Location = System::Drawing::Point(363, 203);
			this->X120->Name = L"X120";
			this->X120->Size = System::Drawing::Size(51, 17);
			this->X120->TabIndex = 123;
			this->X120->Text = L"X120";
			this->X120->UseVisualStyleBackColor = true;
			// 
			// X119
			// 
			this->X119->AutoSize = true;
			this->X119->Location = System::Drawing::Point(363, 180);
			this->X119->Name = L"X119";
			this->X119->Size = System::Drawing::Size(51, 17);
			this->X119->TabIndex = 122;
			this->X119->Text = L"X119";
			this->X119->UseVisualStyleBackColor = true;
			// 
			// X118
			// 
			this->X118->AutoSize = true;
			this->X118->Location = System::Drawing::Point(363, 157);
			this->X118->Name = L"X118";
			this->X118->Size = System::Drawing::Size(51, 17);
			this->X118->TabIndex = 121;
			this->X118->Text = L"X118";
			this->X118->UseVisualStyleBackColor = true;
			// 
			// X117
			// 
			this->X117->AutoSize = true;
			this->X117->Location = System::Drawing::Point(363, 134);
			this->X117->Name = L"X117";
			this->X117->Size = System::Drawing::Size(51, 17);
			this->X117->TabIndex = 120;
			this->X117->Text = L"X117";
			this->X117->UseVisualStyleBackColor = true;
			// 
			// X116
			// 
			this->X116->AutoSize = true;
			this->X116->Location = System::Drawing::Point(363, 111);
			this->X116->Name = L"X116";
			this->X116->Size = System::Drawing::Size(51, 17);
			this->X116->TabIndex = 119;
			this->X116->Text = L"X116";
			this->X116->UseVisualStyleBackColor = true;
			// 
			// X115
			// 
			this->X115->AutoSize = true;
			this->X115->Location = System::Drawing::Point(363, 88);
			this->X115->Name = L"X115";
			this->X115->Size = System::Drawing::Size(51, 17);
			this->X115->TabIndex = 118;
			this->X115->Text = L"X115";
			this->X115->UseVisualStyleBackColor = true;
			// 
			// X114
			// 
			this->X114->AutoSize = true;
			this->X114->Location = System::Drawing::Point(363, 65);
			this->X114->Name = L"X114";
			this->X114->Size = System::Drawing::Size(51, 17);
			this->X114->TabIndex = 117;
			this->X114->Text = L"X114";
			this->X114->UseVisualStyleBackColor = true;
			// 
			// X113
			// 
			this->X113->AutoSize = true;
			this->X113->Location = System::Drawing::Point(363, 42);
			this->X113->Name = L"X113";
			this->X113->Size = System::Drawing::Size(51, 17);
			this->X113->TabIndex = 116;
			this->X113->Text = L"X113";
			this->X113->UseVisualStyleBackColor = true;
			// 
			// X112
			// 
			this->X112->AutoSize = true;
			this->X112->Location = System::Drawing::Point(363, 19);
			this->X112->Name = L"X112";
			this->X112->Size = System::Drawing::Size(51, 17);
			this->X112->TabIndex = 115;
			this->X112->Text = L"X112";
			this->X112->UseVisualStyleBackColor = true;
			// 
			// X111
			// 
			this->X111->AutoSize = true;
			this->X111->Location = System::Drawing::Point(306, 364);
			this->X111->Name = L"X111";
			this->X111->Size = System::Drawing::Size(51, 17);
			this->X111->TabIndex = 114;
			this->X111->Text = L"X111";
			this->X111->UseVisualStyleBackColor = true;
			// 
			// X110
			// 
			this->X110->AutoSize = true;
			this->X110->Location = System::Drawing::Point(306, 341);
			this->X110->Name = L"X110";
			this->X110->Size = System::Drawing::Size(51, 17);
			this->X110->TabIndex = 113;
			this->X110->Text = L"X110";
			this->X110->UseVisualStyleBackColor = true;
			// 
			// X109
			// 
			this->X109->AutoSize = true;
			this->X109->Location = System::Drawing::Point(306, 318);
			this->X109->Name = L"X109";
			this->X109->Size = System::Drawing::Size(51, 17);
			this->X109->TabIndex = 112;
			this->X109->Text = L"X109";
			this->X109->UseVisualStyleBackColor = true;
			// 
			// X108
			// 
			this->X108->AutoSize = true;
			this->X108->Location = System::Drawing::Point(306, 295);
			this->X108->Name = L"X108";
			this->X108->Size = System::Drawing::Size(51, 17);
			this->X108->TabIndex = 111;
			this->X108->Text = L"X108";
			this->X108->UseVisualStyleBackColor = true;
			// 
			// X107
			// 
			this->X107->AutoSize = true;
			this->X107->Location = System::Drawing::Point(306, 272);
			this->X107->Name = L"X107";
			this->X107->Size = System::Drawing::Size(51, 17);
			this->X107->TabIndex = 110;
			this->X107->Text = L"X107";
			this->X107->UseVisualStyleBackColor = true;
			// 
			// X106
			// 
			this->X106->AutoSize = true;
			this->X106->Location = System::Drawing::Point(306, 249);
			this->X106->Name = L"X106";
			this->X106->Size = System::Drawing::Size(51, 17);
			this->X106->TabIndex = 109;
			this->X106->Text = L"X106";
			this->X106->UseVisualStyleBackColor = true;
			// 
			// X105
			// 
			this->X105->AutoSize = true;
			this->X105->Location = System::Drawing::Point(306, 226);
			this->X105->Name = L"X105";
			this->X105->Size = System::Drawing::Size(51, 17);
			this->X105->TabIndex = 108;
			this->X105->Text = L"X105";
			this->X105->UseVisualStyleBackColor = true;
			// 
			// X104
			// 
			this->X104->AutoSize = true;
			this->X104->Location = System::Drawing::Point(306, 203);
			this->X104->Name = L"X104";
			this->X104->Size = System::Drawing::Size(51, 17);
			this->X104->TabIndex = 107;
			this->X104->Text = L"X104";
			this->X104->UseVisualStyleBackColor = true;
			// 
			// X103
			// 
			this->X103->AutoSize = true;
			this->X103->Location = System::Drawing::Point(306, 180);
			this->X103->Name = L"X103";
			this->X103->Size = System::Drawing::Size(51, 17);
			this->X103->TabIndex = 106;
			this->X103->Text = L"X103";
			this->X103->UseVisualStyleBackColor = true;
			// 
			// X102
			// 
			this->X102->AutoSize = true;
			this->X102->Location = System::Drawing::Point(306, 157);
			this->X102->Name = L"X102";
			this->X102->Size = System::Drawing::Size(51, 17);
			this->X102->TabIndex = 105;
			this->X102->Text = L"X102";
			this->X102->UseVisualStyleBackColor = true;
			// 
			// X101
			// 
			this->X101->AutoSize = true;
			this->X101->Location = System::Drawing::Point(306, 134);
			this->X101->Name = L"X101";
			this->X101->Size = System::Drawing::Size(51, 17);
			this->X101->TabIndex = 104;
			this->X101->Text = L"X101";
			this->X101->UseVisualStyleBackColor = true;
			// 
			// X100
			// 
			this->X100->AutoSize = true;
			this->X100->Location = System::Drawing::Point(306, 111);
			this->X100->Name = L"X100";
			this->X100->Size = System::Drawing::Size(51, 17);
			this->X100->TabIndex = 103;
			this->X100->Text = L"X100";
			this->X100->UseVisualStyleBackColor = true;
			// 
			// X99
			// 
			this->X99->AutoSize = true;
			this->X99->Location = System::Drawing::Point(306, 88);
			this->X99->Name = L"X99";
			this->X99->Size = System::Drawing::Size(45, 17);
			this->X99->TabIndex = 102;
			this->X99->Text = L"X99";
			this->X99->UseVisualStyleBackColor = true;
			// 
			// X98
			// 
			this->X98->AutoSize = true;
			this->X98->Location = System::Drawing::Point(306, 65);
			this->X98->Name = L"X98";
			this->X98->Size = System::Drawing::Size(45, 17);
			this->X98->TabIndex = 101;
			this->X98->Text = L"X98";
			this->X98->UseVisualStyleBackColor = true;
			// 
			// X97
			// 
			this->X97->AutoSize = true;
			this->X97->Location = System::Drawing::Point(306, 42);
			this->X97->Name = L"X97";
			this->X97->Size = System::Drawing::Size(45, 17);
			this->X97->TabIndex = 100;
			this->X97->Text = L"X97";
			this->X97->UseVisualStyleBackColor = true;
			// 
			// X96
			// 
			this->X96->AutoSize = true;
			this->X96->Location = System::Drawing::Point(306, 19);
			this->X96->Name = L"X96";
			this->X96->Size = System::Drawing::Size(45, 17);
			this->X96->TabIndex = 99;
			this->X96->Text = L"X96";
			this->X96->UseVisualStyleBackColor = true;
			// 
			// X95
			// 
			this->X95->AutoSize = true;
			this->X95->Location = System::Drawing::Point(255, 364);
			this->X95->Name = L"X95";
			this->X95->Size = System::Drawing::Size(45, 17);
			this->X95->TabIndex = 98;
			this->X95->Text = L"X95";
			this->X95->UseVisualStyleBackColor = true;
			// 
			// X94
			// 
			this->X94->AutoSize = true;
			this->X94->Location = System::Drawing::Point(255, 341);
			this->X94->Name = L"X94";
			this->X94->Size = System::Drawing::Size(45, 17);
			this->X94->TabIndex = 97;
			this->X94->Text = L"X94";
			this->X94->UseVisualStyleBackColor = true;
			// 
			// X93
			// 
			this->X93->AutoSize = true;
			this->X93->Location = System::Drawing::Point(255, 318);
			this->X93->Name = L"X93";
			this->X93->Size = System::Drawing::Size(45, 17);
			this->X93->TabIndex = 96;
			this->X93->Text = L"X93";
			this->X93->UseVisualStyleBackColor = true;
			// 
			// X92
			// 
			this->X92->AutoSize = true;
			this->X92->Location = System::Drawing::Point(255, 295);
			this->X92->Name = L"X92";
			this->X92->Size = System::Drawing::Size(45, 17);
			this->X92->TabIndex = 95;
			this->X92->Text = L"X92";
			this->X92->UseVisualStyleBackColor = true;
			// 
			// X91
			// 
			this->X91->AutoSize = true;
			this->X91->Location = System::Drawing::Point(255, 272);
			this->X91->Name = L"X91";
			this->X91->Size = System::Drawing::Size(45, 17);
			this->X91->TabIndex = 94;
			this->X91->Text = L"X91";
			this->X91->UseVisualStyleBackColor = true;
			// 
			// X90
			// 
			this->X90->AutoSize = true;
			this->X90->Location = System::Drawing::Point(255, 249);
			this->X90->Name = L"X90";
			this->X90->Size = System::Drawing::Size(45, 17);
			this->X90->TabIndex = 93;
			this->X90->Text = L"X90";
			this->X90->UseVisualStyleBackColor = true;
			// 
			// X89
			// 
			this->X89->AutoSize = true;
			this->X89->Location = System::Drawing::Point(255, 226);
			this->X89->Name = L"X89";
			this->X89->Size = System::Drawing::Size(45, 17);
			this->X89->TabIndex = 92;
			this->X89->Text = L"X89";
			this->X89->UseVisualStyleBackColor = true;
			// 
			// X88
			// 
			this->X88->AutoSize = true;
			this->X88->Location = System::Drawing::Point(255, 203);
			this->X88->Name = L"X88";
			this->X88->Size = System::Drawing::Size(45, 17);
			this->X88->TabIndex = 91;
			this->X88->Text = L"X88";
			this->X88->UseVisualStyleBackColor = true;
			// 
			// X87
			// 
			this->X87->AutoSize = true;
			this->X87->Location = System::Drawing::Point(255, 180);
			this->X87->Name = L"X87";
			this->X87->Size = System::Drawing::Size(45, 17);
			this->X87->TabIndex = 90;
			this->X87->Text = L"X87";
			this->X87->UseVisualStyleBackColor = true;
			// 
			// X86
			// 
			this->X86->AutoSize = true;
			this->X86->Location = System::Drawing::Point(255, 157);
			this->X86->Name = L"X86";
			this->X86->Size = System::Drawing::Size(45, 17);
			this->X86->TabIndex = 89;
			this->X86->Text = L"X86";
			this->X86->UseVisualStyleBackColor = true;
			// 
			// X85
			// 
			this->X85->AutoSize = true;
			this->X85->Location = System::Drawing::Point(255, 134);
			this->X85->Name = L"X85";
			this->X85->Size = System::Drawing::Size(45, 17);
			this->X85->TabIndex = 88;
			this->X85->Text = L"X85";
			this->X85->UseVisualStyleBackColor = true;
			// 
			// X84
			// 
			this->X84->AutoSize = true;
			this->X84->Location = System::Drawing::Point(255, 111);
			this->X84->Name = L"X84";
			this->X84->Size = System::Drawing::Size(45, 17);
			this->X84->TabIndex = 87;
			this->X84->Text = L"X84";
			this->X84->UseVisualStyleBackColor = true;
			// 
			// X83
			// 
			this->X83->AutoSize = true;
			this->X83->Location = System::Drawing::Point(255, 88);
			this->X83->Name = L"X83";
			this->X83->Size = System::Drawing::Size(45, 17);
			this->X83->TabIndex = 86;
			this->X83->Text = L"X83";
			this->X83->UseVisualStyleBackColor = true;
			// 
			// X82
			// 
			this->X82->AutoSize = true;
			this->X82->Location = System::Drawing::Point(255, 65);
			this->X82->Name = L"X82";
			this->X82->Size = System::Drawing::Size(45, 17);
			this->X82->TabIndex = 85;
			this->X82->Text = L"X82";
			this->X82->UseVisualStyleBackColor = true;
			// 
			// X81
			// 
			this->X81->AutoSize = true;
			this->X81->Location = System::Drawing::Point(255, 42);
			this->X81->Name = L"X81";
			this->X81->Size = System::Drawing::Size(45, 17);
			this->X81->TabIndex = 84;
			this->X81->Text = L"X81";
			this->X81->UseVisualStyleBackColor = true;
			// 
			// X80
			// 
			this->X80->AutoSize = true;
			this->X80->Location = System::Drawing::Point(255, 19);
			this->X80->Name = L"X80";
			this->X80->Size = System::Drawing::Size(45, 17);
			this->X80->TabIndex = 83;
			this->X80->Text = L"X80";
			this->X80->UseVisualStyleBackColor = true;
			// 
			// X79
			// 
			this->X79->AutoSize = true;
			this->X79->Location = System::Drawing::Point(204, 364);
			this->X79->Name = L"X79";
			this->X79->Size = System::Drawing::Size(45, 17);
			this->X79->TabIndex = 82;
			this->X79->Text = L"X79";
			this->X79->UseVisualStyleBackColor = true;
			// 
			// X78
			// 
			this->X78->AutoSize = true;
			this->X78->Location = System::Drawing::Point(204, 341);
			this->X78->Name = L"X78";
			this->X78->Size = System::Drawing::Size(45, 17);
			this->X78->TabIndex = 81;
			this->X78->Text = L"X78";
			this->X78->UseVisualStyleBackColor = true;
			// 
			// X77
			// 
			this->X77->AutoSize = true;
			this->X77->Location = System::Drawing::Point(204, 318);
			this->X77->Name = L"X77";
			this->X77->Size = System::Drawing::Size(45, 17);
			this->X77->TabIndex = 80;
			this->X77->Text = L"X77";
			this->X77->UseVisualStyleBackColor = true;
			// 
			// X76
			// 
			this->X76->AutoSize = true;
			this->X76->Location = System::Drawing::Point(204, 295);
			this->X76->Name = L"X76";
			this->X76->Size = System::Drawing::Size(45, 17);
			this->X76->TabIndex = 79;
			this->X76->Text = L"X76";
			this->X76->UseVisualStyleBackColor = true;
			// 
			// X75
			// 
			this->X75->AutoSize = true;
			this->X75->Location = System::Drawing::Point(204, 272);
			this->X75->Name = L"X75";
			this->X75->Size = System::Drawing::Size(45, 17);
			this->X75->TabIndex = 78;
			this->X75->Text = L"X75";
			this->X75->UseVisualStyleBackColor = true;
			// 
			// X74
			// 
			this->X74->AutoSize = true;
			this->X74->Location = System::Drawing::Point(204, 249);
			this->X74->Name = L"X74";
			this->X74->Size = System::Drawing::Size(45, 17);
			this->X74->TabIndex = 77;
			this->X74->Text = L"X74";
			this->X74->UseVisualStyleBackColor = true;
			// 
			// X73
			// 
			this->X73->AutoSize = true;
			this->X73->Location = System::Drawing::Point(204, 226);
			this->X73->Name = L"X73";
			this->X73->Size = System::Drawing::Size(45, 17);
			this->X73->TabIndex = 76;
			this->X73->Text = L"X73";
			this->X73->UseVisualStyleBackColor = true;
			// 
			// X72
			// 
			this->X72->AutoSize = true;
			this->X72->Location = System::Drawing::Point(204, 203);
			this->X72->Name = L"X72";
			this->X72->Size = System::Drawing::Size(45, 17);
			this->X72->TabIndex = 75;
			this->X72->Text = L"X72";
			this->X72->UseVisualStyleBackColor = true;
			// 
			// X71
			// 
			this->X71->AutoSize = true;
			this->X71->Location = System::Drawing::Point(204, 180);
			this->X71->Name = L"X71";
			this->X71->Size = System::Drawing::Size(45, 17);
			this->X71->TabIndex = 74;
			this->X71->Text = L"X71";
			this->X71->UseVisualStyleBackColor = true;
			// 
			// X70
			// 
			this->X70->AutoSize = true;
			this->X70->Location = System::Drawing::Point(204, 157);
			this->X70->Name = L"X70";
			this->X70->Size = System::Drawing::Size(45, 17);
			this->X70->TabIndex = 73;
			this->X70->Text = L"X70";
			this->X70->UseVisualStyleBackColor = true;
			// 
			// X69
			// 
			this->X69->AutoSize = true;
			this->X69->Location = System::Drawing::Point(204, 134);
			this->X69->Name = L"X69";
			this->X69->Size = System::Drawing::Size(45, 17);
			this->X69->TabIndex = 72;
			this->X69->Text = L"X69";
			this->X69->UseVisualStyleBackColor = true;
			// 
			// X68
			// 
			this->X68->AutoSize = true;
			this->X68->Location = System::Drawing::Point(204, 111);
			this->X68->Name = L"X68";
			this->X68->Size = System::Drawing::Size(45, 17);
			this->X68->TabIndex = 71;
			this->X68->Text = L"X68";
			this->X68->UseVisualStyleBackColor = true;
			// 
			// X67
			// 
			this->X67->AutoSize = true;
			this->X67->Location = System::Drawing::Point(204, 88);
			this->X67->Name = L"X67";
			this->X67->Size = System::Drawing::Size(45, 17);
			this->X67->TabIndex = 70;
			this->X67->Text = L"X67";
			this->X67->UseVisualStyleBackColor = true;
			// 
			// X66
			// 
			this->X66->AutoSize = true;
			this->X66->Location = System::Drawing::Point(204, 65);
			this->X66->Name = L"X66";
			this->X66->Size = System::Drawing::Size(45, 17);
			this->X66->TabIndex = 69;
			this->X66->Text = L"X66";
			this->X66->UseVisualStyleBackColor = true;
			// 
			// X65
			// 
			this->X65->AutoSize = true;
			this->X65->Location = System::Drawing::Point(204, 42);
			this->X65->Name = L"X65";
			this->X65->Size = System::Drawing::Size(45, 17);
			this->X65->TabIndex = 68;
			this->X65->Text = L"X65";
			this->X65->UseVisualStyleBackColor = true;
			// 
			// X64
			// 
			this->X64->AutoSize = true;
			this->X64->Location = System::Drawing::Point(204, 19);
			this->X64->Name = L"X64";
			this->X64->Size = System::Drawing::Size(45, 17);
			this->X64->TabIndex = 67;
			this->X64->Text = L"X64";
			this->X64->UseVisualStyleBackColor = true;
			// 
			// X63
			// 
			this->X63->AutoSize = true;
			this->X63->Location = System::Drawing::Point(153, 364);
			this->X63->Name = L"X63";
			this->X63->Size = System::Drawing::Size(45, 17);
			this->X63->TabIndex = 66;
			this->X63->Text = L"X63";
			this->X63->UseVisualStyleBackColor = true;
			// 
			// X62
			// 
			this->X62->AutoSize = true;
			this->X62->Location = System::Drawing::Point(153, 341);
			this->X62->Name = L"X62";
			this->X62->Size = System::Drawing::Size(45, 17);
			this->X62->TabIndex = 65;
			this->X62->Text = L"X62";
			this->X62->UseVisualStyleBackColor = true;
			// 
			// X61
			// 
			this->X61->AutoSize = true;
			this->X61->Location = System::Drawing::Point(153, 318);
			this->X61->Name = L"X61";
			this->X61->Size = System::Drawing::Size(45, 17);
			this->X61->TabIndex = 64;
			this->X61->Text = L"X61";
			this->X61->UseVisualStyleBackColor = true;
			// 
			// X60
			// 
			this->X60->AutoSize = true;
			this->X60->Location = System::Drawing::Point(153, 295);
			this->X60->Name = L"X60";
			this->X60->Size = System::Drawing::Size(45, 17);
			this->X60->TabIndex = 63;
			this->X60->Text = L"X60";
			this->X60->UseVisualStyleBackColor = true;
			// 
			// X59
			// 
			this->X59->AutoSize = true;
			this->X59->Location = System::Drawing::Point(153, 272);
			this->X59->Name = L"X59";
			this->X59->Size = System::Drawing::Size(45, 17);
			this->X59->TabIndex = 62;
			this->X59->Text = L"X59";
			this->X59->UseVisualStyleBackColor = true;
			// 
			// X58
			// 
			this->X58->AutoSize = true;
			this->X58->Location = System::Drawing::Point(153, 249);
			this->X58->Name = L"X58";
			this->X58->Size = System::Drawing::Size(45, 17);
			this->X58->TabIndex = 61;
			this->X58->Text = L"X58";
			this->X58->UseVisualStyleBackColor = true;
			// 
			// X57
			// 
			this->X57->AutoSize = true;
			this->X57->Location = System::Drawing::Point(153, 226);
			this->X57->Name = L"X57";
			this->X57->Size = System::Drawing::Size(45, 17);
			this->X57->TabIndex = 60;
			this->X57->Text = L"X57";
			this->X57->UseVisualStyleBackColor = true;
			// 
			// X56
			// 
			this->X56->AutoSize = true;
			this->X56->Location = System::Drawing::Point(153, 203);
			this->X56->Name = L"X56";
			this->X56->Size = System::Drawing::Size(45, 17);
			this->X56->TabIndex = 59;
			this->X56->Text = L"X56";
			this->X56->UseVisualStyleBackColor = true;
			// 
			// X55
			// 
			this->X55->AutoSize = true;
			this->X55->Location = System::Drawing::Point(153, 180);
			this->X55->Name = L"X55";
			this->X55->Size = System::Drawing::Size(45, 17);
			this->X55->TabIndex = 58;
			this->X55->Text = L"X55";
			this->X55->UseVisualStyleBackColor = true;
			// 
			// X54
			// 
			this->X54->AutoSize = true;
			this->X54->Location = System::Drawing::Point(153, 157);
			this->X54->Name = L"X54";
			this->X54->Size = System::Drawing::Size(45, 17);
			this->X54->TabIndex = 57;
			this->X54->Text = L"X54";
			this->X54->UseVisualStyleBackColor = true;
			// 
			// X53
			// 
			this->X53->AutoSize = true;
			this->X53->Location = System::Drawing::Point(153, 134);
			this->X53->Name = L"X53";
			this->X53->Size = System::Drawing::Size(45, 17);
			this->X53->TabIndex = 56;
			this->X53->Text = L"X53";
			this->X53->UseVisualStyleBackColor = true;
			// 
			// X52
			// 
			this->X52->AutoSize = true;
			this->X52->Location = System::Drawing::Point(153, 111);
			this->X52->Name = L"X52";
			this->X52->Size = System::Drawing::Size(45, 17);
			this->X52->TabIndex = 55;
			this->X52->Text = L"X52";
			this->X52->UseVisualStyleBackColor = true;
			// 
			// X51
			// 
			this->X51->AutoSize = true;
			this->X51->Location = System::Drawing::Point(153, 88);
			this->X51->Name = L"X51";
			this->X51->Size = System::Drawing::Size(45, 17);
			this->X51->TabIndex = 54;
			this->X51->Text = L"X51";
			this->X51->UseVisualStyleBackColor = true;
			// 
			// X50
			// 
			this->X50->AutoSize = true;
			this->X50->Location = System::Drawing::Point(153, 65);
			this->X50->Name = L"X50";
			this->X50->Size = System::Drawing::Size(45, 17);
			this->X50->TabIndex = 53;
			this->X50->Text = L"X50";
			this->X50->UseVisualStyleBackColor = true;
			// 
			// X49
			// 
			this->X49->AutoSize = true;
			this->X49->Location = System::Drawing::Point(153, 42);
			this->X49->Name = L"X49";
			this->X49->Size = System::Drawing::Size(45, 17);
			this->X49->TabIndex = 52;
			this->X49->Text = L"X49";
			this->X49->UseVisualStyleBackColor = true;
			// 
			// X48
			// 
			this->X48->AutoSize = true;
			this->X48->Location = System::Drawing::Point(153, 19);
			this->X48->Name = L"X48";
			this->X48->Size = System::Drawing::Size(45, 17);
			this->X48->TabIndex = 51;
			this->X48->Text = L"X48";
			this->X48->UseVisualStyleBackColor = true;
			// 
			// X32
			// 
			this->X32->AutoSize = true;
			this->X32->Location = System::Drawing::Point(102, 19);
			this->X32->Name = L"X32";
			this->X32->Size = System::Drawing::Size(45, 17);
			this->X32->TabIndex = 50;
			this->X32->Text = L"X32";
			this->X32->UseVisualStyleBackColor = true;
			// 
			// X47
			// 
			this->X47->AutoSize = true;
			this->X47->Location = System::Drawing::Point(102, 364);
			this->X47->Name = L"X47";
			this->X47->Size = System::Drawing::Size(45, 17);
			this->X47->TabIndex = 49;
			this->X47->Text = L"X47";
			this->X47->UseVisualStyleBackColor = true;
			// 
			// X46
			// 
			this->X46->AutoSize = true;
			this->X46->Location = System::Drawing::Point(102, 341);
			this->X46->Name = L"X46";
			this->X46->Size = System::Drawing::Size(45, 17);
			this->X46->TabIndex = 48;
			this->X46->Text = L"X46";
			this->X46->UseVisualStyleBackColor = true;
			// 
			// X45
			// 
			this->X45->AutoSize = true;
			this->X45->Location = System::Drawing::Point(102, 318);
			this->X45->Name = L"X45";
			this->X45->Size = System::Drawing::Size(45, 17);
			this->X45->TabIndex = 47;
			this->X45->Text = L"X45";
			this->X45->UseVisualStyleBackColor = true;
			// 
			// X44
			// 
			this->X44->AutoSize = true;
			this->X44->Location = System::Drawing::Point(102, 295);
			this->X44->Name = L"X44";
			this->X44->Size = System::Drawing::Size(45, 17);
			this->X44->TabIndex = 46;
			this->X44->Text = L"X44";
			this->X44->UseVisualStyleBackColor = true;
			// 
			// X43
			// 
			this->X43->AutoSize = true;
			this->X43->Location = System::Drawing::Point(102, 272);
			this->X43->Name = L"X43";
			this->X43->Size = System::Drawing::Size(45, 17);
			this->X43->TabIndex = 45;
			this->X43->Text = L"X43";
			this->X43->UseVisualStyleBackColor = true;
			// 
			// X42
			// 
			this->X42->AutoSize = true;
			this->X42->Location = System::Drawing::Point(102, 249);
			this->X42->Name = L"X42";
			this->X42->Size = System::Drawing::Size(45, 17);
			this->X42->TabIndex = 44;
			this->X42->Text = L"X42";
			this->X42->UseVisualStyleBackColor = true;
			// 
			// X41
			// 
			this->X41->AutoSize = true;
			this->X41->Location = System::Drawing::Point(102, 226);
			this->X41->Name = L"X41";
			this->X41->Size = System::Drawing::Size(45, 17);
			this->X41->TabIndex = 43;
			this->X41->Text = L"X41";
			this->X41->UseVisualStyleBackColor = true;
			// 
			// X40
			// 
			this->X40->AutoSize = true;
			this->X40->Location = System::Drawing::Point(102, 203);
			this->X40->Name = L"X40";
			this->X40->Size = System::Drawing::Size(45, 17);
			this->X40->TabIndex = 42;
			this->X40->Text = L"X40";
			this->X40->UseVisualStyleBackColor = true;
			// 
			// X39
			// 
			this->X39->AutoSize = true;
			this->X39->Location = System::Drawing::Point(102, 180);
			this->X39->Name = L"X39";
			this->X39->Size = System::Drawing::Size(45, 17);
			this->X39->TabIndex = 41;
			this->X39->Text = L"X39";
			this->X39->UseVisualStyleBackColor = true;
			// 
			// X38
			// 
			this->X38->AutoSize = true;
			this->X38->Location = System::Drawing::Point(102, 157);
			this->X38->Name = L"X38";
			this->X38->Size = System::Drawing::Size(45, 17);
			this->X38->TabIndex = 40;
			this->X38->Text = L"X38";
			this->X38->UseVisualStyleBackColor = true;
			// 
			// X37
			// 
			this->X37->AutoSize = true;
			this->X37->Location = System::Drawing::Point(102, 134);
			this->X37->Name = L"X37";
			this->X37->Size = System::Drawing::Size(45, 17);
			this->X37->TabIndex = 39;
			this->X37->Text = L"X37";
			this->X37->UseVisualStyleBackColor = true;
			// 
			// X36
			// 
			this->X36->AutoSize = true;
			this->X36->Location = System::Drawing::Point(102, 111);
			this->X36->Name = L"X36";
			this->X36->Size = System::Drawing::Size(45, 17);
			this->X36->TabIndex = 38;
			this->X36->Text = L"X36";
			this->X36->UseVisualStyleBackColor = true;
			// 
			// X35
			// 
			this->X35->AutoSize = true;
			this->X35->Location = System::Drawing::Point(102, 88);
			this->X35->Name = L"X35";
			this->X35->Size = System::Drawing::Size(45, 17);
			this->X35->TabIndex = 37;
			this->X35->Text = L"X35";
			this->X35->UseVisualStyleBackColor = true;
			// 
			// X34
			// 
			this->X34->AutoSize = true;
			this->X34->Location = System::Drawing::Point(102, 65);
			this->X34->Name = L"X34";
			this->X34->Size = System::Drawing::Size(45, 17);
			this->X34->TabIndex = 36;
			this->X34->Text = L"X34";
			this->X34->UseVisualStyleBackColor = true;
			// 
			// X33
			// 
			this->X33->AutoSize = true;
			this->X33->Location = System::Drawing::Point(102, 42);
			this->X33->Name = L"X33";
			this->X33->Size = System::Drawing::Size(45, 17);
			this->X33->TabIndex = 35;
			this->X33->Text = L"X33";
			this->X33->UseVisualStyleBackColor = true;
			// 
			// X16
			// 
			this->X16->AutoSize = true;
			this->X16->Location = System::Drawing::Point(51, 19);
			this->X16->Name = L"X16";
			this->X16->Size = System::Drawing::Size(45, 17);
			this->X16->TabIndex = 34;
			this->X16->Text = L"X16";
			this->X16->UseVisualStyleBackColor = true;
			// 
			// X31
			// 
			this->X31->AutoSize = true;
			this->X31->Location = System::Drawing::Point(51, 364);
			this->X31->Name = L"X31";
			this->X31->Size = System::Drawing::Size(45, 17);
			this->X31->TabIndex = 33;
			this->X31->Text = L"X31";
			this->X31->UseVisualStyleBackColor = true;
			// 
			// X0
			// 
			this->X0->AutoSize = true;
			this->X0->Location = System::Drawing::Point(6, 19);
			this->X0->Name = L"X0";
			this->X0->Size = System::Drawing::Size(39, 17);
			this->X0->TabIndex = 18;
			this->X0->Text = L"X0";
			this->X0->UseVisualStyleBackColor = true;
			// 
			// X30
			// 
			this->X30->AutoSize = true;
			this->X30->Location = System::Drawing::Point(51, 341);
			this->X30->Name = L"X30";
			this->X30->Size = System::Drawing::Size(45, 17);
			this->X30->TabIndex = 32;
			this->X30->Text = L"X30";
			this->X30->UseVisualStyleBackColor = true;
			// 
			// X15
			// 
			this->X15->AutoSize = true;
			this->X15->Location = System::Drawing::Point(6, 364);
			this->X15->Name = L"X15";
			this->X15->Size = System::Drawing::Size(45, 17);
			this->X15->TabIndex = 17;
			this->X15->Text = L"X15";
			this->X15->UseVisualStyleBackColor = true;
			// 
			// X29
			// 
			this->X29->AutoSize = true;
			this->X29->Location = System::Drawing::Point(51, 318);
			this->X29->Name = L"X29";
			this->X29->Size = System::Drawing::Size(45, 17);
			this->X29->TabIndex = 31;
			this->X29->Text = L"X29";
			this->X29->UseVisualStyleBackColor = true;
			// 
			// X14
			// 
			this->X14->AutoSize = true;
			this->X14->Location = System::Drawing::Point(6, 341);
			this->X14->Name = L"X14";
			this->X14->Size = System::Drawing::Size(45, 17);
			this->X14->TabIndex = 16;
			this->X14->Text = L"X14";
			this->X14->UseVisualStyleBackColor = true;
			// 
			// X28
			// 
			this->X28->AutoSize = true;
			this->X28->Location = System::Drawing::Point(51, 295);
			this->X28->Name = L"X28";
			this->X28->Size = System::Drawing::Size(45, 17);
			this->X28->TabIndex = 30;
			this->X28->Text = L"X28";
			this->X28->UseVisualStyleBackColor = true;
			// 
			// X13
			// 
			this->X13->AutoSize = true;
			this->X13->Location = System::Drawing::Point(6, 318);
			this->X13->Name = L"X13";
			this->X13->Size = System::Drawing::Size(45, 17);
			this->X13->TabIndex = 15;
			this->X13->Text = L"X13";
			this->X13->UseVisualStyleBackColor = true;
			// 
			// X27
			// 
			this->X27->AutoSize = true;
			this->X27->Location = System::Drawing::Point(51, 272);
			this->X27->Name = L"X27";
			this->X27->Size = System::Drawing::Size(45, 17);
			this->X27->TabIndex = 29;
			this->X27->Text = L"X27";
			this->X27->UseVisualStyleBackColor = true;
			// 
			// X12
			// 
			this->X12->AutoSize = true;
			this->X12->Location = System::Drawing::Point(6, 295);
			this->X12->Name = L"X12";
			this->X12->Size = System::Drawing::Size(45, 17);
			this->X12->TabIndex = 14;
			this->X12->Text = L"X12";
			this->X12->UseVisualStyleBackColor = true;
			// 
			// X26
			// 
			this->X26->AutoSize = true;
			this->X26->Location = System::Drawing::Point(51, 249);
			this->X26->Name = L"X26";
			this->X26->Size = System::Drawing::Size(45, 17);
			this->X26->TabIndex = 28;
			this->X26->Text = L"X26";
			this->X26->UseVisualStyleBackColor = true;
			// 
			// X11
			// 
			this->X11->AutoSize = true;
			this->X11->Location = System::Drawing::Point(6, 272);
			this->X11->Name = L"X11";
			this->X11->Size = System::Drawing::Size(45, 17);
			this->X11->TabIndex = 13;
			this->X11->Text = L"X11";
			this->X11->UseVisualStyleBackColor = true;
			// 
			// X25
			// 
			this->X25->AutoSize = true;
			this->X25->Location = System::Drawing::Point(51, 226);
			this->X25->Name = L"X25";
			this->X25->Size = System::Drawing::Size(45, 17);
			this->X25->TabIndex = 27;
			this->X25->Text = L"X25";
			this->X25->UseVisualStyleBackColor = true;
			// 
			// X10
			// 
			this->X10->AutoSize = true;
			this->X10->Location = System::Drawing::Point(6, 249);
			this->X10->Name = L"X10";
			this->X10->Size = System::Drawing::Size(45, 17);
			this->X10->TabIndex = 12;
			this->X10->Text = L"X10";
			this->X10->UseVisualStyleBackColor = true;
			// 
			// X24
			// 
			this->X24->AutoSize = true;
			this->X24->Location = System::Drawing::Point(51, 203);
			this->X24->Name = L"X24";
			this->X24->Size = System::Drawing::Size(45, 17);
			this->X24->TabIndex = 26;
			this->X24->Text = L"X24";
			this->X24->UseVisualStyleBackColor = true;
			// 
			// X9
			// 
			this->X9->AutoSize = true;
			this->X9->Location = System::Drawing::Point(6, 226);
			this->X9->Name = L"X9";
			this->X9->Size = System::Drawing::Size(39, 17);
			this->X9->TabIndex = 11;
			this->X9->Text = L"X9";
			this->X9->UseVisualStyleBackColor = true;
			// 
			// X23
			// 
			this->X23->AutoSize = true;
			this->X23->Location = System::Drawing::Point(51, 180);
			this->X23->Name = L"X23";
			this->X23->Size = System::Drawing::Size(45, 17);
			this->X23->TabIndex = 25;
			this->X23->Text = L"X23";
			this->X23->UseVisualStyleBackColor = true;
			// 
			// X8
			// 
			this->X8->AutoSize = true;
			this->X8->Location = System::Drawing::Point(6, 203);
			this->X8->Name = L"X8";
			this->X8->Size = System::Drawing::Size(39, 17);
			this->X8->TabIndex = 10;
			this->X8->Text = L"X8";
			this->X8->UseVisualStyleBackColor = true;
			// 
			// X22
			// 
			this->X22->AutoSize = true;
			this->X22->Location = System::Drawing::Point(51, 157);
			this->X22->Name = L"X22";
			this->X22->Size = System::Drawing::Size(45, 17);
			this->X22->TabIndex = 24;
			this->X22->Text = L"X22";
			this->X22->UseVisualStyleBackColor = true;
			// 
			// X7
			// 
			this->X7->AutoSize = true;
			this->X7->Location = System::Drawing::Point(6, 180);
			this->X7->Name = L"X7";
			this->X7->Size = System::Drawing::Size(39, 17);
			this->X7->TabIndex = 9;
			this->X7->Text = L"X7";
			this->X7->UseVisualStyleBackColor = true;
			// 
			// X21
			// 
			this->X21->AutoSize = true;
			this->X21->Location = System::Drawing::Point(51, 134);
			this->X21->Name = L"X21";
			this->X21->Size = System::Drawing::Size(45, 17);
			this->X21->TabIndex = 23;
			this->X21->Text = L"X21";
			this->X21->UseVisualStyleBackColor = true;
			// 
			// X6
			// 
			this->X6->AutoSize = true;
			this->X6->Location = System::Drawing::Point(6, 157);
			this->X6->Name = L"X6";
			this->X6->Size = System::Drawing::Size(39, 17);
			this->X6->TabIndex = 8;
			this->X6->Text = L"X6";
			this->X6->UseVisualStyleBackColor = true;
			// 
			// X20
			// 
			this->X20->AutoSize = true;
			this->X20->Location = System::Drawing::Point(51, 111);
			this->X20->Name = L"X20";
			this->X20->Size = System::Drawing::Size(45, 17);
			this->X20->TabIndex = 22;
			this->X20->Text = L"X20";
			this->X20->UseVisualStyleBackColor = true;
			// 
			// X5
			// 
			this->X5->AutoSize = true;
			this->X5->Location = System::Drawing::Point(6, 134);
			this->X5->Name = L"X5";
			this->X5->Size = System::Drawing::Size(39, 17);
			this->X5->TabIndex = 7;
			this->X5->Text = L"X5";
			this->X5->UseVisualStyleBackColor = true;
			// 
			// X19
			// 
			this->X19->AutoSize = true;
			this->X19->Location = System::Drawing::Point(51, 88);
			this->X19->Name = L"X19";
			this->X19->Size = System::Drawing::Size(45, 17);
			this->X19->TabIndex = 21;
			this->X19->Text = L"X19";
			this->X19->UseVisualStyleBackColor = true;
			// 
			// X4
			// 
			this->X4->AutoSize = true;
			this->X4->Location = System::Drawing::Point(6, 111);
			this->X4->Name = L"X4";
			this->X4->Size = System::Drawing::Size(39, 17);
			this->X4->TabIndex = 6;
			this->X4->Text = L"X4";
			this->X4->UseVisualStyleBackColor = true;
			// 
			// X18
			// 
			this->X18->AutoSize = true;
			this->X18->Location = System::Drawing::Point(51, 65);
			this->X18->Name = L"X18";
			this->X18->Size = System::Drawing::Size(45, 17);
			this->X18->TabIndex = 20;
			this->X18->Text = L"X18";
			this->X18->UseVisualStyleBackColor = true;
			// 
			// X3
			// 
			this->X3->AutoSize = true;
			this->X3->Location = System::Drawing::Point(6, 88);
			this->X3->Name = L"X3";
			this->X3->Size = System::Drawing::Size(39, 17);
			this->X3->TabIndex = 5;
			this->X3->Text = L"X3";
			this->X3->UseVisualStyleBackColor = true;
			// 
			// X17
			// 
			this->X17->AutoSize = true;
			this->X17->Location = System::Drawing::Point(51, 42);
			this->X17->Name = L"X17";
			this->X17->Size = System::Drawing::Size(45, 17);
			this->X17->TabIndex = 19;
			this->X17->Text = L"X17";
			this->X17->UseVisualStyleBackColor = true;
			// 
			// X2
			// 
			this->X2->AutoSize = true;
			this->X2->Location = System::Drawing::Point(6, 65);
			this->X2->Name = L"X2";
			this->X2->Size = System::Drawing::Size(39, 17);
			this->X2->TabIndex = 4;
			this->X2->Text = L"X2";
			this->X2->UseVisualStyleBackColor = true;
			// 
			// X1
			// 
			this->X1->AutoSize = true;
			this->X1->Location = System::Drawing::Point(6, 42);
			this->X1->Name = L"X1";
			this->X1->Size = System::Drawing::Size(39, 17);
			this->X1->TabIndex = 0;
			this->X1->Text = L"X1";
			this->X1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(655, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1009, 421);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->MainTextBox);
			this->Controls->Add(this->button1);
			this->Name = L"Main";
			this->Text = L"Main";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		
		SM4* SM4s;

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ s = gcnew	String(SM4s->SM4Processing().str().c_str());
		MainTextBox->Text = s;
		
	}
	};
}
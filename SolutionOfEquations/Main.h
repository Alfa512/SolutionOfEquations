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
		private: System::Windows::Forms::CheckBox^  Y0;
	private: System::Windows::Forms::CheckBox^  Y15;


	private: System::Windows::Forms::CheckBox^  Y14;

	private: System::Windows::Forms::CheckBox^  Y13;

	private: System::Windows::Forms::CheckBox^  Y12;

	private: System::Windows::Forms::CheckBox^  Y11;

	private: System::Windows::Forms::CheckBox^  Y10;
	private: System::Windows::Forms::CheckBox^  Y9;
	private: System::Windows::Forms::CheckBox^  Y8;
	private: System::Windows::Forms::CheckBox^  Y7;
	private: System::Windows::Forms::CheckBox^  Y6;
	private: System::Windows::Forms::CheckBox^  Y5;
	private: System::Windows::Forms::CheckBox^  Y4;
	private: System::Windows::Forms::CheckBox^  Y3;
	private: System::Windows::Forms::CheckBox^  Y2;



	private: System::Windows::Forms::CheckBox^  Y1;
	private: System::Windows::Forms::CheckBox^  Y32;
	private: System::Windows::Forms::CheckBox^  Y47;
	private: System::Windows::Forms::CheckBox^  Y46;




	private: System::Windows::Forms::CheckBox^  Y45;
	private: System::Windows::Forms::CheckBox^  Y44;
	private: System::Windows::Forms::CheckBox^  Y43;
	private: System::Windows::Forms::CheckBox^  Y42;
	private: System::Windows::Forms::CheckBox^  Y41;
	private: System::Windows::Forms::CheckBox^  Y40;
	private: System::Windows::Forms::CheckBox^  Y39;
	private: System::Windows::Forms::CheckBox^  Y38;
	private: System::Windows::Forms::CheckBox^  Y37;
	private: System::Windows::Forms::CheckBox^  Y36;
	private: System::Windows::Forms::CheckBox^  Y35;
	private: System::Windows::Forms::CheckBox^  Y34;
	private: System::Windows::Forms::CheckBox^  Y33;
	private: System::Windows::Forms::CheckBox^  Y16;
	private: System::Windows::Forms::CheckBox^  Y31;
	private: System::Windows::Forms::CheckBox^  Y30;


	private: System::Windows::Forms::CheckBox^  Y29;
	private: System::Windows::Forms::CheckBox^  Y28;
	private: System::Windows::Forms::CheckBox^  Y27;
	private: System::Windows::Forms::CheckBox^  Y26;
	private: System::Windows::Forms::CheckBox^  Y25;
	private: System::Windows::Forms::CheckBox^  Y24;
	private: System::Windows::Forms::CheckBox^  Y23;
	private: System::Windows::Forms::CheckBox^  Y22;
	private: System::Windows::Forms::CheckBox^  Y21;
	private: System::Windows::Forms::CheckBox^  Y20;
	private: System::Windows::Forms::CheckBox^  Y19;
	private: System::Windows::Forms::CheckBox^  Y18;
	private: System::Windows::Forms::CheckBox^  Y17;
	private: System::Windows::Forms::CheckBox^  Y63;
	private: System::Windows::Forms::CheckBox^  Y62;
	private: System::Windows::Forms::CheckBox^  Y61;
	private: System::Windows::Forms::CheckBox^  Y60;
	private: System::Windows::Forms::CheckBox^  Y59;
	private: System::Windows::Forms::CheckBox^  Y58;
	private: System::Windows::Forms::CheckBox^  Y57;
	private: System::Windows::Forms::CheckBox^  Y56;
	private: System::Windows::Forms::CheckBox^  Y55;
	private: System::Windows::Forms::CheckBox^  Y54;
	private: System::Windows::Forms::CheckBox^  Y53;
	private: System::Windows::Forms::CheckBox^  Y52;
	private: System::Windows::Forms::CheckBox^  Y51;
	private: System::Windows::Forms::CheckBox^  Y50;
	private: System::Windows::Forms::CheckBox^  Y49;
	private: System::Windows::Forms::CheckBox^  Y48;
private: System::Windows::Forms::CheckBox^  Y127;
private: System::Windows::Forms::CheckBox^  Y126;
private: System::Windows::Forms::CheckBox^  Y125;
private: System::Windows::Forms::CheckBox^  Y124;
private: System::Windows::Forms::CheckBox^  Y123;
private: System::Windows::Forms::CheckBox^  Y122;
private: System::Windows::Forms::CheckBox^  Y121;
private: System::Windows::Forms::CheckBox^  Y120;
private: System::Windows::Forms::CheckBox^  Y119;
private: System::Windows::Forms::CheckBox^  Y118;
private: System::Windows::Forms::CheckBox^  Y117;
private: System::Windows::Forms::CheckBox^  Y116;
private: System::Windows::Forms::CheckBox^  Y115;
private: System::Windows::Forms::CheckBox^  Y114;
private: System::Windows::Forms::CheckBox^  Y113;
private: System::Windows::Forms::CheckBox^  Y112;
private: System::Windows::Forms::CheckBox^  Y111;
private: System::Windows::Forms::CheckBox^  Y110;
private: System::Windows::Forms::CheckBox^  Y109;
private: System::Windows::Forms::CheckBox^  Y108;
private: System::Windows::Forms::CheckBox^  Y107;
private: System::Windows::Forms::CheckBox^  Y106;
private: System::Windows::Forms::CheckBox^  Y105;
private: System::Windows::Forms::CheckBox^  Y104;
private: System::Windows::Forms::CheckBox^  Y103;
private: System::Windows::Forms::CheckBox^  Y102;
private: System::Windows::Forms::CheckBox^  Y101;
private: System::Windows::Forms::CheckBox^  Y100;
private: System::Windows::Forms::CheckBox^  Y99;
private: System::Windows::Forms::CheckBox^  Y98;
private: System::Windows::Forms::CheckBox^  Y97;
private: System::Windows::Forms::CheckBox^  Y96;
private: System::Windows::Forms::CheckBox^  Y95;
private: System::Windows::Forms::CheckBox^  Y94;
private: System::Windows::Forms::CheckBox^  Y93;
private: System::Windows::Forms::CheckBox^  Y92;
private: System::Windows::Forms::CheckBox^  Y91;
private: System::Windows::Forms::CheckBox^  Y90;
private: System::Windows::Forms::CheckBox^  Y89;
private: System::Windows::Forms::CheckBox^  Y88;
private: System::Windows::Forms::CheckBox^  Y87;
private: System::Windows::Forms::CheckBox^  Y86;
private: System::Windows::Forms::CheckBox^  Y85;
private: System::Windows::Forms::CheckBox^  Y84;
private: System::Windows::Forms::CheckBox^  Y83;
private: System::Windows::Forms::CheckBox^  Y82;
private: System::Windows::Forms::CheckBox^  Y81;
private: System::Windows::Forms::CheckBox^  Y80;
private: System::Windows::Forms::CheckBox^  Y79;
private: System::Windows::Forms::CheckBox^  Y78;
private: System::Windows::Forms::CheckBox^  Y77;
private: System::Windows::Forms::CheckBox^  Y76;
private: System::Windows::Forms::CheckBox^  Y75;
private: System::Windows::Forms::CheckBox^  Y74;
private: System::Windows::Forms::CheckBox^  Y73;
private: System::Windows::Forms::CheckBox^  Y72;
private: System::Windows::Forms::CheckBox^  Y71;
private: System::Windows::Forms::CheckBox^  Y70;
private: System::Windows::Forms::CheckBox^  Y69;
private: System::Windows::Forms::CheckBox^  Y68;
private: System::Windows::Forms::CheckBox^  Y67;
private: System::Windows::Forms::CheckBox^  Y66;
private: System::Windows::Forms::CheckBox^  Y65;
private: System::Windows::Forms::CheckBox^  Y64;
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
			this->Y127 = (gcnew System::Windows::Forms::CheckBox());
			this->Y126 = (gcnew System::Windows::Forms::CheckBox());
			this->Y125 = (gcnew System::Windows::Forms::CheckBox());
			this->Y124 = (gcnew System::Windows::Forms::CheckBox());
			this->Y123 = (gcnew System::Windows::Forms::CheckBox());
			this->Y122 = (gcnew System::Windows::Forms::CheckBox());
			this->Y121 = (gcnew System::Windows::Forms::CheckBox());
			this->Y120 = (gcnew System::Windows::Forms::CheckBox());
			this->Y119 = (gcnew System::Windows::Forms::CheckBox());
			this->Y118 = (gcnew System::Windows::Forms::CheckBox());
			this->Y117 = (gcnew System::Windows::Forms::CheckBox());
			this->Y116 = (gcnew System::Windows::Forms::CheckBox());
			this->Y115 = (gcnew System::Windows::Forms::CheckBox());
			this->Y114 = (gcnew System::Windows::Forms::CheckBox());
			this->Y113 = (gcnew System::Windows::Forms::CheckBox());
			this->Y112 = (gcnew System::Windows::Forms::CheckBox());
			this->Y111 = (gcnew System::Windows::Forms::CheckBox());
			this->Y110 = (gcnew System::Windows::Forms::CheckBox());
			this->Y109 = (gcnew System::Windows::Forms::CheckBox());
			this->Y108 = (gcnew System::Windows::Forms::CheckBox());
			this->Y107 = (gcnew System::Windows::Forms::CheckBox());
			this->Y106 = (gcnew System::Windows::Forms::CheckBox());
			this->Y105 = (gcnew System::Windows::Forms::CheckBox());
			this->Y104 = (gcnew System::Windows::Forms::CheckBox());
			this->Y103 = (gcnew System::Windows::Forms::CheckBox());
			this->Y102 = (gcnew System::Windows::Forms::CheckBox());
			this->Y101 = (gcnew System::Windows::Forms::CheckBox());
			this->Y100 = (gcnew System::Windows::Forms::CheckBox());
			this->Y99 = (gcnew System::Windows::Forms::CheckBox());
			this->Y98 = (gcnew System::Windows::Forms::CheckBox());
			this->Y97 = (gcnew System::Windows::Forms::CheckBox());
			this->Y96 = (gcnew System::Windows::Forms::CheckBox());
			this->Y95 = (gcnew System::Windows::Forms::CheckBox());
			this->Y94 = (gcnew System::Windows::Forms::CheckBox());
			this->Y93 = (gcnew System::Windows::Forms::CheckBox());
			this->Y92 = (gcnew System::Windows::Forms::CheckBox());
			this->Y91 = (gcnew System::Windows::Forms::CheckBox());
			this->Y90 = (gcnew System::Windows::Forms::CheckBox());
			this->Y89 = (gcnew System::Windows::Forms::CheckBox());
			this->Y88 = (gcnew System::Windows::Forms::CheckBox());
			this->Y87 = (gcnew System::Windows::Forms::CheckBox());
			this->Y86 = (gcnew System::Windows::Forms::CheckBox());
			this->Y85 = (gcnew System::Windows::Forms::CheckBox());
			this->Y84 = (gcnew System::Windows::Forms::CheckBox());
			this->Y83 = (gcnew System::Windows::Forms::CheckBox());
			this->Y82 = (gcnew System::Windows::Forms::CheckBox());
			this->Y81 = (gcnew System::Windows::Forms::CheckBox());
			this->Y80 = (gcnew System::Windows::Forms::CheckBox());
			this->Y79 = (gcnew System::Windows::Forms::CheckBox());
			this->Y78 = (gcnew System::Windows::Forms::CheckBox());
			this->Y77 = (gcnew System::Windows::Forms::CheckBox());
			this->Y76 = (gcnew System::Windows::Forms::CheckBox());
			this->Y75 = (gcnew System::Windows::Forms::CheckBox());
			this->Y74 = (gcnew System::Windows::Forms::CheckBox());
			this->Y73 = (gcnew System::Windows::Forms::CheckBox());
			this->Y72 = (gcnew System::Windows::Forms::CheckBox());
			this->Y71 = (gcnew System::Windows::Forms::CheckBox());
			this->Y70 = (gcnew System::Windows::Forms::CheckBox());
			this->Y69 = (gcnew System::Windows::Forms::CheckBox());
			this->Y68 = (gcnew System::Windows::Forms::CheckBox());
			this->Y67 = (gcnew System::Windows::Forms::CheckBox());
			this->Y66 = (gcnew System::Windows::Forms::CheckBox());
			this->Y65 = (gcnew System::Windows::Forms::CheckBox());
			this->Y64 = (gcnew System::Windows::Forms::CheckBox());
			this->Y63 = (gcnew System::Windows::Forms::CheckBox());
			this->Y62 = (gcnew System::Windows::Forms::CheckBox());
			this->Y61 = (gcnew System::Windows::Forms::CheckBox());
			this->Y60 = (gcnew System::Windows::Forms::CheckBox());
			this->Y59 = (gcnew System::Windows::Forms::CheckBox());
			this->Y58 = (gcnew System::Windows::Forms::CheckBox());
			this->Y57 = (gcnew System::Windows::Forms::CheckBox());
			this->Y56 = (gcnew System::Windows::Forms::CheckBox());
			this->Y55 = (gcnew System::Windows::Forms::CheckBox());
			this->Y54 = (gcnew System::Windows::Forms::CheckBox());
			this->Y53 = (gcnew System::Windows::Forms::CheckBox());
			this->Y52 = (gcnew System::Windows::Forms::CheckBox());
			this->Y51 = (gcnew System::Windows::Forms::CheckBox());
			this->Y50 = (gcnew System::Windows::Forms::CheckBox());
			this->Y49 = (gcnew System::Windows::Forms::CheckBox());
			this->Y48 = (gcnew System::Windows::Forms::CheckBox());
			this->Y32 = (gcnew System::Windows::Forms::CheckBox());
			this->Y47 = (gcnew System::Windows::Forms::CheckBox());
			this->Y46 = (gcnew System::Windows::Forms::CheckBox());
			this->Y45 = (gcnew System::Windows::Forms::CheckBox());
			this->Y44 = (gcnew System::Windows::Forms::CheckBox());
			this->Y43 = (gcnew System::Windows::Forms::CheckBox());
			this->Y42 = (gcnew System::Windows::Forms::CheckBox());
			this->Y41 = (gcnew System::Windows::Forms::CheckBox());
			this->Y40 = (gcnew System::Windows::Forms::CheckBox());
			this->Y39 = (gcnew System::Windows::Forms::CheckBox());
			this->Y38 = (gcnew System::Windows::Forms::CheckBox());
			this->Y37 = (gcnew System::Windows::Forms::CheckBox());
			this->Y36 = (gcnew System::Windows::Forms::CheckBox());
			this->Y35 = (gcnew System::Windows::Forms::CheckBox());
			this->Y34 = (gcnew System::Windows::Forms::CheckBox());
			this->Y33 = (gcnew System::Windows::Forms::CheckBox());
			this->Y16 = (gcnew System::Windows::Forms::CheckBox());
			this->Y31 = (gcnew System::Windows::Forms::CheckBox());
			this->Y0 = (gcnew System::Windows::Forms::CheckBox());
			this->Y30 = (gcnew System::Windows::Forms::CheckBox());
			this->Y15 = (gcnew System::Windows::Forms::CheckBox());
			this->Y29 = (gcnew System::Windows::Forms::CheckBox());
			this->Y14 = (gcnew System::Windows::Forms::CheckBox());
			this->Y28 = (gcnew System::Windows::Forms::CheckBox());
			this->Y13 = (gcnew System::Windows::Forms::CheckBox());
			this->Y27 = (gcnew System::Windows::Forms::CheckBox());
			this->Y12 = (gcnew System::Windows::Forms::CheckBox());
			this->Y26 = (gcnew System::Windows::Forms::CheckBox());
			this->Y11 = (gcnew System::Windows::Forms::CheckBox());
			this->Y25 = (gcnew System::Windows::Forms::CheckBox());
			this->Y10 = (gcnew System::Windows::Forms::CheckBox());
			this->Y24 = (gcnew System::Windows::Forms::CheckBox());
			this->Y9 = (gcnew System::Windows::Forms::CheckBox());
			this->Y23 = (gcnew System::Windows::Forms::CheckBox());
			this->Y8 = (gcnew System::Windows::Forms::CheckBox());
			this->Y22 = (gcnew System::Windows::Forms::CheckBox());
			this->Y7 = (gcnew System::Windows::Forms::CheckBox());
			this->Y21 = (gcnew System::Windows::Forms::CheckBox());
			this->Y6 = (gcnew System::Windows::Forms::CheckBox());
			this->Y20 = (gcnew System::Windows::Forms::CheckBox());
			this->Y5 = (gcnew System::Windows::Forms::CheckBox());
			this->Y19 = (gcnew System::Windows::Forms::CheckBox());
			this->Y4 = (gcnew System::Windows::Forms::CheckBox());
			this->Y18 = (gcnew System::Windows::Forms::CheckBox());
			this->Y3 = (gcnew System::Windows::Forms::CheckBox());
			this->Y17 = (gcnew System::Windows::Forms::CheckBox());
			this->Y2 = (gcnew System::Windows::Forms::CheckBox());
			this->Y1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			// Y127
			// 
			this->Y127->AutoSize = true;
			this->Y127->Location = System::Drawing::Point(363, 364);
			this->Y127->Name = L"Y127";
			this->Y127->Size = System::Drawing::Size(51, 17);
			this->Y127->TabIndex = 130;
			this->Y127->Text = L"Y127";
			this->Y127->UseVisualStyleBackColor = true;
			// 
			// Y126
			// 
			this->Y126->AutoSize = true;
			this->Y126->Location = System::Drawing::Point(363, 341);
			this->Y126->Name = L"Y126";
			this->Y126->Size = System::Drawing::Size(51, 17);
			this->Y126->TabIndex = 129;
			this->Y126->Text = L"Y126";
			this->Y126->UseVisualStyleBackColor = true;
			// 
			// Y125
			// 
			this->Y125->AutoSize = true;
			this->Y125->Location = System::Drawing::Point(363, 318);
			this->Y125->Name = L"Y125";
			this->Y125->Size = System::Drawing::Size(51, 17);
			this->Y125->TabIndex = 128;
			this->Y125->Text = L"Y125";
			this->Y125->UseVisualStyleBackColor = true;
			// 
			// Y124
			// 
			this->Y124->AutoSize = true;
			this->Y124->Location = System::Drawing::Point(363, 295);
			this->Y124->Name = L"Y124";
			this->Y124->Size = System::Drawing::Size(51, 17);
			this->Y124->TabIndex = 127;
			this->Y124->Text = L"Y124";
			this->Y124->UseVisualStyleBackColor = true;
			// 
			// Y123
			// 
			this->Y123->AutoSize = true;
			this->Y123->Location = System::Drawing::Point(363, 272);
			this->Y123->Name = L"Y123";
			this->Y123->Size = System::Drawing::Size(51, 17);
			this->Y123->TabIndex = 126;
			this->Y123->Text = L"Y123";
			this->Y123->UseVisualStyleBackColor = true;
			// 
			// Y122
			// 
			this->Y122->AutoSize = true;
			this->Y122->Location = System::Drawing::Point(363, 249);
			this->Y122->Name = L"Y122";
			this->Y122->Size = System::Drawing::Size(51, 17);
			this->Y122->TabIndex = 125;
			this->Y122->Text = L"Y122";
			this->Y122->UseVisualStyleBackColor = true;
			// 
			// Y121
			// 
			this->Y121->AutoSize = true;
			this->Y121->Location = System::Drawing::Point(363, 226);
			this->Y121->Name = L"Y121";
			this->Y121->Size = System::Drawing::Size(51, 17);
			this->Y121->TabIndex = 124;
			this->Y121->Text = L"Y121";
			this->Y121->UseVisualStyleBackColor = true;
			// 
			// Y120
			// 
			this->Y120->AutoSize = true;
			this->Y120->Location = System::Drawing::Point(363, 203);
			this->Y120->Name = L"Y120";
			this->Y120->Size = System::Drawing::Size(51, 17);
			this->Y120->TabIndex = 123;
			this->Y120->Text = L"Y120";
			this->Y120->UseVisualStyleBackColor = true;
			// 
			// Y119
			// 
			this->Y119->AutoSize = true;
			this->Y119->Location = System::Drawing::Point(363, 180);
			this->Y119->Name = L"Y119";
			this->Y119->Size = System::Drawing::Size(51, 17);
			this->Y119->TabIndex = 122;
			this->Y119->Text = L"Y119";
			this->Y119->UseVisualStyleBackColor = true;
			// 
			// Y118
			// 
			this->Y118->AutoSize = true;
			this->Y118->Location = System::Drawing::Point(363, 157);
			this->Y118->Name = L"Y118";
			this->Y118->Size = System::Drawing::Size(51, 17);
			this->Y118->TabIndex = 121;
			this->Y118->Text = L"Y118";
			this->Y118->UseVisualStyleBackColor = true;
			// 
			// Y117
			// 
			this->Y117->AutoSize = true;
			this->Y117->Location = System::Drawing::Point(363, 134);
			this->Y117->Name = L"Y117";
			this->Y117->Size = System::Drawing::Size(51, 17);
			this->Y117->TabIndex = 120;
			this->Y117->Text = L"Y117";
			this->Y117->UseVisualStyleBackColor = true;
			// 
			// Y116
			// 
			this->Y116->AutoSize = true;
			this->Y116->Location = System::Drawing::Point(363, 111);
			this->Y116->Name = L"Y116";
			this->Y116->Size = System::Drawing::Size(51, 17);
			this->Y116->TabIndex = 119;
			this->Y116->Text = L"Y116";
			this->Y116->UseVisualStyleBackColor = true;
			// 
			// Y115
			// 
			this->Y115->AutoSize = true;
			this->Y115->Location = System::Drawing::Point(363, 88);
			this->Y115->Name = L"Y115";
			this->Y115->Size = System::Drawing::Size(51, 17);
			this->Y115->TabIndex = 118;
			this->Y115->Text = L"Y115";
			this->Y115->UseVisualStyleBackColor = true;
			// 
			// Y114
			// 
			this->Y114->AutoSize = true;
			this->Y114->Location = System::Drawing::Point(363, 65);
			this->Y114->Name = L"Y114";
			this->Y114->Size = System::Drawing::Size(51, 17);
			this->Y114->TabIndex = 117;
			this->Y114->Text = L"Y114";
			this->Y114->UseVisualStyleBackColor = true;
			// 
			// Y113
			// 
			this->Y113->AutoSize = true;
			this->Y113->Location = System::Drawing::Point(363, 42);
			this->Y113->Name = L"Y113";
			this->Y113->Size = System::Drawing::Size(51, 17);
			this->Y113->TabIndex = 116;
			this->Y113->Text = L"Y113";
			this->Y113->UseVisualStyleBackColor = true;
			// 
			// Y112
			// 
			this->Y112->AutoSize = true;
			this->Y112->Location = System::Drawing::Point(363, 19);
			this->Y112->Name = L"Y112";
			this->Y112->Size = System::Drawing::Size(51, 17);
			this->Y112->TabIndex = 115;
			this->Y112->Text = L"Y112";
			this->Y112->UseVisualStyleBackColor = true;
			// 
			// Y111
			// 
			this->Y111->AutoSize = true;
			this->Y111->Location = System::Drawing::Point(306, 364);
			this->Y111->Name = L"Y111";
			this->Y111->Size = System::Drawing::Size(51, 17);
			this->Y111->TabIndex = 114;
			this->Y111->Text = L"Y111";
			this->Y111->UseVisualStyleBackColor = true;
			// 
			// Y110
			// 
			this->Y110->AutoSize = true;
			this->Y110->Location = System::Drawing::Point(306, 341);
			this->Y110->Name = L"Y110";
			this->Y110->Size = System::Drawing::Size(51, 17);
			this->Y110->TabIndex = 113;
			this->Y110->Text = L"Y110";
			this->Y110->UseVisualStyleBackColor = true;
			// 
			// Y109
			// 
			this->Y109->AutoSize = true;
			this->Y109->Location = System::Drawing::Point(306, 318);
			this->Y109->Name = L"Y109";
			this->Y109->Size = System::Drawing::Size(51, 17);
			this->Y109->TabIndex = 112;
			this->Y109->Text = L"Y109";
			this->Y109->UseVisualStyleBackColor = true;
			// 
			// Y108
			// 
			this->Y108->AutoSize = true;
			this->Y108->Location = System::Drawing::Point(306, 295);
			this->Y108->Name = L"Y108";
			this->Y108->Size = System::Drawing::Size(51, 17);
			this->Y108->TabIndex = 111;
			this->Y108->Text = L"Y108";
			this->Y108->UseVisualStyleBackColor = true;
			// 
			// Y107
			// 
			this->Y107->AutoSize = true;
			this->Y107->Location = System::Drawing::Point(306, 272);
			this->Y107->Name = L"Y107";
			this->Y107->Size = System::Drawing::Size(51, 17);
			this->Y107->TabIndex = 110;
			this->Y107->Text = L"Y107";
			this->Y107->UseVisualStyleBackColor = true;
			// 
			// Y106
			// 
			this->Y106->AutoSize = true;
			this->Y106->Location = System::Drawing::Point(306, 249);
			this->Y106->Name = L"Y106";
			this->Y106->Size = System::Drawing::Size(51, 17);
			this->Y106->TabIndex = 109;
			this->Y106->Text = L"Y106";
			this->Y106->UseVisualStyleBackColor = true;
			// 
			// Y105
			// 
			this->Y105->AutoSize = true;
			this->Y105->Location = System::Drawing::Point(306, 226);
			this->Y105->Name = L"Y105";
			this->Y105->Size = System::Drawing::Size(51, 17);
			this->Y105->TabIndex = 108;
			this->Y105->Text = L"Y105";
			this->Y105->UseVisualStyleBackColor = true;
			// 
			// Y104
			// 
			this->Y104->AutoSize = true;
			this->Y104->Location = System::Drawing::Point(306, 203);
			this->Y104->Name = L"Y104";
			this->Y104->Size = System::Drawing::Size(51, 17);
			this->Y104->TabIndex = 107;
			this->Y104->Text = L"Y104";
			this->Y104->UseVisualStyleBackColor = true;
			// 
			// Y103
			// 
			this->Y103->AutoSize = true;
			this->Y103->Location = System::Drawing::Point(306, 180);
			this->Y103->Name = L"Y103";
			this->Y103->Size = System::Drawing::Size(51, 17);
			this->Y103->TabIndex = 106;
			this->Y103->Text = L"Y103";
			this->Y103->UseVisualStyleBackColor = true;
			// 
			// Y102
			// 
			this->Y102->AutoSize = true;
			this->Y102->Location = System::Drawing::Point(306, 157);
			this->Y102->Name = L"Y102";
			this->Y102->Size = System::Drawing::Size(51, 17);
			this->Y102->TabIndex = 105;
			this->Y102->Text = L"Y102";
			this->Y102->UseVisualStyleBackColor = true;
			// 
			// Y101
			// 
			this->Y101->AutoSize = true;
			this->Y101->Location = System::Drawing::Point(306, 134);
			this->Y101->Name = L"Y101";
			this->Y101->Size = System::Drawing::Size(51, 17);
			this->Y101->TabIndex = 104;
			this->Y101->Text = L"Y101";
			this->Y101->UseVisualStyleBackColor = true;
			// 
			// Y100
			// 
			this->Y100->AutoSize = true;
			this->Y100->Location = System::Drawing::Point(306, 111);
			this->Y100->Name = L"Y100";
			this->Y100->Size = System::Drawing::Size(51, 17);
			this->Y100->TabIndex = 103;
			this->Y100->Text = L"Y100";
			this->Y100->UseVisualStyleBackColor = true;
			// 
			// Y99
			// 
			this->Y99->AutoSize = true;
			this->Y99->Location = System::Drawing::Point(306, 88);
			this->Y99->Name = L"Y99";
			this->Y99->Size = System::Drawing::Size(45, 17);
			this->Y99->TabIndex = 102;
			this->Y99->Text = L"Y99";
			this->Y99->UseVisualStyleBackColor = true;
			// 
			// Y98
			// 
			this->Y98->AutoSize = true;
			this->Y98->Location = System::Drawing::Point(306, 65);
			this->Y98->Name = L"Y98";
			this->Y98->Size = System::Drawing::Size(45, 17);
			this->Y98->TabIndex = 101;
			this->Y98->Text = L"Y98";
			this->Y98->UseVisualStyleBackColor = true;
			// 
			// Y97
			// 
			this->Y97->AutoSize = true;
			this->Y97->Location = System::Drawing::Point(306, 42);
			this->Y97->Name = L"Y97";
			this->Y97->Size = System::Drawing::Size(45, 17);
			this->Y97->TabIndex = 100;
			this->Y97->Text = L"Y97";
			this->Y97->UseVisualStyleBackColor = true;
			// 
			// Y96
			// 
			this->Y96->AutoSize = true;
			this->Y96->Location = System::Drawing::Point(306, 19);
			this->Y96->Name = L"Y96";
			this->Y96->Size = System::Drawing::Size(45, 17);
			this->Y96->TabIndex = 99;
			this->Y96->Text = L"Y96";
			this->Y96->UseVisualStyleBackColor = true;
			// 
			// Y95
			// 
			this->Y95->AutoSize = true;
			this->Y95->Location = System::Drawing::Point(255, 364);
			this->Y95->Name = L"Y95";
			this->Y95->Size = System::Drawing::Size(45, 17);
			this->Y95->TabIndex = 98;
			this->Y95->Text = L"Y95";
			this->Y95->UseVisualStyleBackColor = true;
			// 
			// Y94
			// 
			this->Y94->AutoSize = true;
			this->Y94->Location = System::Drawing::Point(255, 341);
			this->Y94->Name = L"Y94";
			this->Y94->Size = System::Drawing::Size(45, 17);
			this->Y94->TabIndex = 97;
			this->Y94->Text = L"Y94";
			this->Y94->UseVisualStyleBackColor = true;
			// 
			// Y93
			// 
			this->Y93->AutoSize = true;
			this->Y93->Location = System::Drawing::Point(255, 318);
			this->Y93->Name = L"Y93";
			this->Y93->Size = System::Drawing::Size(45, 17);
			this->Y93->TabIndex = 96;
			this->Y93->Text = L"Y93";
			this->Y93->UseVisualStyleBackColor = true;
			// 
			// Y92
			// 
			this->Y92->AutoSize = true;
			this->Y92->Location = System::Drawing::Point(255, 295);
			this->Y92->Name = L"Y92";
			this->Y92->Size = System::Drawing::Size(45, 17);
			this->Y92->TabIndex = 95;
			this->Y92->Text = L"Y92";
			this->Y92->UseVisualStyleBackColor = true;
			// 
			// Y91
			// 
			this->Y91->AutoSize = true;
			this->Y91->Location = System::Drawing::Point(255, 272);
			this->Y91->Name = L"Y91";
			this->Y91->Size = System::Drawing::Size(45, 17);
			this->Y91->TabIndex = 94;
			this->Y91->Text = L"Y91";
			this->Y91->UseVisualStyleBackColor = true;
			// 
			// Y90
			// 
			this->Y90->AutoSize = true;
			this->Y90->Location = System::Drawing::Point(255, 249);
			this->Y90->Name = L"Y90";
			this->Y90->Size = System::Drawing::Size(45, 17);
			this->Y90->TabIndex = 93;
			this->Y90->Text = L"Y90";
			this->Y90->UseVisualStyleBackColor = true;
			// 
			// Y89
			// 
			this->Y89->AutoSize = true;
			this->Y89->Location = System::Drawing::Point(255, 226);
			this->Y89->Name = L"Y89";
			this->Y89->Size = System::Drawing::Size(45, 17);
			this->Y89->TabIndex = 92;
			this->Y89->Text = L"Y89";
			this->Y89->UseVisualStyleBackColor = true;
			// 
			// Y88
			// 
			this->Y88->AutoSize = true;
			this->Y88->Location = System::Drawing::Point(255, 203);
			this->Y88->Name = L"Y88";
			this->Y88->Size = System::Drawing::Size(45, 17);
			this->Y88->TabIndex = 91;
			this->Y88->Text = L"Y88";
			this->Y88->UseVisualStyleBackColor = true;
			// 
			// Y87
			// 
			this->Y87->AutoSize = true;
			this->Y87->Location = System::Drawing::Point(255, 180);
			this->Y87->Name = L"Y87";
			this->Y87->Size = System::Drawing::Size(45, 17);
			this->Y87->TabIndex = 90;
			this->Y87->Text = L"Y87";
			this->Y87->UseVisualStyleBackColor = true;
			// 
			// Y86
			// 
			this->Y86->AutoSize = true;
			this->Y86->Location = System::Drawing::Point(255, 157);
			this->Y86->Name = L"Y86";
			this->Y86->Size = System::Drawing::Size(45, 17);
			this->Y86->TabIndex = 89;
			this->Y86->Text = L"Y86";
			this->Y86->UseVisualStyleBackColor = true;
			// 
			// Y85
			// 
			this->Y85->AutoSize = true;
			this->Y85->Location = System::Drawing::Point(255, 134);
			this->Y85->Name = L"Y85";
			this->Y85->Size = System::Drawing::Size(45, 17);
			this->Y85->TabIndex = 88;
			this->Y85->Text = L"Y85";
			this->Y85->UseVisualStyleBackColor = true;
			// 
			// Y84
			// 
			this->Y84->AutoSize = true;
			this->Y84->Location = System::Drawing::Point(255, 111);
			this->Y84->Name = L"Y84";
			this->Y84->Size = System::Drawing::Size(45, 17);
			this->Y84->TabIndex = 87;
			this->Y84->Text = L"Y84";
			this->Y84->UseVisualStyleBackColor = true;
			// 
			// Y83
			// 
			this->Y83->AutoSize = true;
			this->Y83->Location = System::Drawing::Point(255, 88);
			this->Y83->Name = L"Y83";
			this->Y83->Size = System::Drawing::Size(45, 17);
			this->Y83->TabIndex = 86;
			this->Y83->Text = L"Y83";
			this->Y83->UseVisualStyleBackColor = true;
			// 
			// Y82
			// 
			this->Y82->AutoSize = true;
			this->Y82->Location = System::Drawing::Point(255, 65);
			this->Y82->Name = L"Y82";
			this->Y82->Size = System::Drawing::Size(45, 17);
			this->Y82->TabIndex = 85;
			this->Y82->Text = L"Y82";
			this->Y82->UseVisualStyleBackColor = true;
			// 
			// Y81
			// 
			this->Y81->AutoSize = true;
			this->Y81->Location = System::Drawing::Point(255, 42);
			this->Y81->Name = L"Y81";
			this->Y81->Size = System::Drawing::Size(45, 17);
			this->Y81->TabIndex = 84;
			this->Y81->Text = L"Y81";
			this->Y81->UseVisualStyleBackColor = true;
			// 
			// Y80
			// 
			this->Y80->AutoSize = true;
			this->Y80->Location = System::Drawing::Point(255, 19);
			this->Y80->Name = L"Y80";
			this->Y80->Size = System::Drawing::Size(45, 17);
			this->Y80->TabIndex = 83;
			this->Y80->Text = L"Y80";
			this->Y80->UseVisualStyleBackColor = true;
			// 
			// Y79
			// 
			this->Y79->AutoSize = true;
			this->Y79->Location = System::Drawing::Point(204, 364);
			this->Y79->Name = L"Y79";
			this->Y79->Size = System::Drawing::Size(45, 17);
			this->Y79->TabIndex = 82;
			this->Y79->Text = L"Y79";
			this->Y79->UseVisualStyleBackColor = true;
			// 
			// Y78
			// 
			this->Y78->AutoSize = true;
			this->Y78->Location = System::Drawing::Point(204, 341);
			this->Y78->Name = L"Y78";
			this->Y78->Size = System::Drawing::Size(45, 17);
			this->Y78->TabIndex = 81;
			this->Y78->Text = L"Y78";
			this->Y78->UseVisualStyleBackColor = true;
			// 
			// Y77
			// 
			this->Y77->AutoSize = true;
			this->Y77->Location = System::Drawing::Point(204, 318);
			this->Y77->Name = L"Y77";
			this->Y77->Size = System::Drawing::Size(45, 17);
			this->Y77->TabIndex = 80;
			this->Y77->Text = L"Y77";
			this->Y77->UseVisualStyleBackColor = true;
			// 
			// Y76
			// 
			this->Y76->AutoSize = true;
			this->Y76->Location = System::Drawing::Point(204, 295);
			this->Y76->Name = L"Y76";
			this->Y76->Size = System::Drawing::Size(45, 17);
			this->Y76->TabIndex = 79;
			this->Y76->Text = L"Y76";
			this->Y76->UseVisualStyleBackColor = true;
			// 
			// Y75
			// 
			this->Y75->AutoSize = true;
			this->Y75->Location = System::Drawing::Point(204, 272);
			this->Y75->Name = L"Y75";
			this->Y75->Size = System::Drawing::Size(45, 17);
			this->Y75->TabIndex = 78;
			this->Y75->Text = L"Y75";
			this->Y75->UseVisualStyleBackColor = true;
			// 
			// Y74
			// 
			this->Y74->AutoSize = true;
			this->Y74->Location = System::Drawing::Point(204, 249);
			this->Y74->Name = L"Y74";
			this->Y74->Size = System::Drawing::Size(45, 17);
			this->Y74->TabIndex = 77;
			this->Y74->Text = L"Y74";
			this->Y74->UseVisualStyleBackColor = true;
			// 
			// Y73
			// 
			this->Y73->AutoSize = true;
			this->Y73->Location = System::Drawing::Point(204, 226);
			this->Y73->Name = L"Y73";
			this->Y73->Size = System::Drawing::Size(45, 17);
			this->Y73->TabIndex = 76;
			this->Y73->Text = L"Y73";
			this->Y73->UseVisualStyleBackColor = true;
			// 
			// Y72
			// 
			this->Y72->AutoSize = true;
			this->Y72->Location = System::Drawing::Point(204, 203);
			this->Y72->Name = L"Y72";
			this->Y72->Size = System::Drawing::Size(45, 17);
			this->Y72->TabIndex = 75;
			this->Y72->Text = L"Y72";
			this->Y72->UseVisualStyleBackColor = true;
			// 
			// Y71
			// 
			this->Y71->AutoSize = true;
			this->Y71->Location = System::Drawing::Point(204, 180);
			this->Y71->Name = L"Y71";
			this->Y71->Size = System::Drawing::Size(45, 17);
			this->Y71->TabIndex = 74;
			this->Y71->Text = L"Y71";
			this->Y71->UseVisualStyleBackColor = true;
			// 
			// Y70
			// 
			this->Y70->AutoSize = true;
			this->Y70->Location = System::Drawing::Point(204, 157);
			this->Y70->Name = L"Y70";
			this->Y70->Size = System::Drawing::Size(45, 17);
			this->Y70->TabIndex = 73;
			this->Y70->Text = L"Y70";
			this->Y70->UseVisualStyleBackColor = true;
			// 
			// Y69
			// 
			this->Y69->AutoSize = true;
			this->Y69->Location = System::Drawing::Point(204, 134);
			this->Y69->Name = L"Y69";
			this->Y69->Size = System::Drawing::Size(45, 17);
			this->Y69->TabIndex = 72;
			this->Y69->Text = L"Y69";
			this->Y69->UseVisualStyleBackColor = true;
			// 
			// Y68
			// 
			this->Y68->AutoSize = true;
			this->Y68->Location = System::Drawing::Point(204, 111);
			this->Y68->Name = L"Y68";
			this->Y68->Size = System::Drawing::Size(45, 17);
			this->Y68->TabIndex = 71;
			this->Y68->Text = L"Y68";
			this->Y68->UseVisualStyleBackColor = true;
			// 
			// Y67
			// 
			this->Y67->AutoSize = true;
			this->Y67->Location = System::Drawing::Point(204, 88);
			this->Y67->Name = L"Y67";
			this->Y67->Size = System::Drawing::Size(45, 17);
			this->Y67->TabIndex = 70;
			this->Y67->Text = L"Y67";
			this->Y67->UseVisualStyleBackColor = true;
			// 
			// Y66
			// 
			this->Y66->AutoSize = true;
			this->Y66->Location = System::Drawing::Point(204, 65);
			this->Y66->Name = L"Y66";
			this->Y66->Size = System::Drawing::Size(45, 17);
			this->Y66->TabIndex = 69;
			this->Y66->Text = L"Y66";
			this->Y66->UseVisualStyleBackColor = true;
			// 
			// Y65
			// 
			this->Y65->AutoSize = true;
			this->Y65->Location = System::Drawing::Point(204, 42);
			this->Y65->Name = L"Y65";
			this->Y65->Size = System::Drawing::Size(45, 17);
			this->Y65->TabIndex = 68;
			this->Y65->Text = L"Y65";
			this->Y65->UseVisualStyleBackColor = true;
			// 
			// Y64
			// 
			this->Y64->AutoSize = true;
			this->Y64->Location = System::Drawing::Point(204, 19);
			this->Y64->Name = L"Y64";
			this->Y64->Size = System::Drawing::Size(45, 17);
			this->Y64->TabIndex = 67;
			this->Y64->Text = L"Y64";
			this->Y64->UseVisualStyleBackColor = true;
			// 
			// Y63
			// 
			this->Y63->AutoSize = true;
			this->Y63->Location = System::Drawing::Point(153, 364);
			this->Y63->Name = L"Y63";
			this->Y63->Size = System::Drawing::Size(45, 17);
			this->Y63->TabIndex = 66;
			this->Y63->Text = L"Y63";
			this->Y63->UseVisualStyleBackColor = true;
			// 
			// Y62
			// 
			this->Y62->AutoSize = true;
			this->Y62->Location = System::Drawing::Point(153, 341);
			this->Y62->Name = L"Y62";
			this->Y62->Size = System::Drawing::Size(45, 17);
			this->Y62->TabIndex = 65;
			this->Y62->Text = L"Y62";
			this->Y62->UseVisualStyleBackColor = true;
			// 
			// Y61
			// 
			this->Y61->AutoSize = true;
			this->Y61->Location = System::Drawing::Point(153, 318);
			this->Y61->Name = L"Y61";
			this->Y61->Size = System::Drawing::Size(45, 17);
			this->Y61->TabIndex = 64;
			this->Y61->Text = L"Y61";
			this->Y61->UseVisualStyleBackColor = true;
			// 
			// Y60
			// 
			this->Y60->AutoSize = true;
			this->Y60->Location = System::Drawing::Point(153, 295);
			this->Y60->Name = L"Y60";
			this->Y60->Size = System::Drawing::Size(45, 17);
			this->Y60->TabIndex = 63;
			this->Y60->Text = L"Y60";
			this->Y60->UseVisualStyleBackColor = true;
			// 
			// Y59
			// 
			this->Y59->AutoSize = true;
			this->Y59->Location = System::Drawing::Point(153, 272);
			this->Y59->Name = L"Y59";
			this->Y59->Size = System::Drawing::Size(45, 17);
			this->Y59->TabIndex = 62;
			this->Y59->Text = L"Y59";
			this->Y59->UseVisualStyleBackColor = true;
			// 
			// Y58
			// 
			this->Y58->AutoSize = true;
			this->Y58->Location = System::Drawing::Point(153, 249);
			this->Y58->Name = L"Y58";
			this->Y58->Size = System::Drawing::Size(45, 17);
			this->Y58->TabIndex = 61;
			this->Y58->Text = L"Y58";
			this->Y58->UseVisualStyleBackColor = true;
			// 
			// Y57
			// 
			this->Y57->AutoSize = true;
			this->Y57->Location = System::Drawing::Point(153, 226);
			this->Y57->Name = L"Y57";
			this->Y57->Size = System::Drawing::Size(45, 17);
			this->Y57->TabIndex = 60;
			this->Y57->Text = L"Y57";
			this->Y57->UseVisualStyleBackColor = true;
			// 
			// Y56
			// 
			this->Y56->AutoSize = true;
			this->Y56->Location = System::Drawing::Point(153, 203);
			this->Y56->Name = L"Y56";
			this->Y56->Size = System::Drawing::Size(45, 17);
			this->Y56->TabIndex = 59;
			this->Y56->Text = L"Y56";
			this->Y56->UseVisualStyleBackColor = true;
			// 
			// Y55
			// 
			this->Y55->AutoSize = true;
			this->Y55->Location = System::Drawing::Point(153, 180);
			this->Y55->Name = L"Y55";
			this->Y55->Size = System::Drawing::Size(45, 17);
			this->Y55->TabIndex = 58;
			this->Y55->Text = L"Y55";
			this->Y55->UseVisualStyleBackColor = true;
			// 
			// Y54
			// 
			this->Y54->AutoSize = true;
			this->Y54->Location = System::Drawing::Point(153, 157);
			this->Y54->Name = L"Y54";
			this->Y54->Size = System::Drawing::Size(45, 17);
			this->Y54->TabIndex = 57;
			this->Y54->Text = L"Y54";
			this->Y54->UseVisualStyleBackColor = true;
			// 
			// Y53
			// 
			this->Y53->AutoSize = true;
			this->Y53->Location = System::Drawing::Point(153, 134);
			this->Y53->Name = L"Y53";
			this->Y53->Size = System::Drawing::Size(45, 17);
			this->Y53->TabIndex = 56;
			this->Y53->Text = L"Y53";
			this->Y53->UseVisualStyleBackColor = true;
			// 
			// Y52
			// 
			this->Y52->AutoSize = true;
			this->Y52->Location = System::Drawing::Point(153, 111);
			this->Y52->Name = L"Y52";
			this->Y52->Size = System::Drawing::Size(45, 17);
			this->Y52->TabIndex = 55;
			this->Y52->Text = L"Y52";
			this->Y52->UseVisualStyleBackColor = true;
			// 
			// Y51
			// 
			this->Y51->AutoSize = true;
			this->Y51->Location = System::Drawing::Point(153, 88);
			this->Y51->Name = L"Y51";
			this->Y51->Size = System::Drawing::Size(45, 17);
			this->Y51->TabIndex = 54;
			this->Y51->Text = L"Y51";
			this->Y51->UseVisualStyleBackColor = true;
			// 
			// Y50
			// 
			this->Y50->AutoSize = true;
			this->Y50->Location = System::Drawing::Point(153, 65);
			this->Y50->Name = L"Y50";
			this->Y50->Size = System::Drawing::Size(45, 17);
			this->Y50->TabIndex = 53;
			this->Y50->Text = L"Y50";
			this->Y50->UseVisualStyleBackColor = true;
			// 
			// Y49
			// 
			this->Y49->AutoSize = true;
			this->Y49->Location = System::Drawing::Point(153, 42);
			this->Y49->Name = L"Y49";
			this->Y49->Size = System::Drawing::Size(45, 17);
			this->Y49->TabIndex = 52;
			this->Y49->Text = L"Y49";
			this->Y49->UseVisualStyleBackColor = true;
			// 
			// Y48
			// 
			this->Y48->AutoSize = true;
			this->Y48->Location = System::Drawing::Point(153, 19);
			this->Y48->Name = L"Y48";
			this->Y48->Size = System::Drawing::Size(45, 17);
			this->Y48->TabIndex = 51;
			this->Y48->Text = L"Y48";
			this->Y48->UseVisualStyleBackColor = true;
			// 
			// Y32
			// 
			this->Y32->AutoSize = true;
			this->Y32->Location = System::Drawing::Point(102, 19);
			this->Y32->Name = L"Y32";
			this->Y32->Size = System::Drawing::Size(45, 17);
			this->Y32->TabIndex = 50;
			this->Y32->Text = L"Y32";
			this->Y32->UseVisualStyleBackColor = true;
			// 
			// Y47
			// 
			this->Y47->AutoSize = true;
			this->Y47->Location = System::Drawing::Point(102, 364);
			this->Y47->Name = L"Y47";
			this->Y47->Size = System::Drawing::Size(45, 17);
			this->Y47->TabIndex = 49;
			this->Y47->Text = L"Y47";
			this->Y47->UseVisualStyleBackColor = true;
			// 
			// Y46
			// 
			this->Y46->AutoSize = true;
			this->Y46->Location = System::Drawing::Point(102, 341);
			this->Y46->Name = L"Y46";
			this->Y46->Size = System::Drawing::Size(45, 17);
			this->Y46->TabIndex = 48;
			this->Y46->Text = L"Y46";
			this->Y46->UseVisualStyleBackColor = true;
			// 
			// Y45
			// 
			this->Y45->AutoSize = true;
			this->Y45->Location = System::Drawing::Point(102, 318);
			this->Y45->Name = L"Y45";
			this->Y45->Size = System::Drawing::Size(45, 17);
			this->Y45->TabIndex = 47;
			this->Y45->Text = L"Y45";
			this->Y45->UseVisualStyleBackColor = true;
			// 
			// Y44
			// 
			this->Y44->AutoSize = true;
			this->Y44->Location = System::Drawing::Point(102, 295);
			this->Y44->Name = L"Y44";
			this->Y44->Size = System::Drawing::Size(45, 17);
			this->Y44->TabIndex = 46;
			this->Y44->Text = L"Y44";
			this->Y44->UseVisualStyleBackColor = true;
			// 
			// Y43
			// 
			this->Y43->AutoSize = true;
			this->Y43->Location = System::Drawing::Point(102, 272);
			this->Y43->Name = L"Y43";
			this->Y43->Size = System::Drawing::Size(45, 17);
			this->Y43->TabIndex = 45;
			this->Y43->Text = L"Y43";
			this->Y43->UseVisualStyleBackColor = true;
			// 
			// Y42
			// 
			this->Y42->AutoSize = true;
			this->Y42->Location = System::Drawing::Point(102, 249);
			this->Y42->Name = L"Y42";
			this->Y42->Size = System::Drawing::Size(45, 17);
			this->Y42->TabIndex = 44;
			this->Y42->Text = L"Y42";
			this->Y42->UseVisualStyleBackColor = true;
			// 
			// Y41
			// 
			this->Y41->AutoSize = true;
			this->Y41->Location = System::Drawing::Point(102, 226);
			this->Y41->Name = L"Y41";
			this->Y41->Size = System::Drawing::Size(45, 17);
			this->Y41->TabIndex = 43;
			this->Y41->Text = L"Y41";
			this->Y41->UseVisualStyleBackColor = true;
			// 
			// Y40
			// 
			this->Y40->AutoSize = true;
			this->Y40->Location = System::Drawing::Point(102, 203);
			this->Y40->Name = L"Y40";
			this->Y40->Size = System::Drawing::Size(45, 17);
			this->Y40->TabIndex = 42;
			this->Y40->Text = L"Y40";
			this->Y40->UseVisualStyleBackColor = true;
			// 
			// Y39
			// 
			this->Y39->AutoSize = true;
			this->Y39->Location = System::Drawing::Point(102, 180);
			this->Y39->Name = L"Y39";
			this->Y39->Size = System::Drawing::Size(45, 17);
			this->Y39->TabIndex = 41;
			this->Y39->Text = L"Y39";
			this->Y39->UseVisualStyleBackColor = true;
			// 
			// Y38
			// 
			this->Y38->AutoSize = true;
			this->Y38->Location = System::Drawing::Point(102, 157);
			this->Y38->Name = L"Y38";
			this->Y38->Size = System::Drawing::Size(45, 17);
			this->Y38->TabIndex = 40;
			this->Y38->Text = L"Y38";
			this->Y38->UseVisualStyleBackColor = true;
			// 
			// Y37
			// 
			this->Y37->AutoSize = true;
			this->Y37->Location = System::Drawing::Point(102, 134);
			this->Y37->Name = L"Y37";
			this->Y37->Size = System::Drawing::Size(45, 17);
			this->Y37->TabIndex = 39;
			this->Y37->Text = L"Y37";
			this->Y37->UseVisualStyleBackColor = true;
			// 
			// Y36
			// 
			this->Y36->AutoSize = true;
			this->Y36->Location = System::Drawing::Point(102, 111);
			this->Y36->Name = L"Y36";
			this->Y36->Size = System::Drawing::Size(45, 17);
			this->Y36->TabIndex = 38;
			this->Y36->Text = L"Y36";
			this->Y36->UseVisualStyleBackColor = true;
			// 
			// Y35
			// 
			this->Y35->AutoSize = true;
			this->Y35->Location = System::Drawing::Point(102, 88);
			this->Y35->Name = L"Y35";
			this->Y35->Size = System::Drawing::Size(45, 17);
			this->Y35->TabIndex = 37;
			this->Y35->Text = L"Y35";
			this->Y35->UseVisualStyleBackColor = true;
			// 
			// Y34
			// 
			this->Y34->AutoSize = true;
			this->Y34->Location = System::Drawing::Point(102, 65);
			this->Y34->Name = L"Y34";
			this->Y34->Size = System::Drawing::Size(45, 17);
			this->Y34->TabIndex = 36;
			this->Y34->Text = L"Y34";
			this->Y34->UseVisualStyleBackColor = true;
			// 
			// Y33
			// 
			this->Y33->AutoSize = true;
			this->Y33->Location = System::Drawing::Point(102, 42);
			this->Y33->Name = L"Y33";
			this->Y33->Size = System::Drawing::Size(45, 17);
			this->Y33->TabIndex = 35;
			this->Y33->Text = L"Y33";
			this->Y33->UseVisualStyleBackColor = true;
			// 
			// Y16
			// 
			this->Y16->AutoSize = true;
			this->Y16->Location = System::Drawing::Point(51, 19);
			this->Y16->Name = L"Y16";
			this->Y16->Size = System::Drawing::Size(45, 17);
			this->Y16->TabIndex = 34;
			this->Y16->Text = L"Y16";
			this->Y16->UseVisualStyleBackColor = true;
			// 
			// Y31
			// 
			this->Y31->AutoSize = true;
			this->Y31->Location = System::Drawing::Point(51, 364);
			this->Y31->Name = L"Y31";
			this->Y31->Size = System::Drawing::Size(45, 17);
			this->Y31->TabIndex = 33;
			this->Y31->Text = L"Y31";
			this->Y31->UseVisualStyleBackColor = true;
			// 
			// Y0
			// 
			this->Y0->AutoSize = true;
			this->Y0->Location = System::Drawing::Point(6, 19);
			this->Y0->Name = L"Y0";
			this->Y0->Size = System::Drawing::Size(39, 17);
			this->Y0->TabIndex = 18;
			this->Y0->Text = L"Y0";
			this->Y0->UseVisualStyleBackColor = true;
			// 
			// Y30
			// 
			this->Y30->AutoSize = true;
			this->Y30->Location = System::Drawing::Point(51, 341);
			this->Y30->Name = L"Y30";
			this->Y30->Size = System::Drawing::Size(45, 17);
			this->Y30->TabIndex = 32;
			this->Y30->Text = L"Y30";
			this->Y30->UseVisualStyleBackColor = true;
			// 
			// Y15
			// 
			this->Y15->AutoSize = true;
			this->Y15->Location = System::Drawing::Point(6, 364);
			this->Y15->Name = L"Y15";
			this->Y15->Size = System::Drawing::Size(45, 17);
			this->Y15->TabIndex = 17;
			this->Y15->Text = L"Y15";
			this->Y15->UseVisualStyleBackColor = true;
			// 
			// Y29
			// 
			this->Y29->AutoSize = true;
			this->Y29->Location = System::Drawing::Point(51, 318);
			this->Y29->Name = L"Y29";
			this->Y29->Size = System::Drawing::Size(45, 17);
			this->Y29->TabIndex = 31;
			this->Y29->Text = L"Y29";
			this->Y29->UseVisualStyleBackColor = true;
			// 
			// Y14
			// 
			this->Y14->AutoSize = true;
			this->Y14->Location = System::Drawing::Point(6, 341);
			this->Y14->Name = L"Y14";
			this->Y14->Size = System::Drawing::Size(45, 17);
			this->Y14->TabIndex = 16;
			this->Y14->Text = L"Y14";
			this->Y14->UseVisualStyleBackColor = true;
			// 
			// Y28
			// 
			this->Y28->AutoSize = true;
			this->Y28->Location = System::Drawing::Point(51, 295);
			this->Y28->Name = L"Y28";
			this->Y28->Size = System::Drawing::Size(45, 17);
			this->Y28->TabIndex = 30;
			this->Y28->Text = L"Y28";
			this->Y28->UseVisualStyleBackColor = true;
			// 
			// Y13
			// 
			this->Y13->AutoSize = true;
			this->Y13->Location = System::Drawing::Point(6, 318);
			this->Y13->Name = L"Y13";
			this->Y13->Size = System::Drawing::Size(45, 17);
			this->Y13->TabIndex = 15;
			this->Y13->Text = L"Y13";
			this->Y13->UseVisualStyleBackColor = true;
			// 
			// Y27
			// 
			this->Y27->AutoSize = true;
			this->Y27->Location = System::Drawing::Point(51, 272);
			this->Y27->Name = L"Y27";
			this->Y27->Size = System::Drawing::Size(45, 17);
			this->Y27->TabIndex = 29;
			this->Y27->Text = L"Y27";
			this->Y27->UseVisualStyleBackColor = true;
			// 
			// Y12
			// 
			this->Y12->AutoSize = true;
			this->Y12->Location = System::Drawing::Point(6, 295);
			this->Y12->Name = L"Y12";
			this->Y12->Size = System::Drawing::Size(45, 17);
			this->Y12->TabIndex = 14;
			this->Y12->Text = L"Y12";
			this->Y12->UseVisualStyleBackColor = true;
			// 
			// Y26
			// 
			this->Y26->AutoSize = true;
			this->Y26->Location = System::Drawing::Point(51, 249);
			this->Y26->Name = L"Y26";
			this->Y26->Size = System::Drawing::Size(45, 17);
			this->Y26->TabIndex = 28;
			this->Y26->Text = L"Y26";
			this->Y26->UseVisualStyleBackColor = true;
			// 
			// Y11
			// 
			this->Y11->AutoSize = true;
			this->Y11->Location = System::Drawing::Point(6, 272);
			this->Y11->Name = L"Y11";
			this->Y11->Size = System::Drawing::Size(45, 17);
			this->Y11->TabIndex = 13;
			this->Y11->Text = L"Y11";
			this->Y11->UseVisualStyleBackColor = true;
			// 
			// Y25
			// 
			this->Y25->AutoSize = true;
			this->Y25->Location = System::Drawing::Point(51, 226);
			this->Y25->Name = L"Y25";
			this->Y25->Size = System::Drawing::Size(45, 17);
			this->Y25->TabIndex = 27;
			this->Y25->Text = L"Y25";
			this->Y25->UseVisualStyleBackColor = true;
			// 
			// Y10
			// 
			this->Y10->AutoSize = true;
			this->Y10->Location = System::Drawing::Point(6, 249);
			this->Y10->Name = L"Y10";
			this->Y10->Size = System::Drawing::Size(45, 17);
			this->Y10->TabIndex = 12;
			this->Y10->Text = L"Y10";
			this->Y10->UseVisualStyleBackColor = true;
			// 
			// Y24
			// 
			this->Y24->AutoSize = true;
			this->Y24->Location = System::Drawing::Point(51, 203);
			this->Y24->Name = L"Y24";
			this->Y24->Size = System::Drawing::Size(45, 17);
			this->Y24->TabIndex = 26;
			this->Y24->Text = L"Y24";
			this->Y24->UseVisualStyleBackColor = true;
			// 
			// Y9
			// 
			this->Y9->AutoSize = true;
			this->Y9->Location = System::Drawing::Point(6, 226);
			this->Y9->Name = L"Y9";
			this->Y9->Size = System::Drawing::Size(39, 17);
			this->Y9->TabIndex = 11;
			this->Y9->Text = L"Y9";
			this->Y9->UseVisualStyleBackColor = true;
			// 
			// Y23
			// 
			this->Y23->AutoSize = true;
			this->Y23->Location = System::Drawing::Point(51, 180);
			this->Y23->Name = L"Y23";
			this->Y23->Size = System::Drawing::Size(45, 17);
			this->Y23->TabIndex = 25;
			this->Y23->Text = L"Y23";
			this->Y23->UseVisualStyleBackColor = true;
			// 
			// Y8
			// 
			this->Y8->AutoSize = true;
			this->Y8->Location = System::Drawing::Point(6, 203);
			this->Y8->Name = L"Y8";
			this->Y8->Size = System::Drawing::Size(39, 17);
			this->Y8->TabIndex = 10;
			this->Y8->Text = L"Y8";
			this->Y8->UseVisualStyleBackColor = true;
			// 
			// Y22
			// 
			this->Y22->AutoSize = true;
			this->Y22->Location = System::Drawing::Point(51, 157);
			this->Y22->Name = L"Y22";
			this->Y22->Size = System::Drawing::Size(45, 17);
			this->Y22->TabIndex = 24;
			this->Y22->Text = L"Y22";
			this->Y22->UseVisualStyleBackColor = true;
			// 
			// Y7
			// 
			this->Y7->AutoSize = true;
			this->Y7->Location = System::Drawing::Point(6, 180);
			this->Y7->Name = L"Y7";
			this->Y7->Size = System::Drawing::Size(39, 17);
			this->Y7->TabIndex = 9;
			this->Y7->Text = L"Y7";
			this->Y7->UseVisualStyleBackColor = true;
			// 
			// Y21
			// 
			this->Y21->AutoSize = true;
			this->Y21->Location = System::Drawing::Point(51, 134);
			this->Y21->Name = L"Y21";
			this->Y21->Size = System::Drawing::Size(45, 17);
			this->Y21->TabIndex = 23;
			this->Y21->Text = L"Y21";
			this->Y21->UseVisualStyleBackColor = true;
			// 
			// Y6
			// 
			this->Y6->AutoSize = true;
			this->Y6->Location = System::Drawing::Point(6, 157);
			this->Y6->Name = L"Y6";
			this->Y6->Size = System::Drawing::Size(39, 17);
			this->Y6->TabIndex = 8;
			this->Y6->Text = L"Y6";
			this->Y6->UseVisualStyleBackColor = true;
			// 
			// Y20
			// 
			this->Y20->AutoSize = true;
			this->Y20->Location = System::Drawing::Point(51, 111);
			this->Y20->Name = L"Y20";
			this->Y20->Size = System::Drawing::Size(45, 17);
			this->Y20->TabIndex = 22;
			this->Y20->Text = L"Y20";
			this->Y20->UseVisualStyleBackColor = true;
			// 
			// Y5
			// 
			this->Y5->AutoSize = true;
			this->Y5->Location = System::Drawing::Point(6, 134);
			this->Y5->Name = L"Y5";
			this->Y5->Size = System::Drawing::Size(39, 17);
			this->Y5->TabIndex = 7;
			this->Y5->Text = L"Y5";
			this->Y5->UseVisualStyleBackColor = true;
			// 
			// Y19
			// 
			this->Y19->AutoSize = true;
			this->Y19->Location = System::Drawing::Point(51, 88);
			this->Y19->Name = L"Y19";
			this->Y19->Size = System::Drawing::Size(45, 17);
			this->Y19->TabIndex = 21;
			this->Y19->Text = L"Y19";
			this->Y19->UseVisualStyleBackColor = true;
			// 
			// Y4
			// 
			this->Y4->AutoSize = true;
			this->Y4->Location = System::Drawing::Point(6, 111);
			this->Y4->Name = L"Y4";
			this->Y4->Size = System::Drawing::Size(39, 17);
			this->Y4->TabIndex = 6;
			this->Y4->Text = L"Y4";
			this->Y4->UseVisualStyleBackColor = true;
			// 
			// Y18
			// 
			this->Y18->AutoSize = true;
			this->Y18->Location = System::Drawing::Point(51, 65);
			this->Y18->Name = L"Y18";
			this->Y18->Size = System::Drawing::Size(45, 17);
			this->Y18->TabIndex = 20;
			this->Y18->Text = L"Y18";
			this->Y18->UseVisualStyleBackColor = true;
			// 
			// Y3
			// 
			this->Y3->AutoSize = true;
			this->Y3->Location = System::Drawing::Point(6, 88);
			this->Y3->Name = L"Y3";
			this->Y3->Size = System::Drawing::Size(39, 17);
			this->Y3->TabIndex = 5;
			this->Y3->Text = L"Y3";
			this->Y3->UseVisualStyleBackColor = true;
			// 
			// Y17
			// 
			this->Y17->AutoSize = true;
			this->Y17->Location = System::Drawing::Point(51, 42);
			this->Y17->Name = L"Y17";
			this->Y17->Size = System::Drawing::Size(45, 17);
			this->Y17->TabIndex = 19;
			this->Y17->Text = L"Y17";
			this->Y17->UseVisualStyleBackColor = true;
			// 
			// Y2
			// 
			this->Y2->AutoSize = true;
			this->Y2->Location = System::Drawing::Point(6, 65);
			this->Y2->Name = L"Y2";
			this->Y2->Size = System::Drawing::Size(39, 17);
			this->Y2->TabIndex = 4;
			this->Y2->Text = L"Y2";
			this->Y2->UseVisualStyleBackColor = true;
			// 
			// Y1
			// 
			this->Y1->AutoSize = true;
			this->Y1->Location = System::Drawing::Point(6, 42);
			this->Y1->Name = L"Y1";
			this->Y1->Size = System::Drawing::Size(39, 17);
			this->Y1->TabIndex = 0;
			this->Y1->Text = L"Y1";
			this->Y1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Y127);
			this->groupBox2->Controls->Add(this->Y126);
			this->groupBox2->Controls->Add(this->Y125);
			this->groupBox2->Controls->Add(this->Y124);
			this->groupBox2->Controls->Add(this->Y123);
			this->groupBox2->Controls->Add(this->Y122);
			this->groupBox2->Controls->Add(this->Y121);
			this->groupBox2->Controls->Add(this->Y120);
			this->groupBox2->Controls->Add(this->Y119);
			this->groupBox2->Controls->Add(this->Y118);
			this->groupBox2->Controls->Add(this->Y117);
			this->groupBox2->Controls->Add(this->Y116);
			this->groupBox2->Controls->Add(this->Y115);
			this->groupBox2->Controls->Add(this->Y114);
			this->groupBox2->Controls->Add(this->Y113);
			this->groupBox2->Controls->Add(this->Y112);
			this->groupBox2->Controls->Add(this->Y111);
			this->groupBox2->Controls->Add(this->Y110);
			this->groupBox2->Controls->Add(this->Y109);
			this->groupBox2->Controls->Add(this->Y108);
			this->groupBox2->Controls->Add(this->Y107);
			this->groupBox2->Controls->Add(this->Y106);
			this->groupBox2->Controls->Add(this->Y105);
			this->groupBox2->Controls->Add(this->Y104);
			this->groupBox2->Controls->Add(this->Y103);
			this->groupBox2->Controls->Add(this->Y102);
			this->groupBox2->Controls->Add(this->Y101);
			this->groupBox2->Controls->Add(this->Y100);
			this->groupBox2->Controls->Add(this->Y99);
			this->groupBox2->Controls->Add(this->Y98);
			this->groupBox2->Controls->Add(this->Y97);
			this->groupBox2->Controls->Add(this->Y96);
			this->groupBox2->Controls->Add(this->Y95);
			this->groupBox2->Controls->Add(this->Y94);
			this->groupBox2->Controls->Add(this->Y93);
			this->groupBox2->Controls->Add(this->Y92);
			this->groupBox2->Controls->Add(this->Y91);
			this->groupBox2->Controls->Add(this->Y90);
			this->groupBox2->Controls->Add(this->Y89);
			this->groupBox2->Controls->Add(this->Y88);
			this->groupBox2->Controls->Add(this->Y87);
			this->groupBox2->Controls->Add(this->Y86);
			this->groupBox2->Controls->Add(this->Y85);
			this->groupBox2->Controls->Add(this->Y84);
			this->groupBox2->Controls->Add(this->Y83);
			this->groupBox2->Controls->Add(this->Y82);
			this->groupBox2->Controls->Add(this->Y81);
			this->groupBox2->Controls->Add(this->Y80);
			this->groupBox2->Controls->Add(this->Y79);
			this->groupBox2->Controls->Add(this->Y78);
			this->groupBox2->Controls->Add(this->Y77);
			this->groupBox2->Controls->Add(this->Y76);
			this->groupBox2->Controls->Add(this->Y75);
			this->groupBox2->Controls->Add(this->Y74);
			this->groupBox2->Controls->Add(this->Y73);
			this->groupBox2->Controls->Add(this->Y72);
			this->groupBox2->Controls->Add(this->Y71);
			this->groupBox2->Controls->Add(this->Y70);
			this->groupBox2->Controls->Add(this->Y69);
			this->groupBox2->Controls->Add(this->Y68);
			this->groupBox2->Controls->Add(this->Y67);
			this->groupBox2->Controls->Add(this->Y66);
			this->groupBox2->Controls->Add(this->Y65);
			this->groupBox2->Controls->Add(this->Y64);
			this->groupBox2->Controls->Add(this->Y63);
			this->groupBox2->Controls->Add(this->Y62);
			this->groupBox2->Controls->Add(this->Y61);
			this->groupBox2->Controls->Add(this->Y60);
			this->groupBox2->Controls->Add(this->Y59);
			this->groupBox2->Controls->Add(this->Y58);
			this->groupBox2->Controls->Add(this->Y57);
			this->groupBox2->Controls->Add(this->Y56);
			this->groupBox2->Controls->Add(this->Y55);
			this->groupBox2->Controls->Add(this->Y54);
			this->groupBox2->Controls->Add(this->Y53);
			this->groupBox2->Controls->Add(this->Y52);
			this->groupBox2->Controls->Add(this->Y51);
			this->groupBox2->Controls->Add(this->Y50);
			this->groupBox2->Controls->Add(this->Y49);
			this->groupBox2->Controls->Add(this->Y48);
			this->groupBox2->Controls->Add(this->Y32);
			this->groupBox2->Controls->Add(this->Y47);
			this->groupBox2->Controls->Add(this->Y46);
			this->groupBox2->Controls->Add(this->Y45);
			this->groupBox2->Controls->Add(this->Y44);
			this->groupBox2->Controls->Add(this->Y43);
			this->groupBox2->Controls->Add(this->Y42);
			this->groupBox2->Controls->Add(this->Y41);
			this->groupBox2->Controls->Add(this->Y40);
			this->groupBox2->Controls->Add(this->Y39);
			this->groupBox2->Controls->Add(this->Y38);
			this->groupBox2->Controls->Add(this->Y37);
			this->groupBox2->Controls->Add(this->Y36);
			this->groupBox2->Controls->Add(this->Y35);
			this->groupBox2->Controls->Add(this->Y34);
			this->groupBox2->Controls->Add(this->Y33);
			this->groupBox2->Controls->Add(this->Y16);
			this->groupBox2->Controls->Add(this->Y31);
			this->groupBox2->Controls->Add(this->Y0);
			this->groupBox2->Controls->Add(this->Y30);
			this->groupBox2->Controls->Add(this->Y15);
			this->groupBox2->Controls->Add(this->Y29);
			this->groupBox2->Controls->Add(this->Y14);
			this->groupBox2->Controls->Add(this->Y28);
			this->groupBox2->Controls->Add(this->Y13);
			this->groupBox2->Controls->Add(this->Y27);
			this->groupBox2->Controls->Add(this->Y12);
			this->groupBox2->Controls->Add(this->Y26);
			this->groupBox2->Controls->Add(this->Y11);
			this->groupBox2->Controls->Add(this->Y25);
			this->groupBox2->Controls->Add(this->Y10);
			this->groupBox2->Controls->Add(this->Y24);
			this->groupBox2->Controls->Add(this->Y9);
			this->groupBox2->Controls->Add(this->Y23);
			this->groupBox2->Controls->Add(this->Y8);
			this->groupBox2->Controls->Add(this->Y22);
			this->groupBox2->Controls->Add(this->Y7);
			this->groupBox2->Controls->Add(this->Y21);
			this->groupBox2->Controls->Add(this->Y6);
			this->groupBox2->Controls->Add(this->Y20);
			this->groupBox2->Controls->Add(this->Y5);
			this->groupBox2->Controls->Add(this->Y19);
			this->groupBox2->Controls->Add(this->Y4);
			this->groupBox2->Controls->Add(this->Y18);
			this->groupBox2->Controls->Add(this->Y3);
			this->groupBox2->Controls->Add(this->Y17);
			this->groupBox2->Controls->Add(this->Y2);
			this->groupBox2->Controls->Add(this->Y1);
			this->groupBox2->Location = System::Drawing::Point(655, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(421, 387);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ѕиты Y";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 421);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->MainTextBox);
			this->Controls->Add(this->button1);
			this->Name = L"Main";
			this->Text = L"Main";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		
		SM4* SM4s;
		bool bitsX[128];
		bool bitsY[128];

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ s = gcnew	String(SM4s->SM4Processing().str().c_str());
		MainTextBox->Text = s;
		
	}
	};
}
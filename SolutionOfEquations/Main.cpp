#include "Main.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SolutionOfEquations::Main form;
	Application::Run(%form);
}
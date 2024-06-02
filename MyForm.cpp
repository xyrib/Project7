#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project7;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project7::MyForm form;
    Application::Run(% MyForm());
}

#include "AppCalculator.h"

#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    App::AppCalculator form;
    Application::Run(% form);

    //return 0;
}
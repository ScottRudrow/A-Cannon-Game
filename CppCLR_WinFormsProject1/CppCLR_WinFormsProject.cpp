#include "pch.h"
#include "Form1.h"
#include <SDL.h>

using namespace System;




using namespace System::Windows::Forms;

[STAThread]
int main(int argc, char* argv[]); 

void myFunction()

{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinFormsProject::Form1());

	//SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Title", "Discription", NULL);
	//return 0;

}
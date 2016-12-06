#include< stdio.h >
#include< conio.h >
#include< windows.h >
#include<MMSystem.h>
#include "initialize.h"
#include "gamefunction.h"
#pragma comment(lib,"Winmm.lib")

int main()
{
	Initialize();
	MainScreen();
	return 0;
}
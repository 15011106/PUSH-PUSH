#include< stdio.h >
#include< conio.h >
#include< windows.h >
#include<MMSystem.h>
#pragma comment(lib,"Winmm.lib")

#include "initialize.h"
#include "gamefunction.h"

int main()
{
	Initialize();
	MainScreen();
	return 0;
}
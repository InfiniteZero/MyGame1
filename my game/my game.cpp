// my game.cpp : Defines the entry point for the console application.
//
//To save console output to file, type this: "name.exe >> output_file_name.txt"
//To clear console window, type: CLS
//C:\C++\my game\Debug>"my game" >> output.txt

#include "stdafx.h"
#include "Game_Engine.h"
#include <sys/types.h>
#include <fcntl.h>
#include <conio.h>
//#include <time.h>

#define ONE_60TH_SECOND 17 // 1000/60 rounded up




int _tmain(int argc, _TCHAR* argv[])
{
	Game_Engine testGameEngine;

	testGameEngine.gameInit();
	
							
	testGameEngine.clockTest(); //Injecting testClock() function
						    

 /*          main game loop*/

	char c = {0};
	bool bRunning = true;
	int nCount = 0;
	//int mseconds = 17;

    while( bRunning ) 
    {
		//printf("nCount = %d\n", nCount);
		testGameEngine.gameRenderFrame (nCount);
		testGameEngine.gameUpdateFrame ();

		testGameEngine.sleep (ONE_60TH_SECOND);

		nCount++;
			
		//c = getchar();
		//putchar (c);
		//printf("\n");

		if(kbhit() > 0)
		{
			bRunning = false;
			//printf("Set bRunning = false\n");
		}
	
		//if(nCount > 59)
		//{
		//	bRunning = false;
		//}
		

		//if(c == '.')
		//{
		//	bRunning = false;
		//}

		

		//*Win_Frame();
		//common->Frame();*/
		//getchar()*/

    }

	testGameEngine.gameCleanup();
	return 0;
}


//int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ) 
//    {
//        

//        
//        
//    }
	
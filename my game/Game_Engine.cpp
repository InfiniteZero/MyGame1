#include "Game_Engine.h"

#include<stdio.h>

//#define TRACING_ON 

Game_Engine::Game_Engine(void)
{
}


Game_Engine::~Game_Engine(void)
{
}

bool Game_Engine::gameInit() 
{
	printf("gameInit()\n");

	
//    
//       Sys_SetPhysicalWorkMemory( 192 << 20, 1024 << 20 );
//
//        Sys_GetCurrentMemoryStatus( exeLaunchMemoryStats );
//        
//        Sys_CreateConsole();
//        
//        SetErrorMode( SEM_FAILCRITICALERRORS );
//
//        for ( int i = 0; i < MAX_CRITICAL_SECTIONS; i++ ) {
//                InitializeCriticalSection( &win32.criticalSections[i] );
//        }
//        
//        Sys_Milliseconds();
//        
//        common->Init( 0, NULL, lpCmdLine );
//        
//        Sys_StartAsyncThread();
//        
//        Sys_ShowConsole

	return true;
}

bool Game_Engine::gameCleanup()
{
	printf("gameCleanup()\n");

	return true;

}
bool Game_Engine::gameRenderFrame(int nCount)
{

#ifdef TRACING_ON 
	printf("gameRenderFrame() nCount = %d\n", nCount);  // Trace input parameters
#endif

	int myCount = nCount % 60;

#ifdef TRACING_ON 
	//printf("myCount = %d\n", myCount);
#endif

	//for(int i = 0 ; i < myCount ; i++)
	//{
	//	if((myCount >= 0 && myCount <= 9) || (myCount >= 20 && myCount <= 29) || (myCount >= 40 && myCount <= 49))
	//	printf("*");
	//	else
	//	printf("x");
	//}

		if((myCount >= 0 && myCount <= 9) || (myCount >= 20 && myCount <= 29) || (myCount >= 40 && myCount <= 49))
		printf("*");
		else
		printf("x");

	if(myCount == 59)
		printf("\n");

	return true;

}

bool Game_Engine::gameUpdateFrame()
{
#ifdef TRACING_ON 
	printf("gameUpdateFrame()\n");
#endif
	return true;
}

void Game_Engine::sleep(unsigned int mseconds)
{
#ifdef TRACING_ON 
	printf("sleep()\n");
#endif

    clock_t goal = mseconds + clock();

#ifdef TRACING_ON 
	printf("goal = %d\n", goal);
#endif

    while (goal > clock());

#ifdef TRACING_ON 
	printf("sleep() done, clock = %d\n", clock());
#endif

}
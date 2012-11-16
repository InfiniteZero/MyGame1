#ifndef GAME_ENGINE
#define GAME_ENGINE
//#pragma once




#include <time.h>

class Game_Engine
{
public:
	Game_Engine(void);
	~Game_Engine(void);

	bool gameInit();
	bool gameCleanup();
	bool gameRenderFrame(int nCount);
	bool gameUpdateFrame();
	void sleep(unsigned int mseconds); //simulates delay in miliseconds 
	void clockTest();

};
#endif

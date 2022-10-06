#ifndef gameTXT_H
#define gameTXT_H

#include "game.h"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

class GameTXT : public Game{

private:
public:
	GameTXT();
	 ~GameTXT();
	 void view();
	 void inputFile();
	 void wait();
};

#endif


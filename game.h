#ifndef game_H
#define game_H

#include "array.h"

class Game{
public:

    Array *tab, *tmp;
	Game();
    ~Game();
	Game(const Game& gm); //konstruktor kopiuj¹cy
	Game& operator=(const Game& gm); //Prz. operatora =
	void play();
	void analize();
	virtual void inputFile() = 0;
	const Array& getArray();
	virtual void view() = 0;
	virtual void wait() = 0;
};

#endif

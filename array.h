#ifndef array_H
#define array_H

#include "cell.h"

using namespace std;

class Array{


public:

	friend class Game;
	Array();
    int nw, nh, s ;
	Cell **Map;
	Array(int nh, int nw);
	~Array();
	Array(const Array & tab);
	Array& operator=(const Array& tab);
	int getStep();
	int getArrayWidth();
	int getArrayHeight();
	void setStep(int step);
	void setArrayWidth(int width);
	void setArrayHeight(int height);
	void ressurectCell(int x, int y);
	int aliveNeighbours(int x, int y);
	Cell& getCell(int x, int y);
	void clearArray();
};

#endif


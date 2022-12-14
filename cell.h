#ifndef cell_H
#define cell_H

class Cell{

private:
	bool isAlive;

public:
	Cell();
    ~Cell();
    Cell(const Cell& c);
    Cell& operator=(const Cell& c);
	Cell(bool isAlive);
	bool getState();
	void setState(bool st);
};

#endif


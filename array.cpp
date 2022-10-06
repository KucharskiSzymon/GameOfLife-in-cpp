#include "array.h"

using namespace std;

Array::Array() : nw(0), nh(0), Map(0){}
Array::Array(int nh, int nw){

	Map = new Cell *[nh];
	for (int i = 0; i < nh; i++)
		Map[i] = new Cell[nw];
}
Array::~Array(){}
Array::Array(const Array& tab) : nw(tab.nw), nh(tab.nh), Map(0){

	Map = new Cell *[nh];
	for (int i = 0; i < nh; i++)
		Map[i] = new Cell[nw];

	for (int i = 0; i < nh; i++){
		for (int j = 0; j < nw; j++)
			Map[i][j] = tab.Map[i][j];

	}
}
Array & Array::operator=(const Array & tab){

	if (this == &tab)
		return *this;

	nw = tab.nw;
	nh = tab.nh;

	for (int i = 0; i < nh; i++){
		for (int j = 0; j < nw; j++)
			Map[i][j] = tab.Map[i][j];
	}
	return *this;
}
int Array::getStep(){
return s;
}
int Array::getArrayWidth(){
	return nw;
}
int Array::getArrayHeight(){
	return nh;
}
void Array::setStep(int step){
    s=step;
}
void Array::setArrayWidth(int widht){
	nw = widht;
}
void Array::setArrayHeight(int height){
	nh = height;
}
void Array::ressurectCell(int x, int y){
	Map[x][y].setState(true);
}
int Array::aliveNeighbours(int x, int y){
	int counter = 0;
	int TmpX, TmpY;
	for (int i = 0; i < 3; i++){
		TmpX = x - 1 + i;
		for (int j = 0; j < 3; j++){
			TmpY = y - 1 + j;
			if ( (TmpY != y || TmpX != x) && (TmpY <= nw - 1 && TmpY >= 0) && (TmpX <= nh - 1 && TmpX >= 0)
				&& Map[TmpX][TmpY].getState() == true){
				counter++;
			}
		}
	}
	return counter;
}
Cell& Array::getCell(int x, int y){
	return Map[x][y];
}
void Array::clearArray(){
	for (int i = 0; i < nh; i++){
		for (int j = 0; j < nw; j++)
			Map[i][j] = 0;
	}
}



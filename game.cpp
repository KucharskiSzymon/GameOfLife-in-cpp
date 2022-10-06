#include <iostream>
#include "game.h"

Game::Game(){}
Game::~Game(){}
const Array& Game::getArray(){
	return *tab;
}
void Game::play(){
    inputFile();
    int sum=0;
	do {
    view();
    analize();
    wait();
    sum++;
	}
	while(sum!=tab->getStep());
	cout << "Gra trwala: " << tab->getStep() << " pokolen";

}
void Game::analize(){

	tmp->clearArray();
	int Count;
	for (int i = 0; i < tab->getArrayHeight(); i++){

		for (int j = 0; j < tab->getArrayWidth(); j++){
			Count = tab->aliveNeighbours(i, j);

			if (tab->getCell(i,j).getState() == true){
				if (Count == 2 || Count == 3){
					tmp->ressurectCell(i, j);
				}
			}else{
				if (Count == 3){
					tmp->ressurectCell(i, j);
				}
			}
		}
	}
	*tab = *tmp;
}





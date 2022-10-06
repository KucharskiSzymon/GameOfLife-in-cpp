#include <iostream>
#include "gameTXT.h"

GameTXT::GameTXT(){}
GameTXT::~GameTXT(){}
void GameTXT::view(){
	system("cls");

	for (int i = 0; i < tab->getArrayHeight(); i++){
		for (int j = 0; j < tab->getArrayWidth(); j++){
			if (tab->getCell(i, j).getState() == true){
				cout << "8" << "  ";
			}else{
				cout << "-" << "  ";
			}
		}
		cout << endl ;
	}
}
void GameTXT::inputFile(){

	int step, width, height, x, y;
	ifstream findFile;
	findFile.open("plik.txt",ios::in);
	findFile >> step;
    findFile >> width;
    findFile >> height;
    tab = new Array(height, width);
    tab->setStep(step);
    tab->setArrayWidth(width);
    tab->setArrayHeight(height);
    tmp = new Array(*tab);
    while (!findFile.eof()){
        findFile >> x;
        findFile >> y;
        tab->ressurectCell(y-1, x-1 );
    }
	findFile.close();
}
void GameTXT::wait(){
	Sleep(1000);
}



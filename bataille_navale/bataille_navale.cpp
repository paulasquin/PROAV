#include <stdlib.h>
#include <vector>
#include <iostream>
#include "bataille_navale.h"

Battleship::Battleship(bool is_human) : is_human_(is_human), grid_(N_ROWS*N_COLS) {

}

void Battleship::display() {
	//std::cout << "Battle running" << std::endl;

	for (int i = 0; i < N_ROWS; i++)
	{
		for (int j = 0; j < N_COLS; j++)
		{
			std::cout << " " << getCell(i, j);
		}
		std::cout << std::endl;
	}
}

int& Battleship::getCell(int i, int j){

	return grid_[i*N_COLS + j];
}
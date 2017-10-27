#include <stdlib.h>
#include <vector>
#include <iostream>
#include "bataille_navale.h"

using namespace std;

Battleship::Battleship(bool is_human) : is_human_(is_human), grid_(N_ROWS*N_COLS) {
	std::vector<int> lengths = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; ++i)
	{
		for (int l = 0; l < lengths[i]; ++l)
		{
			getCell(i, l) = i+1;
		}
	}

}

void Battleship::display() {
	//std::cout << "Battle running" << std::endl;

	vector<char> encoding = {'.', 'M', 'S', 'D', 'C', 'A'};
	cout << "    ";

	for (int i = 0; i < 10; ++i)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "   ";
	for (int i = 0; i < 10; ++i)
	{
		cout << "__";
	}
	cout << endl;

	for (int i = 0; i < N_ROWS; i++)
	{
		cout << i << " | ";
		for (int j = 0; j < N_COLS; j++)
		{
			if sh

			//cout << encoding[getCell(i, j)] << " ";
		}
		cout << std::endl;
	}
}

int& Battleship::getCell(int i, int j){

	return grid_[i*N_COLS + j];
}

int& Battleship::isVisible(int i, int j){

	return show_[i*N_COLS + j];
}

void Battleship::shot(Battleship &other){
	int r, c;
	if(is_human_){
		// human plays
		cout << "Select rows and column : ";
		cin >> r >> c;
	}
	else{
		//ai plays
		r = rand()%N_ROWS;
		c = rand()%N_COLS;
	}

	other.isVisible(r,c) = 1;
}
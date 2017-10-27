#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <stdlib.h>
#include <vector>
#include <iostream>

#define N_ROWS 10
#define N_COLS 10

class Battleship
{
    public:
    	Battleship(bool is_human) {}

    	void display();

    private:
    	int& getCell(int i, int j);

    	std::vector<int> grid_;
    	bool is_human_;
};

#endif
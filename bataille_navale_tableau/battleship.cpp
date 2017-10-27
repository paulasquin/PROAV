#include "battleship.h"
#include <random>
#include <time.h>
#include <algorithm>


Battleship::Battleship(bool is_human) : is_human_(is_human), grid_(N_ROWS*N_COLS,0), show_(N_ROWS*N_COLS,0) {
    srand(time(NULL));
    std::vector<int> lengths = {2, 3, 3, 4, 5};
    for(int i=0; i<5; i++) {
        for(int l=0; l<lengths[i]; l++)
            getCell(i, l) = i+1;
    }
    N_boats_alive_ = std::count_if(grid_.begin(), grid_.end(), [](int &v){return v>0;});
}

void Battleship::display() {
    std::vector<char> encoding = {'x', 'M', 'S', 'D', 'C', 'A'};
    std::cout << "    ";
    for(int i=0; i<N_COLS; i++)
        std::cout << i << " ";
    std::cout << std::endl;
    for(int i=0; i<N_ROWS; i++) {
        std::cout << i << " | ";
        for(int j=0; j<N_COLS; j++) {
            if(isVisible(i,j)) {
                std::cout << encoding[getCell(i, j)] << " ";
            }
            else {
                std::cout << "- ";
            }
        }
        std::cout << std::endl;
    }
}


int& Battleship::getCell(int i, int j) {
    return grid_[i*N_COLS+j];
}

int& Battleship::isVisible(int i, int j) {
    return show_[i*N_COLS+j];
}



bool Battleship::shot(Battleship &other) {
    int r,c;
    if(is_human_) {
        // human plays
        std::cout << "Select row and column: ";
        std::cin >> r >> c;
    }
    else {
        // ai plays
        r = rand()%N_ROWS;
        c = rand()%N_COLS;
    }

    if(other.isVisible(r,c)==0 && other.getCell(r,c)>0)
        other.N_boats_alive_--;
    other.isVisible(r,c) = 1;
    return other.N_boats_alive_==0;
}

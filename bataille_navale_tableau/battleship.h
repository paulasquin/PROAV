#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <stdlib.h>
#include <vector>
#include <iostream>

#define N_ROWS 10
#define N_COLS 10

class Battleship {
public:
  Battleship(bool is_human);

  void display();
  bool shot(Battleship &other); // returns true if the shooting player wins

private:
  int& getCell(int i, int j);
  int& isVisible(int i, int j);

  std::vector<int> grid_;
  std::vector<int> show_;
  bool is_human_;
  int N_boats_alive_;


};


#endif // BATTLESHIP_H

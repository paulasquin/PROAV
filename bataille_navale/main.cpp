#include <stdlib.h>
#include <vector>
#include <iostream>

#include "bataille_navale.h"

using namespace std;


int main(int argc, char const *argv[])
{
	Battleship p1(false), p2(false);

	int N = 3;

	while(N>0){
		cout << "Player 1 playing" << endl;
		cout << "Player 2 grid:" << endl;
		p2.display();
		p1.shot(p2);

		cout << "Player 2 playing" << endl;
		cout << "Player 1 grid:" << endl;
		p1.display();
		p2.shot(p1);

		N--;
	}

	return 0;
}
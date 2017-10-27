#include <stdlib.h>
#include <vector>
#include <iostream>

#include "bataille_navale.h"

using namespace std;


int main(int argc, char const *argv[])
{
	cout << "Battleship" << endl;
	Battleship b(false);
	b.display();

	return 0;
}
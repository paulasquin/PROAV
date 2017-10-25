
#ifndef VECTOR_H
#define VECTOR_H
	#include "ndvector.h"
#endif

#include <stdlib.h>
#include <iostream>

#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	Vector x(2,1.0);//Création vecteur, sans différence avec le std::vector

	x[0] = -1;
	cout << "dim(x) = " << x.size() << endl;

	cout << x << endl;

	return 0;
}
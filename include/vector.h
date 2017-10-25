#include <vector>

class Vector : public std::vector<double> {

public:
	Vector(unsigned int dim, double v = 0.0) : std::vector<double>(dim, v)
	{
	// do nothing else
	}
};

std::ostream & operator<<(std::ostream &os, const Vector &v){
	os << "[ ";
	for(auto &elem:v){
		os << eleme << " ";
	}
	os << "Je suis un vecteur";
	return(os);

}
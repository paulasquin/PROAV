#include <vector>

class Vector : public std::vector<double> {

public:
	Vector(unsigned int dim, double v = 0.0) : std::vector<double>(dim, v)
	{
	// do nothing else
	}

	Vector operator+(const Vector & other){
		assert(other.size()==size());
		Vector ret(size());
		for (int i = 0; i< size(); i++)
			ret[i] = at(i)+other[i];
		return ret;
	}

	Vector operator-(const Vector & other){
		assert(other.size()==size());
		Vector ret(size());
		for (int i = 0; i< size(); i++)
			ret[i] = at(i)-other[i];
		return ret;
	}

	Vector operator*(const double k){
		Vector ret(size());
		for(int i = 0; i<size();i++)
			ret[i] = k*at(i);
		return ret;
	}

	friend Vector operator*(const double k, ){
		
	}
};

std::ostream & operator<<(std::ostream &os, const Vector &v){
	os << "[ ";
	for(auto &elem:v){
		os << elem << " ";
	}
	os << "Je suis un vecteur";
	return(os);

}
#include <iostream>
#include <vector>

std::vector<double> add_vectors(std::vector<double> v1, std::vector<double> v2);
std::vector<double> substract_vectors(std::vector<double> v1, std::vector<double> v2);
double dot(std::vector<double> v1, std::vector<double> v2);

int main (void) 
{

	std::vector<double> x = {1.2,2.2,1.3,3.1};
  std::vector<double> y = {2.2,1.5,5.,3.};

	double dotprod = dot(x, y);

	std::cout << dotprod << std::endl;
	//for (int i = 0; i < 4; i++) {
	//  std::cout << vec[i] << std::endl; 
	//};

	return(0);
}

std::vector<double> add_vectors(std::vector<double> v1, std::vector<double> v2) {

	int size = v1.size();
	std::vector<double> v(size);

  for (int i = 0; i < 4; i++) {
    v[i] = v1[i] + v2[i];  
	};

	return v;
};

std::vector<double> substract_vectors(std::vector<double> v1, std::vector<double> v2) {

	int size = v1.size();
	std::vector<double> v(size);

  for (int i = 0; i < 4; i++) {
    v[i] = v1[i] - v2[i];  
	};

	return v;
};

double dot(std::vector<double> v1, std::vector<double> v2) {

	int size = v1.size();
	double sum = 0.0;

  for (int i = 0; i < 4; i++) {
    sum += v1[i] * v2[i];  
	};

	return sum;
};


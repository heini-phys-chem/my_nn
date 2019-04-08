#include <iostream>
#include <vector>

#include "utiles.h"

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


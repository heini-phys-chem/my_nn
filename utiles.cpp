#include <iostream>
#include <vector>

#include "utiles.h"

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


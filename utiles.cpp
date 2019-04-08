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

void print_matrix(std::vector<std::vector<double>>m) {

  for (int i = 0; i < m.size(); i++) {
    for (int j = 0; j < m[i].size(); j++) {
      std::cout << m[i][j] << " ";
    };
    std::cout << std::endl;
  };
};

std::vector<std::vector<double>> transpose( std::vector<std::vector<double>> m, int nRow, int nCol) {

  std::vector<std::vector<double>> m_T(nCol);
  for (int k = 0; k < nCol; k++) {
   m_T[k].resize(nRow);
  };

  for (int i = 0; i < nRow; i++) {
    for (int j = 0; j < nCol; j++) {
      m_T[j][i] = m[i][j];
    };
  };

  return m_T;
};


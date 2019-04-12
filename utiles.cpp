#include <iostream>
#include <vector>
#include <bits/stdc++.h>

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

double dot_v(std::vector<double> v1, std::vector<double> v2) {

	int size = v1.size();
	double sum = 0.0;

  for (int i = 0; i < 4; i++) {
    sum += v1[i] * v2[i];  
	};

	return sum;
};

//std::vector<std::vector<double>> dot_m(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2) {
//
//	int size = v1.size();
//	double sum = 0.0;
//
//  for (int i = 0; i < 4; i++) {
//    sum += v1[i] * v2[i];  
//	};
//
//	return sum;
//};

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

std::vector<double> sigmoid (std::vector<double> v1) {

  int size = v1.size();
  std::vector<double> output(size);
  
  for (int i = 0; i < size; i++) {
    output[i] = 1 / ( 1 + std::exp(-v1[i]) );
  };

  return output;

};


std::vector<double> sigmoid_d (std::vector<double> v1) {

  int size = v1.size();
  std::vector<double> output(size);
  
  for (int i = 0; i < size; i++) {
    output[i] = v1[i] * ( 1 - v1[i] );
  };

  return output;


  
};

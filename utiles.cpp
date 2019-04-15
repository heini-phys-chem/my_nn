#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>

typedef std::vector< std::vector<double> > matrix;
typedef std::vector<double> vec;

//std::vector<double> read_in_vector() {
//  std::vector<double> vec(); 
//
//  std::ofstream inputFile;  
//  
//};
//std::vector<std::vector<double>> read_in_matrix();


vec add_vectors(vec v1, vec v2) {

	int size = v1.size();
	vec v(size);

  for (int i = 0; i < 4; i++) {
    v[i] = v1[i] + v2[i];  
	};

	return v;
};

vec substract_vectors(vec v1, vec v2) {

	int size = v1.size();
	vec v(size);

  for (int i = 0; i < 4; i++) {
    v[i] = v1[i] - v2[i];  
	};

	return v;
};

double dot_v(vec v1, vec v2) {

	int size = v1.size();
	double sum = 0.0;

  for (int i = 0; i < 4; i++) {
    sum += v1[i] * v2[i];  
	};

	return sum;
};

matrix dot_m(matrix m1, matrix m2) {

	int nCol1 = m1.size();
	int nRow1 = m1[0].size();
  int nCol2 = m2.size();

	matrix m(nRow1, vec(nCol2));

  for (int i = 0; i < nRow1; i++) {
    for (int j = 0; j < nCol2; j++) {
      for (int k = 0; j < nCol1; j++) {

      m[i][j] += m1[i][k] * m2[k][j];  

      };
	  };
  };

	return m;
};

void print_matrix(matrix m) {

  for (int i = 0; i < m.size(); i++) {
    for (int j = 0; j < m[i].size(); j++) {
      std::cout << m[i][j] << " ";
    };
    std::cout << std::endl;
  };
};

matrix transpose(matrix m, int nRow, int nCol) {

  matrix m_T(nCol);
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

vec sigmoid (vec v1) {

  int size = v1.size();
  vec output(size);
  
  for (int i = 0; i < size; i++) {
    output[i] = 1 / ( 1 + std::exp(-v1[i]) );
  };

  return output;

};


vec sigmoid_d (vec v1) {

  int size = v1.size();
  vec output(size);
  
  for (int i = 0; i < size; i++) {
    output[i] = v1[i] * ( 1 - v1[i] );
  };

  return output;

};

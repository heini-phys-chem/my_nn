#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>

typedef std::vector< std::vector<double> > matrix;
typedef std::vector<double> vec;

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

vec multiply_vectors(vec v1, vec v2) {

  int size = v1.size();
  vec v(size);

  for (int i =0; i < size; i++) {
    v[i] = v1[i] * v2[i];
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

vec dot_m(matrix m1, vec v2) {

  int nCol1 = m1.size();
  int nRow1 = m1[0].size();
  int nCol2 = v2.size();

  vec m(nRow1);

  for (int i = 0; i < nCol1; i++) {
    for (int j = 0; j < nCol2; j++) {
      for (int k = 0; k < nRow1; k++) {

      m[i] += m1[i][k] * v2[j];

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

void print_vector(vec v) {

  for (int i = 0; i < v.size(); i++) {
      std::cout << v[i] << std::endl;
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

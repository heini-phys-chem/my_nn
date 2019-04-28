#include <iostream>
#include <fstream>
#include <vector>
//#include <bits/stdc++.h>
#include <math.h>

typedef std::vector< std::vector<float> > matrix;
typedef std::vector<float> vec;

vec add_vectors(vec v1, vec v2) {

  int size = v1.size();
  vec v(size);

  for (int i = 0; i != size; ++i) {
    v[i] = v1[i] + v2[i];  
  };

  return v;
};

vec substract_vectors(vec v1, vec v2) {

  int size = v1.size();
  vec v(size);

  for (int i = 0; i < size; i++) {
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

float dot_v(vec v1, vec v2) {

  int size = v1.size();
  float sum = 0.0;

  for (int i = 0; i < 4; i++) {
    sum += v1[i] * v2[i];  
  };

  return sum;
};

vec dot_m(matrix m1, vec v2) {

  int nRow1 = m1.size();
  int nCol1 = m1[0].size();
  int nRow2 = v2.size();

  vec v(nRow1);

  for (int i = 0; i < nRow1; i++) {
    for (int j = 0; j < nRow2; j++) {
      //for (int k = 0; k < nCol1; k++) {

      v[i] += m1[i][j] * v2[j];
      //std::cout << i << " " << j << " " << m1[i][j] << " " << v2[j] << std::endl;

      //};
    };
  };
  //std::cout << std::endl;

  return v;
};

void print_matrix(matrix m) {
  int nRow = m.size();
  int nCol = m[0].size();

  for (int i = 0; i < nRow; i++) {
    for (int j = 0; j < nCol; j++) {
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


matrix transpose(matrix m) {
  int nRow = m.size();
  int nCol = m[0].size();

  matrix m_T(nRow);
  for (int k = 0; k < nRow; k++) {
   m_T[k].resize(nCol);
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
  vec v(size);
  
  for (int i = 0; i < size; i++) {
    v[i] = 1 / ( 1 + exp(-v1[i]));
  };

  return v;

};


vec sigmoid_d (vec& v1) {

  const unsigned long size = v1.size();
  vec v(size);
  
  for (unsigned i = 0; i != size; ++i) {
    v[i] = v1[i] * (1 - v1[i]);
  };

  return v;

};

void read_in_input(matrix &X, vec &y) {
  std::string line;
  std::string token;
  std::string delimiter = ",";

  std::ifstream myfile ("InputData");

  if (!myfile.is_open()) {
    std::cout << "Could not ope file" << std::endl;
  };

  int i = 0;

  while ( getline (myfile,line) ) {

    int j = 0;
    size_t pos = 0;

    while ( (pos = line.find(delimiter) ) != std::string::npos) {

      token = line.substr(0, pos);
      double tmp = std::stod(token);

      if (j < 4) {
        X[i][j] = tmp;
      } else {
        y[i] = tmp;
      };

      j++;
      line.erase(0, pos + delimiter.length());

    };

    i++;

  };

  myfile.close();
};

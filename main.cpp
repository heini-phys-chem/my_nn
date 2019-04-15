#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#include "utiles.h"
#include "global.h"

typedef std::vector< std::vector<double> > matrix;
typedef std::vector<double> vec;

int main (void) 
{

  // get number of nRows and nCols
  int nRow = X.size();
  int nCol = X[0].size();

  // define new matrix
  matrix X_new(nCol);
  matrix X_mult(nCol);
  vec sig(nCol);

  X_new = transpose(X, nRow, nCol);
  X_mult = dot_m(X, X);
  sig = sigmoid(y);

  std::cout << "initial matrix:" << std::endl;
  print_matrix(X);

  std::cout << "\ntranspose of matrix:" <<std::endl;
  print_matrix(X_new);

  std::cout << "\nmatrix multiplication of X*X:" <<std::endl;
  print_matrix(X_mult);

  std::cout << "\nsigmoid output for vector" << std::endl;
  for (int i = 0; i < nRow; i++) {
    std::cout << sig[i] << std::endl;
  };

	return(0);
}


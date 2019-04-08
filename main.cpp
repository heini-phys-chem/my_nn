#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#include "utiles.h"
#include "global.h"


int main (void) 
{

  // get number of nRows and nCols
  int nRow = X.size();
  int nCol = X[0].size();

  // define new matrix
  std::vector<std::vector<double>> X_new(nCol);
  std::vector<double> sig(nCol);

  X_new = transpose(X, nRow, nCol);
  sig = sigmoid(y);

  std::cout << "initial matrix:" << std::endl;
  print_matrix(X);

  std::cout << "\ntranspose of matrix:" <<std::endl;
  print_matrix(X_new);

  std::cout << "\nsigmoid output for vector" << std::endl;
  for (int i = 0; i < nRow; i++) {
    std::cout << sig[i] << std::endl;
  };

	return(0);
}


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
  int nCol = X.size();
  int nRow = X[0].size();

  matrix X_new(nCol);
  X_new = transpose(X, nRow, nCol);

  for (int i = 0; i < 50; i++) {

    vec pred = sigmoid(dot_m(X_new, w));
    vec pred_error = substract_vectors(y, pred);
    vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
    vec w_delta = dot_m(transpose(X_new, nRow, nCol), pred_delta);

    w = add_vectors(w, w_delta);
    
//    if (i == 49) {
      print_vector(pred);
      std::cout << std::endl;
//    };
  };

	return(0);
}

/*
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
 */

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


  for (int i = 0; i < 50; i++) {

    //vec pred = sigmoid(dot_m(X, w));
    //vec pred_error = substract_vectors(y, pred);
    //vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
    //vec w_delta = dot_m(transpose(X, nRow, nCol), pred_delta);
    //w = add_vectors(w, w_delta);
    vec pred = sigmoid(dot_m(X, w));
      std::cout << "prediction:" << std::endl;
      print_vector(pred);
      std::cout << std::endl;

    vec pred_error = substract_vectors(pred, y);
      std::cout << "error:" << std::endl;
      print_vector(pred_error);
      std::cout << std::endl;

    vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
      std::cout << "delta:" << std::endl;
      print_vector(sigmoid_d(pred));
      std::cout << std::endl;

    vec w_delta = dot_m(transpose(X, nRow, nCol), pred_delta);
      std::cout << "w delta:" << std::endl;
      print_vector(w_delta);
      std::cout << std::endl;

    w = add_vectors(w, w_delta);
      std::cout << "w:" << std::endl;
      print_vector(w);
      std::cout << std::endl;


   if (i == 49) {
      std::cout << std::endl;
      print_vector(pred);
      std::cout << std::endl;
    };

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

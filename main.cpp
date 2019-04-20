#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#include "utiles.h"
#include "global.h"

typedef std::vector< std::vector<double> > matrix;
typedef std::vector<double> vec;

int main (void) 
{

  for (int i = 0; i < 50; i++) {

    //vec pred = sigmoid(dot_m(X, w));
    //vec pred_error = substract_vectors(y, pred);
    //vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
    //vec w_delta = dot_m(transpose(X, nRow, nCol), pred_delta);
    //w = add_vectors(w, w_delta);
    vec pred = sigmoid(dot_m(X, w));
      //std::cout << "prediction:" << std::endl;
      //print_vector(pred);
      //std::cout << std::endl;

    vec pred_error = substract_vectors(y, pred);
      //std::cout << "error:" << std::endl;
      print_vector(pred_error);
      std::cout << std::endl;
      //std::cout << std::endl;

    vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
      //std::cout << "delta:" << std::endl;
      //print_vector(sigmoid_d(pred));
      //std::cout << std::endl;

    vec w_delta = dot_m(transpose(X), pred_delta);
      //std::cout << "w delta:" << std::endl;
      //print_vector(w_delta);
      //std::cout << std::endl;

    w = add_vectors(w, w_delta);
      //std::cout << "w:" << std::endl;
      //print_vector(w);
      //std::cout << std::endl;
    //std::cout << w[0] << "\t" << w[1] << "\t" << w[2] << "\t" << w[3] << std::endl;

    if (i == 49) {
      std::cout << std::endl;
      print_vector(pred);
      std::cout << std::endl;
    };

  };

	return(0);
}

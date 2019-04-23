#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
#include<math.h>

#include "utiles.h"
#include "global.h"

typedef std::vector< std::vector<float> > matrix;
typedef std::vector<float> vec;

int main (void) 
{
  vec w =  {0.5, 0.5, 0.5, 0.5};

  for (int i = 0; i < 50; i++) {

    //vec pred = sigmoid(dot_m(X, w));
    //vec pred_error = substract_vectors(y, pred);
    //vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
    //vec w_delta = dot_m(transpose(X, nRow, nCol), pred_delta);
    //w = add_vectors(w, w_delta);
    vec pred = sigmoid(dot_m(X, w));
      std::cout << "\033[1;33m prediction:\033[0m" << std::endl;
      print_vector(pred);
      std::cout << std::endl;

    vec pred_error = substract_vectors(y, pred);
      std::cout << "\033[1;33m error:\033[0m" << std::endl;
      print_vector(pred_error);
      std::cout << std::endl;

    vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
      std::cout << "\033[1;33m delta:\033[0m" << std::endl;
      print_vector(pred_delta);
      std::cout << std::endl;
      print_vector(sigmoid_d(pred));

    vec w_delta = dot_m(transpose(X), pred_delta);
      std::cout << "\033[1;33m w delta:\033[0m" << std::endl;
      print_vector(w_delta);
      std::cout << std::endl;

    w = add_vectors(w, w_delta);
      std::cout << "\033[1;33m w:\033[0m" << std::endl;
      print_vector(w);
      std::cout << std::endl;
    //std::cout << w[0] << "\t" << w[1] << "\t" << w[2] << "\t" << w[3] << std::endl;

    if (i == 49) {
      std::cout << std::endl;
      print_vector(pred);
      std::cout << std::endl;
    };

  };

	return(0);
}

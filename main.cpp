#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "utiles.h"
//#include "global.h"

typedef std::vector< std::vector<float> > matrix;
typedef std::vector<float> vec;


int main (void) 
{

  matrix X(4);
  for (int k = 0; k < 4; k++) {
    X[k].resize(4);
  };

  vec y(4);

  vec w =  {0.5, 0.5, 0.5, 0.5};

  read_in_input(X, y);

  for (int i = 0; i < 50; i++) {

    vec pred = sigmoid(dot_m(X, w));
    vec pred_error = substract_vectors(y, pred);
    vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
    vec w_delta = dot_m(transpose(X), pred_delta);
    w = add_vectors(w, w_delta);

    if (i == 49) {
      std::cout << std::endl;
      print_vector(pred);
      std::cout << std::endl;
      print_mean(pred_error);
    };

  };

	return(0);
}

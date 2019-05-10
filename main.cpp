#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "utiles.h"
//#include "global.h"

typedef std::vector< std::vector<float> > matrix;
typedef std::vector<float> vec;

void print_test(std::string s) {
  std::cout << "print test: " << s << std::endl;
};

void test_vectors(vec v) {
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}

int main (void) 
{

  int limit = 500;

  matrix X(800);
  for (int k = 0; k < 800; k++) {
    X[k].resize(27);
  };

  vec y(800);

  vec w(27);
  for (int k = 0; k < 27; k++) {
    w[k] = .5;
  };

  read_in_input(X, y);

  for (int i = 0; i < limit; i++) {

    vec pred = sigmoid(dot_m(X, w));
    vec pred_error = substract_vectors(y, pred);
    vec pred_delta = multiply_vectors(pred_error, sigmoid_d(pred));
    vec w_delta = dot_m(transpose(X), pred_delta);
    w = add_vectors(w, w_delta);
    for (int k = 0; k < w.size(); k++) {
      std::cout << w[k] << " ";
    }

    std::cout << "\n";

    if (i == limit - 1) {
      std::cout << std::endl;
      //print_vector(pred);
      //std::cout << std::endl;
      print_mean(pred_error);
    };

  };

	return(0);
}

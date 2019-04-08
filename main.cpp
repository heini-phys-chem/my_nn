#include <iostream>
#include <vector>

#include "utiles.h"


int main (void) 
{

  // define test vectors and matrices
	std::vector<double> x = {1.2,2.2,1.3,3.1};
  std::vector<double> y = {2.2,1.5,5.,3.};
  std::vector<std::vector<double>> matrix(4);
  
  for (int k = 0; k < 4; k++) {
    matrix[k].resize(3);
  };

  // get number of nRows and nCols
  int nRow = matrix.size();
  int nCol = matrix[0].size();

  // fill matrix with numbers
  for (int i = 0; i < nRow; i++) {
    for (int j = 0; j < nCol; j++) { 
      matrix[i][j] = i;
    };
  };

  // define new matrix
  std::vector<std::vector<double>> matrix_new(nCol);
  for (int k = 0; k < nCol; k++) {
    matrix_new[k].resize(nRow);
  };

  matrix_new = transpose(matrix, nRow, nCol);

  print_matrix(matrix);
  std::cout << std::endl;
  print_matrix(matrix_new);

	return(0);
}


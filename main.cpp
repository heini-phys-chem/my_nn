#include <iostream>
#include <vector>

#include "utiles.h"
#include "global.h"


int main (void) 
{

  // get number of nRows and nCols
  int nRow = matrix.size();
  int nCol = matrix[0].size();

  // define new matrix
  std::vector<std::vector<double>> matrix_new(nCol);

  matrix_new = transpose(matrix, nRow, nCol);

  print_matrix(matrix);
  std::cout << std::endl;
  print_matrix(matrix_new);

	return(0);
}


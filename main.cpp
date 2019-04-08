#include <iostream>
#include <vector>

#include "utiles.h"
#include "global.h"


int main (void) 
{

//  // define test vectors and matrices
//	std::vector<double> x = {1.2,2.2,1.3,3.1};
//  std::vector<double> y = {2.2,1.5,5.,3.};
//  std::vector<std::vector<double>> matrix = {
//    {1,2,3},
//    {4,5,6},
//    {7,8,9},
//    {10,11,12}
//  };
  
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


#include <vector>

typedef std::vector< std::vector<float> > matrix;
typedef std::vector<float> vec;
//matrix name(sizeX, std::vector<float>(sizeY));


//vec w = {0.5,0.5,0.5,0.5};
vec y = {0.0,
         0.0,
         1.0,
         1.0};

matrix X = {
   {5.1, 3.5, 1.4, 0.2},
   {4.9, 3.0, 1.4, 0.2},
   {6.2, 3.4, 5.4, 2.3},
   {5.9, 3.0, 5.1, 1.8}
 };

//matrix X = {
//  {5.1,4.9,6.2,5.9},
//  {3.5,3.0,3.4,3.0},
//  {1.4,1.4,5.4,5.1},
//  {0.2,2.3,2.3,1.8}
//};

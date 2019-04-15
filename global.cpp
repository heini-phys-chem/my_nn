#include <vector>

typedef std::vector< std::vector<double> > matrix;
typedef std::vector<double> vec;
//matrix name(sizeX, std::vector<double>(sizeY));


vec w = {.5,.5,.5,.5};
vec y = {0,0,1,1};
vec pred = {0.0,0.0,.99,.99};

matrix X = {
   {5.1,3.5,1.4,0.2},
   {4.9,3.0,1.4,2.3},
   {6.2,3.4,5.4,2.3},
   {5.9,3.0,5.1,1.8}
 };


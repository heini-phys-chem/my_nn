typedef std::vector< std::vector<double> > matrix;
typedef std::vector<double> vec;

vec add_vectors(vec v1, vec v2);

vec substract_vectors(vec v1, vec v2);

double dot(vec v1, vec v2);

void print_matrix(matrix m);

matrix transpose( matrix m, int nRow, int nCol);

vec sigmoid (vec v1);

vec sigmoid_d (vec v1);

vec read_in_vector();

typedef std::vector< std::vector<float> > matrix;
typedef std::vector<float> vec;

vec add_vectors(vec v1, vec v2);

vec substract_vectors(vec v1, vec v2);

vec multiply_vectors(vec v1, vec v2);

float dot(vec v1, vec v2);

void print_matrix(matrix m);

void print_vector(vec &v);

matrix transpose( matrix m);

vec dot_m(matrix m1, vec v2);

vec sigmoid (vec v1);

vec sigmoid_d (vec& v1);

vec read_in_vector();

void read_in_input(matrix &X, vec &y);

void print_mean(vec &pred_error);

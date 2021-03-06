struct c8_complex
{
  double real;
  double imag;
};

double             c8_abs ( struct c8_complex *c );
struct c8_complex *c8_acos ( struct c8_complex *c1 );
struct c8_complex *c8_acosh ( struct c8_complex *c1 );
struct c8_complex *c8_add ( struct c8_complex *c1, struct c8_complex *c2 );
double             c8_arg ( struct c8_complex *c );
struct c8_complex *c8_asin ( struct c8_complex *c1 );
struct c8_complex *c8_asinh ( struct c8_complex *c1 );
struct c8_complex *c8_atan ( struct c8_complex *c1 );
struct c8_complex *c8_atanh ( struct c8_complex *c1 );
struct c8_complex *c8_conj ( struct c8_complex *c1 );
void               c8_copy ( struct c8_complex *c1, struct c8_complex *c2 );
struct c8_complex *c8_cos ( struct c8_complex *c1 );
struct c8_complex *c8_cosh ( struct c8_complex *c1 );
struct c8_complex *c8_cube_root ( struct c8_complex *c1 );
struct c8_complex *c8_div ( struct c8_complex *c1, struct c8_complex *c2 );
struct c8_complex *c8_div_r8 ( struct c8_complex *c1, double r );
struct c8_complex *c8_exp ( struct c8_complex *c1 );
struct c8_complex *c8_i ( void );
double             c8_imag ( struct c8_complex *c );
struct c8_complex *c8_inv ( struct c8_complex *c1 );
struct c8_complex *c8_log ( struct c8_complex *c1 );
double c8_mag ( struct c8_complex *c );
struct c8_complex *c8_mul ( struct c8_complex *c1, struct c8_complex *c2 );
struct c8_complex *c8_neg ( struct c8_complex *c1 );
struct c8_complex *c8_normal_01 ( int *seed );
struct c8_complex *c8_one ( void );
double             c8_real ( struct c8_complex *c );
struct c8_complex *c8_sin ( struct c8_complex *c1 );
struct c8_complex *c8_sinh ( struct c8_complex *c1 );
struct c8_complex *c8_sqrt ( struct c8_complex *c1 );
struct c8_complex *c8_sub ( struct c8_complex *c1, struct c8_complex *c2 );
void               c8_swap ( struct c8_complex *c1, struct c8_complex *c2 );
struct c8_complex *c8_tan ( struct c8_complex *c1 );
struct c8_complex *c8_tanh ( struct c8_complex *c1 );
void               c8_to_cartesian ( struct c8_complex *c, double *x, double *y );
void               c8_to_polar ( struct c8_complex *c, double *r, double *theta );
struct c8_complex *c8_uniform_01 ( int *seed );
struct c8_complex *c8_zero ( void );
struct c8_complex *cartesian_to_c8 ( double x, double y );
struct c8_complex *polar_to_c8 ( double r, double theta );
double             r8_uniform_01 ( int *seed );
void               sort_heap_external ( int n, int *indx, int *i, int *j, int isgn );
void               timestamp ( void );

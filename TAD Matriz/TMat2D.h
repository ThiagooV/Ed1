#include <stdlib.h>

typedef struct TMat2D TMat2D;


TMat2D *mat2D_create(int nrows, int ncolumns);

int mat2D_free(TMat2D *mat);

int mat2D_set_value(TMat2D *mat, int i, int j, double val);
int mat2D_get_value(TMat2D *mat, int i, int j, double *val);

int mat2D_set_random(TMat2D *mat, double minimum, double limit);

int add_matrix(TMat2D *mat, TMat2D *mat2, TMat2D *result);

int mult_matrix(TMat2D *mat, TMat2D *mat2, TMat2D *result);

int mult_matrix_scalar(TMat2D *mat, double value);

int tr_matrix(TMat2D *mat, double *value);

int sum_lines(TMat2D *mat, double *vet);

int sum_columns(TMat2D *mat, double *vet);

void print_matriz(TMat2D *mat);

int mat2D_get_nrows(TMat2D *mat, int *val);

int mat2D_get_ncolumns(TMat2D *mat, int *val);

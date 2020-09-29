#include "TMat2D.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TMat2D
{
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
};


TMat2D *mat2D_create(int nrows, int ncolumns){


  if ( (nrows <= 0 ) || (ncolumns <=0) ){
    return NULL;
  }

  TMat2D *mat;
  mat = (TMat2D *)malloc(sizeof(TMat2D));// aloca 12 bytes
                                        // nrows, ncolumns, *data
  if (mat == NULL){
    return NULL;
  }

  mat->data = calloc(1,sizeof(double)*nrows*ncolumns);
  if (mat->data == NULL){
      free(mat);
      return NULL;
  }

  mat->nrows = nrows;
  mat->ncolumns = ncolumns;


  return mat;

}

int mat2D_free(TMat2D *mat){
    free(mat);
    free(mat->data);

    return 0;
}

int mat2D_set_value(TMat2D *mat, int i, int j, double val){

    int pos = 0;

    if (mat == NULL){
        return -1;
    }

    if ( (i < 0 ) || (j < 0) ){
        return -2;
    }

    if((i > mat->nrows) || (j > mat->ncolumns)){
        return -2;
    }

    pos = (j * mat->nrows) + i;

    mat->data[pos] = val;

    return 0;
}

int mat2D_set_random(TMat2D *mat, double minimum, double limit){

    if (mat == NULL){
        return -1;
    }

    double aux = 0.0;

    srand(time(NULL));
    for(int i = 0; i < (mat->nrows * mat->ncolumns); i++){
        aux = (double) rand()/ ((double) RAND_MAX + 1);
        mat->data[i] =  minimum + (aux * (limit - minimum ));

    }
    return 0;
}

int mat2D_get_value(TMat2D *mat, int i, int j, double *val){

    int pos = 0;

    if (mat == NULL){
        return -1;
    }

    if ( (i < 0 ) || (j < 0) ){
        return -2;
    }

    if((i > mat->nrows) || (j > mat->ncolumns)){
        return -2;
    }

    pos = (j * mat->nrows) + i;
    *val = mat->data[pos];


    return 0;
}

int mat2D_get_nrows(TMat2D *mat, int *val){

    if (mat == NULL){
        return -1;
    }

    *val = mat->nrows;

    return 0;
}

int mat2D_get_ncolumns(TMat2D *mat, int *val){

    if (mat == NULL){
        return -1;
    }

    *val = mat->ncolumns;

    return 0;
}

void print_matriz(TMat2D *mat){
    int k, w;
    w = 0;

    for(int x = 0;  x < mat->nrows; x++){

        for(k = 0; k < mat->ncolumns; k++){
            printf("%.2lf\t", mat->data[x + w]);
            w = w + mat->nrows;
        }
        w = 0;
        printf("\n");
    }

}

int add_matrix(TMat2D *mat, TMat2D *mat2, TMat2D *result){

    if(mat->ncolumns != mat2->ncolumns && mat->nrows != mat2->nrows)
        return -1;

    for(int i = 0; i < (mat->ncolumns * mat->nrows); i++){
        result->data[i] = mat->data[i] + mat2->data[i];
    }

    return 0;

}

int mult_matrix(TMat2D *mat, TMat2D *mat2, TMat2D *result){

    if(mat->nrows != mat2->ncolumns){
        return -1;
    }

    int i,j, f, k, w, x;
    float aux;
    w = i = f = 0;
    aux = 0.0;

    for(x = 0;  x < mat->nrows; x++){
        f = x;//organiza as linhas salvas no vetor result
        for(j = 0; j < mat2->ncolumns; j++){
            for(k = 0; k < mat->ncolumns; k++){
                aux += mat->data[x + w] * mat2->data[i];
                w = w + mat->nrows;
                i++;
            }
            result->data[f] = aux;
            f += mat->nrows;//organiza as colunas salvas no vetor result
            w = 0;
            aux = 0;
        }
        i = 0;
    }

    return 0;
}

int mult_matrix_scalar(TMat2D *mat, double value){

    int i;
    double aux;
    aux = mat->ncolumns * mat->ncolumns;

    if (mat == NULL){
        return -1;
    }
    for(i = 0; i < aux; i++){
        mat->data[i] = mat->data[i] * value;

    }

    return 0;

}

int tr_matrix(TMat2D *mat, double *value){

    if (mat == NULL){
        return -1;
    }

    int i, w;

    w = 0;
    for(i = 0; i < mat->nrows; i++){

        *value = *value + mat->data[w];
        w = w + mat->nrows + 1;

    }

    return 0;
}

int sum_lines(TMat2D *mat, double *vet){

    if (mat == NULL){
        return -1;
    }

    int i, j, w;
    double aux;

    w = 0;
    for(i = 0; i < mat->nrows; i++){
        w = i;
        for(j = 0; j < mat->ncolumns; j++){
            aux = aux + mat->data[w];
            w = w + mat->nrows;
        }
        vet[i] = aux;
        aux = 0.0;
    }
    vet[i] = '\0';

    return 0;
}

int sum_columns(TMat2D *mat, double *vet){

    if (mat == NULL){
        return -1;
    }

    int i, j, w;
    double aux;

    w = 0;
    for(i = 0; i < mat->nrows; i++){

        for(j = 0; j < mat->ncolumns; j++){
            aux = aux + mat->data[w];
            w++;
        }
        vet[i] = aux;
        aux = 0.0;

    }
    vet[i] = '\0';

    return 0;
}



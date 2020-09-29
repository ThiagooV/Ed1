#include <stdio.h>
#include "TMat2D.h"


int main(void) {


  //------------------ Matriz principal ------------------
    TMat2D *matriz;

    int ret = 0;

    matriz = mat2D_create(3,3);

    ret = mat2D_set_random(matriz, 1, 10);
    if (ret == -1){
        printf("ERROO!!");
    }

    printf("Matriz Gerada: \n");
    print_matriz(matriz);
    printf("\n");


   //------------------ Escrever elemento em i,j ------------------

    ret = mat2D_set_value(matriz, 0, 0, 17.5);
    if (ret == -1){
        printf("ERROO!!");
    }
    if (ret == -2){
        printf("Posição inválida!!");
    }
    printf("Usando set value para modificar o elemento (0,0) para 17.5\n");
    print_matriz(matriz);
    printf("\n");


   //------------------ Acessar elemento em i,j ------------------

    double value = 0.0;
    double *p_value = &value;

    ret = mat2D_get_value(matriz, 2, 1, p_value);
    if (ret == -1){
        printf("ERROO!!");
    }
    if (ret == -2){
        printf("Posição inválida!!");
    }
    printf("Usando get value para obter o elemento (2,1) da matriz: %.2lf", value);
    printf("\n\n");




   //------------------ Somar duas matrizes ------------------


    TMat2D *matriz2, *res_matriz;

    matriz2 = mat2D_create(3,3);
    res_matriz = mat2D_create(3,3);

    ret = mat2D_set_random(matriz2, 1, 10);
    if (ret == -1){
        printf("ERROO!!");
    }

    printf("Somando a matriz inicial com outra:\n");

    printf("Segunda matriz: \n");
    print_matriz(matriz2);
    printf("\n");

    printf("Soma das matrizes: \n");
    ret = add_matrix(matriz, matriz2, res_matriz);
    if (ret == 0)
        print_matriz(res_matriz);
    else
        printf("ERROO!!");
    printf("\n");

    mat2D_free(matriz2);
    mat2D_free(res_matriz);

{   //------------------ Multiplicar duas matrizes ------------------

    TMat2D *matriz, *matriz2, *res_matriz;

    int ret = 0;

    matriz = mat2D_create(3,2);
    matriz2 = mat2D_create(2,3);
    res_matriz = mat2D_create(2,2);

    ret = mat2D_set_random(matriz, 1, 10);
    if (ret == -1){
        printf("ERROO!!");
    }

    ret = mat2D_set_random(matriz2, 1, 10);
    if (ret == -1){
        printf("ERROO!!");
    }

    printf("Gerando duas matrizes novas e efetuando a multiplicação delas:\n");
    printf("Primeira matriz: \n");
    print_matriz(matriz);
    printf("\n");

    printf("Segunda matriz: \n");
    print_matriz(matriz2);
    printf("\n");

    printf("Multiplicação das matrizes: \n");
    ret = mult_matrix(matriz, matriz2, res_matriz);
    if (ret == 0)
        print_matriz(res_matriz);
    else
        printf("ERROO!!");
    printf("\n");

    mat2D_free(matriz);
    mat2D_free(matriz2);
    mat2D_free(res_matriz);

}

{   //------------------ Multiplicar matrizes por escalar ------------------

    TMat2D *matriz;

    int ret = 0;
    double value = 5.0;

    matriz = mat2D_create(3,2);

    ret = mat2D_set_random(matriz, 1, 10);
    if (ret == -1){
        printf("ERROO!!");
    }

    printf("Multiplicação da matrizes por um valor escalar: \n");
    printf("Matriz original: \n");
    print_matriz(matriz);

    printf("\n");
    printf("Matriz obtida: \n");
    ret = mult_matrix_scalar(matriz, value);
    if (ret == 0)
        print_matriz(matriz);
    else
        printf("ERROO!!");

    printf("\n");

    mat2D_free(matriz);

}

   //------------------ Calcular traço da matriz ------------------

    double traco, *p_traco;
    p_traco = &traco;

    printf("Calculando o traço da matriz: \n");
    printf("Matriz: \n");
    print_matriz(matriz);
    printf("\n");

    printf("Traço da matriz: \n");
    ret = tr_matrix(matriz, p_traco);
    if (ret == 0)
        printf("Traço = %.2lf\n", traco);
    else
        printf("ERROO!!");

    printf("\n");

    //------------------ Somar linhas/colunas da matriz ------------------

    double *p_vet_lines, *p_vet_columns;
    int *p_lines, *p_columns;

    p_lines = (int *)malloc(sizeof(int));
    p_columns = (int *)malloc(sizeof(int));

    ret = mat2D_get_nrows(matriz, p_lines);
    if (ret == -1){
        printf("ERROO ao obter as linhas!!");
    }

    ret = mat2D_get_ncolumns(matriz, p_columns);
    if (ret == -1){
        printf("ERROO ao obter as colunas!!");
    }

    p_vet_lines = (double *)malloc((*p_lines) * sizeof(double));
    ret = sum_lines(matriz, p_vet_lines);
    if (ret == -1){
        printf("ERROO!!");
    }

    printf("Vetor com a soma das linhas: \n");
    for(int i = 0; p_vet_lines[i] != '\0'; i++){
        printf("%.2lf\t", p_vet_lines[i]);
    }
    printf("\n\n");

    free(p_vet_lines);
    free(p_lines);

    p_vet_columns = (double *)malloc((*p_columns) * sizeof(double));
    ret = sum_columns(matriz, p_vet_columns);
    if (ret == -1){
        printf("ERROO!!");
    }

    printf("Vetor com a soma das colunas: \n");
    for(int i = 0; p_vet_columns[i] != '\0'; i++){
        printf("%.2lf\t", p_vet_columns[i]);
    }

    printf("\n\n");



  return 0;
}

#include <stdio.h>
#include<stdlib.h>


int main(void) {
  int *produtos;
  int n,i;

  n = 5;

  produtos = (int *)malloc(n*sizeof(int));


  for (i = 0; i < n; i++){
    printf("Informe o valor do produto %d R$:",i+1);
    scanf("%d", &produtos[i]);
  }

  printf("\nProdutos cadastrados\n");

  for (i = 0; i < n; i++){
    printf("Produto %d  - R$: %d\n",i+1, produtos[i]);
  }

  free(produtos);

  return 0;
}


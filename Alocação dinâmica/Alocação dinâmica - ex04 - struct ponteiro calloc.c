#include <stdio.h>
#include<stdlib.h>

struct inteiros{
    int x, y;
};


int main(void)
{
    struct inteiros *numeros;
    int n,i;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &n);
    printf("\n");

    numeros = calloc(n,sizeof(struct inteiros));

    for (i = 0; i < n; i++)
    {
        printf("Entre com a coordenada x do ponto %d: " ,i+1);
        scanf("%d", &numeros[i].x);
        printf("Entre com a coordenada y do ponto %d: " ,i+1);
        scanf("%d", &numeros[i].y);
        printf("\n\n");
    }

    printf("Pontos digitados: ");
    for (i = 0; i < n; i++)
    {
        printf("(%d,%d); ", numeros[i].x, numeros[i].y);
    }

    free(numeros);

    return 0;
}


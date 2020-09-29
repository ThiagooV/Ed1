#include <stdio.h>
#include<stdlib.h>


int main(void)
{
    int *numeros;
    int n,i, pares, impares;

    printf("Quantos inteiros serão lidos: ");
    scanf("%d", &n);
    printf("\n");


    numeros = (int *)malloc(n*sizeof(int));


    for (i = 0; i < n; i++)
    {
        printf("\n%dº inteiro: ",i+1);
        scanf("%d", &numeros[i]);
    }

    pares = impares = 0;
    for (i = 0; i < n; i++)
    {
        if(numeros[i]%2 == 0)
            pares++;
        else
            impares++;
    }

    printf("\n\n");
    printf("São pares: %d dos %d inteiros lidos.\n", pares, n);
    printf("São impares: %d dos %d inteiros lidos.", impares, n);

    free(numeros);

    return 0;
}


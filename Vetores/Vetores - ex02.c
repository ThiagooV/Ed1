#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, vet[6];
    i = 1;
    n = 0;

    printf("<< Listando um vetor >> \n");

    do{
        printf("Entre com o número %d: ", i);
        scanf("%d", &vet[n]);

        i++;
        n++;

    }while (n < 6);

    printf("\nOs valores lidos são: %d %d %d %d %d %d\n", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);

    return 0;
}

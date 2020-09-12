#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior, menor, soma;
    float media, vet[5];

    printf("<< 5 valores >> \n");

    for(n = 0 ; n < 5 ; n++){
        printf("Entre com o número %d: ", n+1);
        scanf("%f", &vet[n]);
        getchar();
    }

    maior = vet[0];
    menor = vet[0];
    media = 0;

    for(n = 0 ; n < 5 ; n++){
        if( menor > vet[n])
            menor = vet[n];
        else if( maior < vet[n])
            maior = vet[n];

        soma += vet[n];

    }

    media = soma/5.0;

    printf("Os números digitados são: ");

    for( n = 0 ; n <5 ; n++)
        printf("%.0f ", vet[n]);

    printf("\n");
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    printf("A média é: %.1f\n", media);

    return 0;
}

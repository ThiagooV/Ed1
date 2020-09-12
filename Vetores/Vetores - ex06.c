#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior, menor, soma, pos_menor, pos_maior;
    float media, vet[5];

    printf("<< 5 valores >> \n");

    for(n = 0 ; n < 5 ; n++){
        printf("Entre com o número %d: ", n+1);
        scanf("%f", &vet[n]);
        getchar();
    }

    maior = vet[0];
    menor = vet[0];
    media = soma = n = pos_menor = pos_maior = 0;

    for(n = 0 ; n < 5 ; n++){
        if( menor > vet[n]){
            menor = vet[n];
            pos_menor = n;
        }else if( maior < vet[n]){
            maior = vet[n];
            pos_maior = n;
        }
        soma += vet[n];

    }

    media = soma/5.0;

    printf("Os números digitados são: ");

    for( n = 0 ; n <5 ; n++)
        printf("%.0f ", vet[n]);

    printf("\n");
    printf("O maior valor é: %d, localizado na posição %d do vetor\n", maior, pos_maior);
    printf("O menor valor é: %d, localizado na posição %d do vetor\n", menor, pos_menor);
    printf("A média é: %.1f\n", media);

    return 0;
}

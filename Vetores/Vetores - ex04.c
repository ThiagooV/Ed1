#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, vet[6];

    n = 0;

    printf("<< Listando um vetor de números pares >> \n");

    do{
        printf("Entre com o número %d: ", n+1);
        scanf("%d", &vet[n]);
        while (vet[n]%2 != 0){
            printf("Erro: Valor inválido\n");
            printf("Entre com o número %d: ", n+1);
            scanf("%d", &vet[n]);
        }

        n++;

    }while (n < 6);

    printf("Os números pares digitados foram: ");

    for( n = 0 ; n < 6 ; n++ ){
        printf("%d ", vet[n]);
    }


    return 0;
}

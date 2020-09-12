#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, vet[6];

    n = 0;

    printf("<< Listando um vetor em ordem inversa >> \n");

    do{
        printf("Entre com o número %d: ", n+1);
        scanf("%d", &vet[n]);


        n++;

    }while (n < 6);

    printf("A ordem inversa dos números é: ");

    for( n = 5 ; n >= 0 ; n-- ){
        printf("%d ", vet[n]);
    }


    return 0;
}

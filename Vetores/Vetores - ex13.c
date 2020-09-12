#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[5] = {0,0,0,0,0};
    int i;

    printf("<< Zerando negativos >>\n");

    for( i = 0; i < 5; i++){
        printf("Entre com o número %d: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i] < 0)
            vet[i] = 0;
    }

    printf("Zerando os negativos, obtém-se:");
    for(i = 0 ; i < 5 ; i++)
        printf(" %d", vet[i]);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float valor[5], media, desv_pad, soma;

    media = desv_pad = 0;

    printf("<< Média e desvio-padrão >> \n");

    for(n = 0 ; n < 5 ; n++){
        printf("Digite o valor %d: ", n+1);
        scanf("%f", &valor[n]);
        getchar();
        soma += valor[n];
    }

    media = soma/5.0;

    soma = 0;
    for(n = 0 ; n < 5 ; n++){
        soma += pow(valor[n]-media,2);
    }

    desv_pad = sqrt(soma/4.0);

    printf("A média é %.4f e o desvio-padrão é %.4f", media, desv_pad);
    return 0;
}

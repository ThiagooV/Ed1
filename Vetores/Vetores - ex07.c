#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior;
    float notas[5];

    maior = 0;

    printf("<< Normalizando as notas >> \n");

    for(n = 0 ; n < 5 ; n++){
        printf("Entre com a nota do aluno %d: ", n+1);
        scanf("%f", &notas[n]);
        getchar();
    }

    maior = notas[0];

    for(n = 0 ; n < 5 ; n++){
        if( maior < notas[n])
            maior = notas[n];
    }

    printf("\n");
    printf("Notas normalizadas\n");

    for(n = 0 ; n < 5 ; n++){
        notas[n] = (notas[n]/maior) * 100;
        printf("A nota do aluno %d é %.0f\n", n+1, notas[n]);
    }

    return 0;
}

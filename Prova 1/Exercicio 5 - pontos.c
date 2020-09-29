#include <stdio.h>
#include<stdlib.h>

//ex 4

struct Coord{

    int x, y;
};

int main(void)
{

    struct Coord *pontos;
    int n, i;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &n);
    printf("\n");

    pontos = (struct Coord *) calloc(n, sizeof(struct Coord));

    for (i = 0; i < n; i++)
    {
        printf("Entre com a coordenada x do ponto %d: " ,i+1);
        scanf("%d", &pontos[i].x);
        printf("Entre com a coordenada y do ponto %d: " ,i+1);
        scanf("%d", &pontos[i].y);
        printf("\n\n");
    }

    printf("Pontos digitados: ");
    for (i = 0; i < n; i++)
    {
        printf("(%d,%d); ", pontos[i].x, pontos[i].y);
    }

    free(pontos);

    return 0;
}





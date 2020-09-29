#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct pontos{
    int x, y;
};

int main(void)
{
    int n, i, j;
    struct pontos *p_pontos;
    struct pontos *esquerda = NULL, *direita = NULL, *acima = NULL, *abaixo = NULL;

    n = 0;
    printf("Digite a quantidade de pontos que serão inseridos: ");
    scanf("%d", &n);

    p_pontos = (struct pontos *)calloc(n, sizeof(struct pontos));
    esquerda = (struct pontos *)malloc(sizeof(struct pontos));
    direita = (struct pontos *)malloc(sizeof(struct pontos));
    acima = (struct pontos *)malloc(sizeof(struct pontos));
    abaixo = (struct pontos *)malloc(sizeof(struct pontos));

    for(i = 0; i < n; i++){
        printf("Indique as coordenadas(x,y) do %dº ponto: ", i+1);
        scanf("%d %d", &p_pontos[i].x, &p_pontos[i].y);
    }

    esquerda->x = p_pontos[0].x;
    direita->x = p_pontos[0].x;
    for(i = 0 ; i < n ; i++){
        if(p_pontos[i].x < esquerda->x){
            esquerda->x = p_pontos[i].x;
            esquerda->y = p_pontos[i].y;
        }else if(p_pontos[i].x > direita->x){
            direita->x = p_pontos[i].x;
            direita->y = p_pontos[i].y;
        }
    }

    acima->y = p_pontos[0].y;
    abaixo->y = p_pontos[0].y;
    for(i = 0 ; i < n ; i++){
        if(p_pontos[i].y > acima->y){
            acima->x = p_pontos[i].x;
            acima->y = p_pontos[i].y;
        }else if(p_pontos[i].y < abaixo->y){
            abaixo->x = p_pontos[i].x;
            abaixo->y = p_pontos[i].y;
        }
    }

    printf("Mais a esquerda (%d,%d);\n", esquerda->x, esquerda->y);
    printf("Mais a direita (%d,%d);\n", direita->x, direita->y);
    printf("Mais a acima (%d,%d);\n", acima->x, acima->y);
    printf("Mais a abaixo (%d,%d);\n", abaixo->x, abaixo->y);

    printf("Pontos digitados: ");
    for (i = 0; i < n; i++)
    {
        printf("(%d,%d); ", p_pontos[i].x, p_pontos[i].y);

    }
    printf("\n");


    free(p_pontos);
    return 0;
}

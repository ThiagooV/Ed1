#include <stdio.h>
#include<stdlib.h>
#include<math.h>

//ex 4

struct Coord{

    int x, y;
};

struct Retangulo{

    struct Coord inicio, fim;
};

int main(void)
{
    struct Retangulo re;
    float dig, are;

    printf("Informe o ponto 1 (x): ");
    scanf("%d",&re.inicio.x);
    printf("\nInforme o ponto 1 (y): ");
    scanf("%d",&re.inicio.y);
    printf("\nInforme o ponto 2 (x): ");
    scanf("%d",&re.fim.x);
    printf("\nInforme o ponto 2 (y): ");
    scanf("%d",&re.fim.y);

    dig = sqrt(pow((re.inicio.x - re.fim.x), 2) + pow((re.inicio.y - re.fim.y), 2));

    printf("Ponto 1 (x): %d\n", re.inicio.x);
    printf("Ponto 1 (y): %d\n", re.inicio.y);
    printf("Ponto 2 (x): %d\n", re.fim.x);
    printf("Ponto 2 (y): %d\n", re.fim.y);

    are = (re.inicio.x - re.fim.x) * (re.inicio.y - re.fim.y);

    printf("Área formada por (%d,%d) e (%d,%d) é %.2f", re.inicio.x, re.inicio.y, re.fim.x, re.fim.y, are);


    return 0;
}




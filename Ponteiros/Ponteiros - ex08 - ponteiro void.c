#include <stdio.h>
#include <string.h>

int main(void)
{

    int a = 0;
    double b = 0;

    void *p = NULL;

    p = &a;
    printf("Digite um inteiro: ");
    scanf("%d", (int *)p);
    printf("\n");

    printf("Inteiro digitado %d", *(int *)p);
    printf("\n\n");

    p = &b;
    printf("Digite um número real: ");
    scanf("%lf", (double *)p);
    printf("\n");

    printf("Inteiro digitado %.2lf", *(double *)p);
    printf("\n\n");

    return 0;
}


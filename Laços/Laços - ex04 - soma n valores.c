#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, total = 0;

    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos números deseja somar? ");
    scanf("%d", &n);

    printf("A soma dos %d primeiros números naturais usando for é:", n);

    for( i = n ; i >= 0 ; i--){


        total += i;


    }
    printf(" %d\n", total);

    printf("A soma dos %d primeiros números naturais usando usando while é:", n);

    i = n;
    total = 0;
    while( i >= 0)
    {


        total += i;
        i--;

    }
    printf(" %d\n", total);

    printf("A soma dos %d primeiros números naturais usando do..while é:", n);

    total = 0;
    do{


        total += n;
        n--;

    }while( n >= 0);
    printf(" %d", total);

    return 0;
}

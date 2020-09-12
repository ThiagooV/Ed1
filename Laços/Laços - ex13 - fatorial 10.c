#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, n;

    n = 1;
    numero = 1;

    printf("<< Fatorial >> \n");
    while( n <= 10){


        numero = numero * n;
        printf(" %d! = %d\n", n, numero);
        n++;

    }

    return 0;
}

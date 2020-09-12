#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, n;

    n = 1;
    numero = 1;

    printf("<< Fatorial >> \n");
    while( n <= 15){

        numero = numero * n;

        if(n > 10)
            printf(" %d! = %d\n", n, numero);
        n++;

    }

    return 0;
}
//Como a variável é inteiro, ela não suporta o valor do fatorial.
//Para resolver basta trocar o inteiro por float.

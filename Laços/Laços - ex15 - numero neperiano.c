#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fatorial, n, neperiano, aux;
    int entrada;

    aux = neperiano = 0;
    n = 1;
    fatorial = 1;

    printf("<< Número neperiano >> \n");
    printf("Entre com o número de termos: ");
    scanf("%d", &entrada);
    while( n <= entrada){

        fatorial = fatorial * n;

        aux = 1/fatorial;

        neperiano += aux;

        n++;

    }
    printf("e ~  %.14f\n", neperiano+1);
    //soma-se 1 porque não está sendo calculada o fatorial de 0

    return 0;
}


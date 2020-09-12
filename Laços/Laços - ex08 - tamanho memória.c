#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i = 2;
    double total;

    while(i <= 128){
        total = pow(2.0, i);

        //%G escolhe automaticamente entre %f e %E(notação científica maiúscula)
        printf("Com %d bits é possível endereçar %.15G posições de memória.\n", i, total);
        i *= 2;
    }

    return 0;
}

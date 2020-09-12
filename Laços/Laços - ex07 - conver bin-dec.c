#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    int n, i, num, total, entrada;

    n = 0;
    total = 0;
    i = 1;
    num = 0;
    entrada = 0;

    printf("<< Conversor binário-decimal >>\n");
    printf("Entre com o número de bits: ");
    scanf("%d", &n);


    while(n > 0){
        printf("Digite o bit #%d: ", i);
        scanf("%d", &num);
        total += num * pow(2, n-1);
        entrada += num * pow(10, n-1);
        n--;
        i++;

    }
    printf("O número binário %d em decimal é %d", entrada, total);


    return 0;
}

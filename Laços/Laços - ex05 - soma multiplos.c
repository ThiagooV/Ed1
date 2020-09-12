#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j , k, total;

    printf("<< Múltiplos >>\n");
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("\n");
    printf("Entre com o valor de i: ");
    scanf("%d", &i);
    printf("\n");
    printf("Entre com o valor de j: ");
    scanf("%d", &j);

    k = 0;
    total=0;

    printf("\n");
    printf("Os múltiplos de i ou j são: ");
    while(k < n){
        if(total%i == 0 || total%j == 0){
            printf("%d,", total);
            k++;
        }
        total++;
    }
    printf("\n");

    return 0;
}

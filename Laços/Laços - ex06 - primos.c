#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, div, primo;

    div = 2;
    primo = 1; //Se for = eh primo. Vamos testar

    printf("<< Números primos >>\n");
    printf("Entre com o valor: ");
    scanf("%d", &n);

    if(n <= 1 ){
        printf("O número %d não é primo", n);
    }

    while(div <= n/2 && primo == 1){
        if(n % div == 0){
            primo = 0;
        }
        div++;
    }
    if(primo == 1 ){
        printf("O número %d é primo\n", n);
    }
    else{
        printf("O número %d não é primo\n", n);
    }

    return 0;
}

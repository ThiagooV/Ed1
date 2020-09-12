#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, linha, n;

    linha = 0;
    n = 0;
    scanf("%d", &numero);
    while( numero <= 0){
    scanf("%d", &numero);
    }
    while(linha < numero){

        for(int i = 0; i <=  linha; i++){
        n += 1;
        printf("%d ", n);
        }

        printf("\n");
        linha++;

    }
    return 0;
}

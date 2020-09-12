#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;

    printf("<< Contagem progressiva até 0 >>\n");
    printf("Qual é o número inicial? ");
    scanf("%d", &n);

    printf("Usando for: ");

    for(i = n ; i <= 0 ; i++){

        printf("%d.. ", i);
        if(i == 0){
            printf("FIM!");
        }

    }

    printf("\n");
    printf("Usando while: ");

    i = n;
    while( i <= 0){

        printf("%d.. ", i);
        if(i == 0){
            printf("FIM!");
        }
        i++;

    }

    printf("\n");
    printf("Usando do..while: ");
    do{

        printf("%d.. ", n);
        if(n == 0){
            printf("FIM!");
        }
        n++;

    }while( n <= 0);
}

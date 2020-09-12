#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;

    printf("<< Contagem regressiva >>\n");
    printf("\n\n");
    printf("For: ");

    for( n; n >=0; n--){

        printf("%d.. ", n);
        if(n == 0){
            printf("FIM!");
        }
    }

    printf("\n\n");
    printf("While: ");

    n = 10;
    while( n >= 0){

        printf("%d.. ", n);
        if(n == 0){
            printf("FIM!");
        }
        n--;

    }

    printf("\n\n");
    printf("Do...While: ");
    n = 10;
    do{

        printf("%d.. ", n);
        if(n == 0){
            printf("FIM!");
        }
        n--;

    }while( n >= 0);

    return 0;
}

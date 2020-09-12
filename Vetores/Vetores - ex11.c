#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, v1_cont, v2_cont;
    int v[5], v1[5], v2[5];

    v1_cont = v2_cont = 0;


    printf("<< Pares e Ímpares >> \n");

    for(i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
        getchar();
    }

    for( i = 0; i <5 ; i++){
        if(v[i]%2 == 0){
            v2[v2_cont] = v[i];
            v2_cont++;
        }else{
            v1[v1_cont] = v[i];
            v1_cont++;
        }
    }

    printf("\n");

    printf("Ímpares: ");

    for(i = 0; i < v1_cont; i++){
        printf("%d\n", v1[i]);
        if(i < (v1_cont-1)){
            printf(", ");
        }
    }

    printf("\n");
    printf("Pares: ");
    for(i = 0; i < v2_cont; i++){
        printf("%d", v2[i]);
        if(i < (v2_cont-1)){
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

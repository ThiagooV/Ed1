#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    int vet_a[3] = {0,0,0}, vet_b[3] = {0,0,0}, vet_c[3] = {0,0,0};

    printf("<< Subtração de vetores >> \n");

    for(i = 0; i < 3; i++){
        printf("Digite o valor %d de A: ", i+1);
        scanf("%d", &vet_a[i]);
        getchar();
    }

    printf("\n");
    for(i = 0; i < 3; i++){
        printf("Digite o valor %d de B: ", i+1);
        scanf("%d", &vet_b[i]);
        getchar();
    }

    for(i = 0; i < 3; i++){
        vet_c[i] = vet_a[i] - vet_b[i];
    }

    printf("\n");
    printf("O vetor C, definido como C = A-B é (");

    for(i = 0; i < 3; i++){
        printf("%d", vet_c[i]);

        if(i < 2){
            printf(", ");
        }
    }
    printf(")");

    return 0;
}

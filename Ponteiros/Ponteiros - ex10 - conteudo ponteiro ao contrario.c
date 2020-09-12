#include <stdio.h>
#include <string.h>

int main(void)
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};

    printf("Conteúdo do vetor de trás para frente: ");
    for(int i = 9; i >= 0; i--){
        printf("%d, ", *(a+i));
    }

    return 0;
}


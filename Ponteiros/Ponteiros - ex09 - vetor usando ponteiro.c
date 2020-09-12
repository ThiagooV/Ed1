#include <stdio.h>


int main(void)
{

    double a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};

    printf("Conteúdo do vetor double: ");
    for(int i = 0; i < 10; i++){
        printf("%.0lf, ", *(a+i));
    }

    return 0;
}

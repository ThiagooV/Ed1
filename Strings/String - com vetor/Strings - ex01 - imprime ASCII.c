#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned char letra = ' ';
    int cont = 0;

    for(int i = 0; i < 95; i++){

        printf("%d %c 	 ", letra+i, letra+i);
        cont++;
        if(cont > 6){
            printf("\n");
            cont=0;
        }

    }
    return 0;
}

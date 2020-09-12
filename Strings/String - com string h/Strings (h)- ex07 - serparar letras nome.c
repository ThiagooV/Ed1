#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome1[50], nome2[50];
    int i, flag, lenght;

    printf("<< Separa letras >>\n");
    printf("Digite o nome: ");
    fgets( nome1, 49, stdin);

    lenght = strlen(nome1);

    for(i = 0; i < lenght-1; i++){
        printf("%da letra: %c\n", i+1, nome1[i]);
    }


    return 0;
}

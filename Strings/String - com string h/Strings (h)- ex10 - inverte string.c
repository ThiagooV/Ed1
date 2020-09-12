#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome[50];
    int i, lenght;


    printf("<< invertendo >>\n");
    printf("Digite a string: ");
    fgets( nome, 49, stdin);

    lenght = strlen(nome);

    printf("\nSaída invertida: ");
    for(i = lenght-1; i >= 0; i--){
        printf("%c", nome[i]);

    }
    return 0;
}

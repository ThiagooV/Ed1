#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome1[50], nome2[50];
    int lenght, i;

    printf("<< Compara nomes>>\n");
    printf("Digite o nome 1: ");
    fgets( nome1, 49, stdin);

    printf("\nDigite o nome 2: ");
    fgets( nome2, 49, stdin);

    i = strcmp(nome1, nome2);

    if(i == 0)
        printf("\nOs nomes digitados são iguais");
    else
        printf("\nOs nomes digitados são diferentes");

    return 0;
}

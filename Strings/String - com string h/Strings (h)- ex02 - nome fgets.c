#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[50];

    printf("<< Vetor de char>>\n");
    printf("Digite um nome: ");
    fgets( nome, 49, stdin);

    printf("O nome digitado é: %s", nome);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome[50];
    int lenght, i;

    printf("<< Vetor de char>>\n");
    printf("Digite um nome: ");
    fgets( nome, 49, stdin);

    lenght = strlen(nome);

    printf("O nome digitado é: ");
    for(i = 0; i <= lenght; i++){
        nome[i] = toupper(nome[i]);
    }
    printf("%s", nome);
    return 0;
}

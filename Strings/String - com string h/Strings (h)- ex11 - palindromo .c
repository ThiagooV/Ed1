#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome[50], invertida[50];
    int i, x, lenght;


    printf("<< Palíndromo >>\n");
    printf("Digite uma palavra: ");
    scanf("%s", nome);

    lenght = strlen(nome);

    for(i = 0; i< lenght; i++){

        invertida[lenght-i-1] = nome[i];

    }

    x = strcmp(nome, invertida);
    if(x == 0)
        printf("%s é palíndromo", nome);
    else
        printf("%s não é palíndromo", nome);


    return 0;
}

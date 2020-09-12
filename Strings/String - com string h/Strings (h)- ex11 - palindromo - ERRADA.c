#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome[50], invertida[50];
    int i,j, x, lenght;


    printf("<< Palíndromo >>\n");
    printf("Digite uma palavra: ");
    fgets( nome, 49, stdin);

    i = j = x = 0;
    lenght = strlen(nome);

    while (nome[i] != '\0')
    {
    x++;
    i++;
    }

    for(i = x; i>= 0; i--){

        if (nome[i] != '\0'){
            invertida[j] = nome[i];
            j++;
        }
    }

    invertida[j] = '\0';

    printf("\nx = %d",x);
    if(strcmp(invertida, nome) == 0)
        printf("%s é palíndromo", invertida);
    else
        printf("%s não é palíndromo", nome);


    return 0;
}

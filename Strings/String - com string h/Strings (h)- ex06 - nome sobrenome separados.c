#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome1[50], nome2[50];
    int i, flag, lenght;

    printf("<<  Nomes  >>\n");
    printf("Digite o primeiro nome e último nome: ");
    fgets( nome1, 49, stdin);

    for(i = 0; nome1[i] != '\0'; i++){
        if(nome1[i] == ' '){
        flag = i;
        }
    }

    lenght = strlen(nome1);

    strncpy(nome2, nome1, flag);
    nome2[flag] = '\0';

    printf("Nome: %s\n", nome2);
    printf("Sobrenome: ");

    for( i = flag+1; nome1[i] != '\0'; i++){
        printf("%c", nome1[i]);
    }

    return 0;
}

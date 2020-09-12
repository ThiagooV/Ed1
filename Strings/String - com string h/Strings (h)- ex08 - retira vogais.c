#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char vogais[] = "AaEeIiOoUu", nome[50];
    int i, j, flag = 1;

    printf("<<Sem vogais>>\n");
    printf("Digite a string: ");
    fgets( nome, 49, stdin);

    printf("Saída sem vogais: ");

    for(i = 0; nome[i] != '\0'; i++){
        for(j = 0; vogais[j] != '\0'; j++){
            if(nome[i] == vogais[j]){
                flag = 0;
            }
        }
        if(flag != 0){
            printf("%c", nome[i]);
        }else
            flag = 1;

    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome1[40], nome2[40]; //guarda o nome
    char c;
    int i, j;

    printf("<<   Nomes  >>\n");
    printf("Digite o primeiro nome e último nome: ");
    i = 0;
    c = getchar(); // busca uma letra no buffer
    while(c != '\n'){
        nome1[i] = c;
        c = getchar();
        i++;
    }
    nome1[i] = '\0';

    printf("\nNome: ");
    for(i = 0; nome1[i] != ' '; i++){
            nome2[i] = nome1[i];
            printf("%c", nome2[i]);
    }
    nome1[i] = '\0';

    printf("\n");
    printf("Sobrenome: ");
    for(j = i+1; nome1[j] != '\0' ; j++){

        nome2[j] = nome1[j];
        printf("%c", nome2[j]);

    }

    return 0;
}

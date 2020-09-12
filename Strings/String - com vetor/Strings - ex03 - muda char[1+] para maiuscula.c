#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned char nome[50]; //guarda o nome
    char c;
    int i, pos; // pos - guarda a posição atual no vetor

    printf("<< Vetor de char>>\n");
    printf("Digite um nome: ");

    pos = 0;
    c = getchar(); // busca uma letra no buffer
    while (c != '\n') {  // fica no loop enquanto nao encontrar um ENTER
        nome[pos] = c;
        pos++;
        c = getchar(); // consome o próximo caractere do buffer
    }

    printf("O nome digitado é: ");
    printf("%c", nome[0]);
    for (i=1; i < pos; i++){
        printf("%c", nome[i]-32);
    }

    return 0;
}

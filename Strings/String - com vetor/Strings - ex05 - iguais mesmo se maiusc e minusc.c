#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome1[50], nome2[50]; //guarda o nome
    char c;
    int i, pos, contador; // pos - guarda a posição atual no vetor

    printf("<< Compara nomes>>\n");
    printf("Digite o nome 1: ");

    pos = 0;
    c = getchar(); // busca uma letra no buffer
    while (c != '\n') {  // fica no loop enquanto nao encontrar um ENTER
        nome1[pos] = c;
        pos++;
        c = getchar(); // consome o próximo caractere do buffer
    }

    printf("Digite o nome 2: ");

    pos = 0;
    c = getchar(); // busca uma letra no buffer
    while (c != '\n') {  // fica no loop enquanto nao encontrar um ENTER
        nome2[pos] = c;
        pos++;
        c = getchar(); // consome o próximo caractere do buffer
    }
    contador = 0;
    for(i = 0; i < pos; i++){
        if(nome1[i] == nome2[i] || nome1[i] == nome2[i]-32 ||nome1[i]-32 == nome2[i]){
            contador++; //incrementa se as letras foram iguais
        }
    }

    if(contador == pos){
        printf("Os nomes digitados são iguais");
    }else {
        printf("Os nomes digitados são diferentes");
    }

    return 0;
}

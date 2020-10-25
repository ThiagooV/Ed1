#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "TLinkedList.h"

int main(){

    struct aluno a, b, c;

    strcpy(a.nome,"João");
    a.matricula = 223;
    a.n1 = a.n2 = a.n3 = 0.0;

    strcpy(b.nome,"Maria");
    b.matricula = 567;
    b.n1 = b.n2 = b.n3 = 7.3;

    strcpy(c.nome,"Amanda");
    c.matricula = 187;
    c.n1 = c.n2 = c.n3 = 8.5;

    TLinkedList *list;

    int sorted = 0;
    printf("A lista será ordenada?\n");
    printf("Digite 1 para sim ou 0 para não: ");
    scanf("%d", &sorted);
    printf("\n");

    list = list_create(sorted);

    int ret;
    printf("Inserindo alunos na lista de forma ordenada.\n");
    ret = list_insert_sorted(list, a);
    switch(ret){
        case 0:
            printf("Inserido com sucesso!\n\n");
            list_print(list);
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        case -5:
            printf("Operação inválida.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }

    ret = list_insert_sorted(list, b);
    switch(ret){
        case 0:
            printf("Inserido com sucesso!\n\n");
            list_print(list);
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        case -5:
            printf("Operação inválida.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }

    ret = list_insert_sorted(list, c);
    switch(ret){
        case 0:
            printf("Inserido com sucesso!\n\n");
            list_print(list);
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado\n\n");
            break;
        case -5:
            printf("Operação inválida.\n\n");
            break;
        default:
            printf("Erro.\n\n");
    }

    struct aluno d, e;

    strcpy(d.nome,"Marcio");
    d.matricula = 999;
    d.n1 = d.n2 = d.n3 = 5;

    strcpy(e.nome,"Julio");
    e.matricula = 751;
    e.n1 = e.n2 = e.n3 = 6.5;

    printf("Inserindo aluno na primeira posição:\n");
    ret = list_insert(list, 1, e);
    switch(ret){
        case 0:
            printf("Inserido com sucesso!\n\n");
            list_print(list);
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        case -5:
            printf("Operação inválida.\n\n");
            break;
        default:
            printf("Erro\n");
    }

    printf("Inserindo aluno na segunda posição:\n");
    ret = list_insert(list, 2, d);
    switch(ret){
        case 0:
            printf("Inserido com sucesso!\n\n");
            list_print(list);
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        case -5:
            printf("Operação inválida.\n\n");
            break;
        default:
            printf("Erro\n");
    }

    printf("A lista possui %d elementos.\n", list_size(list));
    printf("-------------------------------------\n\n");

    struct aluno al;

    printf("Procurando aluno na posição 3:\n");
    ret = list_find_pos(list, 3, &al);
    switch(ret){
        case 0:
            printf("\nAluno na posição 3:\n");
            printf("Matrícula: %d\n", al.matricula);
            printf("Nome: %s\n", al.nome);
            printf("Notas: %.2f, %.2f, %.2f\n", al.n1, al.n2, al.n3);
            printf("-------------------------------------\n\n");
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }


    printf("Procurando aluno pela matrícula 999:\n");
    ret = list_find_mat(list, 999, &al);
    switch(ret){
        case 0:
            printf("Matrícula: %d\n", al.matricula);
            printf("Nome: %s\n", al.nome);
            printf("Notas: %.2f, %.2f, %.2f\n", al.n1, al.n2, al.n3);
            printf("-------------------------------------\n\n");
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }

    printf("Primeiro aluno da lista:\n");
    ret = list_front(list, &al);
    switch(ret){
        case 0:
            printf("Matrícula: %d\n", al.matricula);
            printf("Nome: %s\n", al.nome);
            printf("Notas: %.2f, %.2f, %.2f\n", al.n1, al.n2, al.n3);
            printf("-------------------------------------\n\n");
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }


    printf("Último aluno da lista:\n");
    ret = list_back(list, &al);
    switch(ret){
        case 0:
            printf("Matrícula: %d\n", al.matricula);
            printf("Nome: %s\n", al.nome);
            printf("Notas: %.2f, %.2f, %.2f\n", al.n1, al.n2, al.n3);
            printf("-------------------------------------\n\n");
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }

    printf("Procurando posição pela matrícula(567):\n");
    int posi = 0;
    ret = list_get_pos(list, 567, &posi);
    switch(ret){
        case 0:
            printf("Posição: %d\n", posi);
            printf("-------------------------------------\n\n");
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }

    printf("Apagando dados do aluno com matrícula(567):\n");
    ret = list_erase_data(list, 567);
    switch(ret){
        case 0:
            printf("Apagado com sucesso!\n");
            printf("-------------------------------------\n\n");
            list_print(list);
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }

    printf("Apagando dados do aluno na posição 1:\n");
    ret = list_erase_pos(list, 1);
    switch(ret){
        case 0:
            printf("Apagado com sucesso!\n");
            printf("-------------------------------------\n\n");
            list_print(list);
            break;
        case -1:
            printf("Ponteiro inválido! Lista não alocada.\n\n");
            break;
        case -2:
            printf("Aluno não inserido. Sem memória!\n\n");
            break;
        case -3:
            printf("Posição fora dos limites da lista!\n\n");
            break;
        case -4:
            printf("Elemento não encontrado.\n\n");
            break;
        default:
            printf("Erro!\n\n");
    }

    list_free(list);

  return 0;
}

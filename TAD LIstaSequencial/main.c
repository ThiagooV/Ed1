#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

int main()
{
    struct aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                        {4,"Ricardo",7.5,8.7,6.8},
                        {1,"Bianca",9.7,6.7,8.4},
                        {3,"Ana",5.7,6.1,7.4}};

    Lista *li = criar_lista();

    int i;
    for(i=0; i < 4; i++)
        insere_lista_ordenada(li,a[i]);

    imprime_lista(li);
    printf("\n\n\n");

    struct aluno aluno;
    consulta_lista_pos(li, 2, &aluno);

    printf("------Aluno consultado na posição 2 da lista:-------\n");
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome %s\n", aluno.nome);
    printf("Nota 1: %.2f, nota 2: %.2f e nota 3: %.2f\n\n\n", aluno.n1, aluno.n2, aluno.n3);

    consulta_lista_mat(li, 3, &aluno);
    printf("------Aluno consultado pela matrícula:-------\n");
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome %s\n", aluno.nome);
    printf("Nota 1: %.2f, nota 2: %.2f e nota 3: %.2f\n\n\n", aluno.n1, aluno.n2, aluno.n3);

    struct aluno al1 = {6,"Jose",6.5,9.8,7.5};

    insere_lista_final(li, al1);
    printf("------Inserindo aluno no final da lista:-------\n");
    imprime_lista(li);
    printf("\n\n\n");

    struct aluno al2 = {8,"Amanda",9.5,6.8,5.5};

    insere_lista_inicio(li, al2);
    printf("------Inserindo aluno no início da lista:-------\n");
    imprime_lista(li);
    printf("\n\n\n");

    remove_lista_final(li);
    printf("------Removendo aluno no final da lista:-------\n");
    imprime_lista(li);
    printf("\n\n\n");

    remove_lista(li, 1);
    printf("------Removendo aluno pela matrícula:-------\n");
    imprime_lista(li);
    printf("\n\n\n");

    remove_lista_inicio(li);
    printf("------Removendo aluno no início da lista:-------\n");
    imprime_lista(li);
    printf("\n\n\n");


    printf("Atualmente a lista possui %d alunos cadastrados.", tamanho_lista(li));
    printf("\n\n\n");


    for(i=0; i < 5; i++){
        if (remove_lista_otimizado(li,i)==-1)
            printf("Erro\n");

        imprime_lista(li);
        printf("\n\n\n");
    }

    libera_lista(li);

    return 0;
}

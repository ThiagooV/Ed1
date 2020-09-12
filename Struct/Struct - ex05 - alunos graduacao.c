#include <stdio.h>
#include <string.h>

struct alunos_curso{
    char matricula[15];
    char nome[15];
    float notas[3];
    int faltas;
    float media;

};

int main(void)
{
    struct alunos_curso alunos[3];
    int i, j, x, faltas = 18;
    float aux;

    j = 0;
    do
    {
        printf("Entre com os dados do %dº aluno:\n", j+1);

        printf("Matricula: ");
        fgets(alunos[j].matricula, 15, stdin);
        printf("\n");

        printf("Nome: ");
        fgets(alunos[j].nome, 15, stdin);
        printf("\n");

        aux = 0;
        for(i = 0; i < 3; i++){
            printf("Nota da %dº prova: ", i+1);
            scanf("%f", &alunos[j].notas[i]);
            getchar();
            printf("\n");

            aux += alunos[j].notas[i];
        }

        alunos[j].media = (aux / 3.0);

        printf("Número de faltas: ");
        scanf("%d", &alunos[j].faltas);
        getchar();
        printf("\n");

        j++;

    }while(j < 3);

    //maior nota 1º prova
    aux = alunos[0].notas[0];

    x = 0;
    for(j = 1; j < 3; j++){
        if(alunos[j].notas[0] > aux ){
            aux = alunos[j].notas[0];
            x = j;
        }
    }

    printf("Aluno com maior nota na 1º prova foi %s com %.1f pontos.\n", alunos[x].nome, alunos[x].notas[0]);

    //maior media
    aux = alunos[0].media;

    x = 0;
    for(j = 1; j < 3; j++){
        if(alunos[j].media > aux ){
            aux = alunos[j].media;
            x = j;
        }
    }

    printf("Aluno com maior média geral foi %s com %.1f pontos.\n", alunos[x].nome, alunos[x].media);

     //menor media
    aux = alunos[0].media;

    x = 0;
    for(j = 1; j < 3; j++){
        if(alunos[j].media < aux ){
            aux = alunos[j].media;
            x = j;
        }
    }

    printf("Aluno com menor média geral foi %s com %.1f pontos.\n", alunos[x].nome, alunos[x].media);

    printf("\n\nSituação dos Alunos: \n");
    for(i = 0; i < 3; i++){

        if(alunos[i].faltas <= faltas ){

            if(alunos[i].media > 60){
                printf("%s, %s Aprovado.\n", alunos[i].matricula, alunos[i].nome);
            }else{
                printf("%s, %s Reprovado por nota.\n", alunos[i].matricula, alunos[i].nome);
            }
        }else
            printf("%s, %s Reprovado por falta.\n", alunos[i].matricula, alunos[i].nome);
    }


    return 0;
}

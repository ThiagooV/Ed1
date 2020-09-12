#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, n_alunos;
    float notas[100], media, soma;

    n_alunos = 0;
    media = soma = 0;

    printf("<< Média de n alunos. Máximo 100 alunos >> \n");
    printf("Entre com o número de alunos: ");
    scanf("%d", &n_alunos);

    if(n_alunos > 100){
        printf("Erro! O número máximo de alunos permitido é 100.");
        return 0;
    }

    for(n = 0; n <n_alunos ; n++){
        printf("Digite a nota do aluno %d: ", n+1);
        scanf("%f", &notas[n]);
        getchar();
        soma += notas[n];
    }

    media = soma/n_alunos;

    printf("Relatório de Notas\n");
    for(n = 0 ; n < n_alunos ; n++){
        printf("A nota do aluno %d é: %.0f\n", n+1, notas[n]);
    }

    printf("A média da turma é: %.1f", media);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero[100];
    float cra[100];
    char classe[100];
    int i, cadastro;

    printf("<< Universidade X >>\n");
    printf("Quantos alunos serão cadastrados: ");
    scanf("%d", &cadastro);

    for( i = 0; i < cadastro; i++){
        printf("\n");
        printf("Entre com o número do aluno: ");
        scanf("%d", &numero[i]);
        getchar();
        printf("Entre com a classe social do aluno %d: ", numero[i]);
        scanf("%c", &classe[i]);
        getchar();
        printf("Entre com o CRA do aluno %d: ", numero[i]);
        scanf("%f", &cra[i]);
        getchar();

    }

    printf("\n");
    printf("==== Alunos Cadastrados ====\n");
    for(i = 0 ; i < cadastro ; i++)
        printf("Número: %d Classe Social: %c CRA: %.2f\n", numero[i], classe[i], cra[i]);

    return 0;
}

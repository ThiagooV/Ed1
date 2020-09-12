#include <stdio.h>
#include <string.h>

struct endereco
{
    char rua[30];
    int numero;
    char complemento[20];
    char cidade[20];
    char estado[5];
    char cep[15];
};

int main(void)
{
    struct endereco campos[3];
    char est[] = {'M','G', '\n', '\0'};
    int i = 0, x = 0;

    while(i<3)
    {
        printf("Rua:  ");
        fgets(campos[i].rua,31,stdin);
        printf("\n");

        printf("Número:  ");
        scanf("%d", &campos[i].numero);
        getchar();
        printf("\n");

        printf("Complemento:  ");
        fgets(campos[i].complemento,21,stdin);
        printf("\n");

        printf("Cidade:  ");
        fgets(campos[i].cidade,21,stdin);
        printf("\n");

        printf("Estado:  ");
        fgets(campos[i].estado,5,stdin);
        printf("\n");

        printf("CEP:  ");
        fgets(campos[i].cep,14,stdin);
        printf("\n");

        i++;
    }


    printf("Endereços cadastrados que são de “MG”:\n");
    for( i = 0; i < 3; i++){
        if(strcmp(campos[i].estado, est) == 0)
            printf("%s, %d. %s. %s-%s, %s", campos[i].rua, campos[i].numero, campos[i].complemento, campos[i].cidade, campos[i].estado, campos[i].cep);

    }


    return 0;
}

#include <stdio.h>
#include <string.h>

struct data
{
    int dia;
    char mes[10];
    int ano;
};

int main(void)
{
    struct data datas[3];
    int i=0, aux;

    while(i<3)
    {
        printf("Digite o dia: ");
        scanf("%d", &datas[i].dia);
        getchar();

        printf("Digite o mês:  ");
        fgets(datas[i].mes,11,stdin);

        printf("Digite o ano: ");
        scanf("%d", &datas[i].ano);
        getchar();
        printf("\n");

        i++;
    }
    aux =  datas[0].ano;

    for( i = 0; i < 3; i++){
        if(datas[i].ano > aux)
            aux = datas[i].ano;

    }
    printf("\n%d foi o maior ano cadastrado.", aux);

    return 0;
}

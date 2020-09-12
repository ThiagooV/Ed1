#include <stdio.h>
#include <string.h>

struct telefone
{
    int ddd;
    char fone[10];
};

int main(void)
{
    struct telefone tele[3];
    int i=0;

    while(i<2)
    {
        printf("Digite o DDD: ");
        scanf("%d", &tele[i].ddd);
        getchar();
        printf("Digite o telefone: ");
        fgets(tele[i].fone,11,stdin);

        i++;
    }


    printf("\nTelefones cadastrados: \n");
    for(i=0; i<2; i++)
    {
        printf("%d %s\n", tele[i].ddd, tele[i].fone);
    }
    return 0;
}

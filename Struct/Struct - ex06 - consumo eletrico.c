#include <stdio.h>
#include <string.h>

struct aparelhos{
    char nome[20];
    double potencia;
    double tempo;
};

int main(void)
{
    struct aparelhos eletro[5];
    double tempo_ligado, consumo_total;
    int i;

    tempo_ligado = consumo_total = i = 0;
    do
    {
        printf("Informe os dados do %dº eletrodoméstico: \n", i+1);

        printf("Nome: ");
        fgets(eletro[i].nome, 20, stdin);
        printf("\n");

        printf("Potência: ");
        scanf("%lf", &eletro[i].potencia);
        getchar();
        printf("\n");

        //tempo em horas
        printf("Tempo ativo por dia: ");
        scanf("%lf", &eletro[i].tempo);
        getchar();
        printf("\n");

        i++;

    }while(i < 5);

    //tempo em dias
    printf("Informe um valor de tempo (em dia): ");
    scanf("%lf", &tempo_ligado);
    getchar();
    printf("\n");


    for(i = 0; i < 5; i++){
        consumo_total = consumo_total + (eletro[i].potencia * eletro[i].tempo);
    }
    consumo_total *= tempo_ligado;
    printf("Consumo total: %.0lf kW\n", consumo_total);

    printf("Consumo relativo: \n");
    for(i = 0; i < 5; i++){
    printf("%s: %.1lf %%\n",eletro[i].nome, (((eletro[i].potencia * eletro[i].tempo)*tempo_ligado)/consumo_total)*100);
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // 0 - verde, 1 - azul, 2 - amarelo, 3 - vermelho
    float cores[4] = {0,0,0,0}, soma;
    int i,verif, maior;

    verif = soma = 0;

    printf("<< Probabilidades >> \n");

    printf("\nDigite a quantidade de bolinhas\n");
    printf("Verde: ");
    scanf("%f", &cores[0]);
    printf("Azul: ");
    scanf("%f", &cores[1]);
    printf("Amarela: ");
    scanf("%f", &cores[2]);
    printf("Vermelha: ");
    scanf("%f", &cores[3]);

    maior = cores[0];

    for(i = 0; i < 4 ; i++){
        soma += cores[i];
            if(maior <  cores[i]){
                maior = cores[i];
                verif = i;
            }
    }

    printf("\nProbabilidades");

    printf("\nVerde: %.1f", (cores[0]/soma)*100);
    if(verif == 0)
        printf(" << Maior probabilidade");
    printf("\nAzul: %.1f", (cores[1]/soma)*100);
    if(verif == 1)
        printf(" << Maior probabilidade");
    printf("\nAmarela: %.1f", (cores[2]/soma)*100);
    if(verif == 2)
        printf(" << Maior probabilidade");
    printf("\nVermelha: %.1f", (cores[3]/soma)*100);
    if(verif == 3)
        printf(" << Maior probabilidade");

    return 0;
}

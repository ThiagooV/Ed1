#include <stdio.h>
#include <stdlib.h>

int main()
{

    char opcao;
    float entrada;

    do{

    printf("<< Conversor >>\n");
    printf(" Digite uma opção\n");
    printf("   1 - para converter de km/h para m/s\n");
    printf("   2 - para converter de m/s para hm/h\n");
    printf("   q - para sair\n");
    opcao = getchar();


    switch(opcao){
        case '1':
            printf("Digite a velocidade (km/h): ");
            scanf("%f", &entrada);
            getchar();
            printf("\nA velocidade em m/s é %.2f", entrada/3.6);
            printf("\n\n");
            break;

        case '2':
            printf("Digite a velocidade (m/s): : ");
            scanf("%f", &entrada);
            getchar();
            printf("\nA velocidade em km/h é %.0f", entrada*3.6);
            printf("\n\n");
            break;

        case 'q':
            break;
    }


    }while(opcao != 'q');

    return 0;
}

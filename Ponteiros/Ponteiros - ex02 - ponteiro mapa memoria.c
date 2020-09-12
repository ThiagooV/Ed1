#include <stdio.h>
#include <string.h>

int main(void)
{

    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa
                // com valor 40
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o
            //conteúdo inicial é lixo
    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a
    int val[5] = {2,4,5,8,10};
    int *p_val = &val[4];

    printf("Endereço de a %p\n", &a);
    printf("Endereço de a %p\n", p);

    printf("\nNovo valor para 'a'\n");
    scanf("%d", p);

    printf("\nNovo valor  %d\n", a);

    printf("\nNovo valor para val[4]\n");
    scanf("%d", p_val);
    for(int i = 0; i < 5; i++){
        printf("%d, ", val[i]);

     }
     printf("\n\nMapa de memória\n");
     for(int i = 0; i < 5; i++){
        printf("%p\n", &val[i]);

     }
    return 0;
}


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
    int *p_val = val;

    printf("O valor da variavel 'a' eh: %d", *p);
    printf("\n\n");


    for(int i = 0; i < 5; i++){
        printf("%d, ", *(p_val+i));

     }
     printf("\n\nMapa de memória\n");
     for(int i = 0; i < 5; i++){
        printf("%p\n", p_val+i);

     }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 4;
    char letra;

    printf("<<Forca de uma letra só>>");


    do{
        printf("\nQual a letra? ");
        letra = getchar();
        getchar();
        if(letra == 'w')
        {
            printf("\nACERTOU!");
            break;
        }else{
            if(i > 1)
                printf("\nErrado! Você tem mais %d chances", i);
            else if(i == 1)
                printf("Última chance!!! ");
            else if(i == 0){
                printf("\nAcabaram suas chances. A letra correta é 'w' ");
                break;
            }
        }
        i--;

    }while(i >= 0 );

    return 0;
}

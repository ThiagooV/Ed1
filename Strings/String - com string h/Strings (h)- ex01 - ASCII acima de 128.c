#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Brazil");

    int cont = 0, letra = 128;

    for(int i = 0; i <= 128; i++){

        printf("%3d %c 	 ", letra+i, letra+i);
        cont++;
        if(cont > 6){
            printf("\n");
            cont=0;
        }

    }
    return 0;
}

//não sei se é porque eu estou em um ambiente Lunux
//com local e linguas definidas em US, English
//mas nenhum caracter acima do 127 apareceu visível para mim

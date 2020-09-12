#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeros[8];
    int i, j, n, contador;

    n = 8;
    contador = 0;

    printf("<< Valores iguais >>\n");

    for( i = 0; i < n; i++){
        printf("Entre com o número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Valores repetidos: ");

    for( i = 0; i < n; i++){
        contador = 0;
        for(j = 0; j < n ; j++){
            if(numeros[j] == numeros[i]){
                if(j < i){
                    break;
                }
                contador++;
            }
        }
        if(contador > 1){
            printf("%d ", numeros[i]);
        }

    }

    return 0;
}

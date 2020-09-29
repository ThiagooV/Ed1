#include <stdio.h>
#include<stdlib.h>



int main(void)
{
    int vet[100], flag, i, maior;
    int soma, n;
    float media;

    flag = 0;
    i = 0;
    maior = 0;
    soma = 0;
    media = 0.0;
    //para testar com menos valores de entrada
    //é só alterar o n
    n = 97;


    printf("Informe a idade dos animais: \n");
    for(int i = 0; i < n; i++){
        printf("%dº animal: ", i+1);
        scanf("%d", &vet[i]);
        printf("\n");
        soma += vet[i];
    }

    maior = vet[0];

    for(int i = 0; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
            flag = i+1;
        }
    }

    media = soma/n;

    printf("As idades cadastradas foram: \n");
    for(i = 0; i < n; i++){
        printf("%dº animal: %d\n", i+1, vet[i]);
    }

    printf("O animal mais velho é o %dº, com %d anos\n", flag, maior);
    printf("A médida de idade é %.0f\n", media);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char nome[50], cpf[20], rg[20], endereco[50], cep[15], cidade[20], estado[5];
    int lenght;

    printf("Digite seu nome: ");
    fgets( nome, 49, stdin);
    printf("\n");
    lenght = strlen(nome);
    nome[lenght-1] = '\0';

    printf("Digite seu CPF: ");
    fgets( cpf, 19, stdin);
    printf("\n");
    lenght = strlen(cpf);
    cpf[lenght-1] = '\0';

    printf("Digite seu RG: ");
    fgets( rg, 19, stdin);
    printf("\n");
    lenght = strlen(rg);
    rg[lenght-1] = '\0';

    printf("Digite seu endereço: ");
    fgets( endereco, 49, stdin);
    printf("\n");
    lenght = strlen(endereco);
    endereco[lenght-1] = '\0';

    printf("Digite a cidade: ");
    fgets( cidade, 19, stdin);
    printf("\n");
    lenght = strlen(cidade);
    cidade[lenght-1] = '\0';

    printf("Digite o estado: ");
    fgets( estado, 4, stdin);
    printf("\n");
    lenght = strlen(estado);
    estado[lenght-1] = '\0';

    printf("Digite o CEP: ");
    fgets( cep, 14, stdin);
    lenght = strlen(cep);
    cep[lenght-1] = '\0';

    printf("\n\n\n");


    printf("\t\t\tD  E  C  L  A  R  A  Ç  Ã  O\t\t\t\n\n");

    printf("Eu, %s, RG %s, CPF %s, \n", nome, rg, cpf);
    //printf("RG %s, ", rg);
    //printf("CPF %s, \n", cpf);
    printf("residente a %s, %s-%s, \n", endereco, cidade, estado);
    //printf("%s-", cidade);
    //printf("%s, \n", estado);
    printf("CEP %s venho por meio desta declarar que vou estudar para a prova", cep);
    //printf("venho por meio desta declarar que vou estudar para a prova");

    return 0;
}

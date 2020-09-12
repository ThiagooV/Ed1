#include <stdio.h>
#include <string.h>

struct dados_pessoais
{
    char nome[50];
    char cpf[15];
    char sexo[3];
    char est_civil[10];
    float salario;
    char rg[20];
    char end_comer[50];
    char end_resid[50];
    char tele[20];
    int tele_ddd;
    char tele_resid[20];
    int tele_resid_ddd;
    int dia_nasc;
    char mes_nasc[15];
    int ano_nasc;
    int dia_ingresso;
    char mes_ingresso[15];
    int ano_ingresso;
};

struct end_comercial
{
    char rua[30];
    int numero;
    char complemento[20];
    char cidade[20];
    char estado[5];
    char cep[15];
};

struct end_residencial
{
    char rua[30];
    int numero;
    char complemento[20];
    char cidade[20];
    char estado[5];
    char cep[15];
};

int main(void)
{
    struct dados_pessoais campos[4];
    struct end_comercial comerc[4];
    struct end_residencial resid[4];
    int opcao, posicao, i, j;

    opcao = posicao = 0;

    strcpy(campos[0].nome,"Cersei Lannister");
    strcpy(campos[0].cpf,"111111111-11");
    strcpy(campos[0].sexo,"F");
    strcpy(campos[0].est_civil,"Viúva");
    campos[0].salario = 111111;
    strcpy(campos[0].rg,"WE-11.111.111");
    strcpy(campos[0].tele,"91111-1111");
    campos[0].tele_ddd = 11;
    strcpy(campos[0].tele_resid,"11111-1111");
    campos[0].tele_resid_ddd = 11;
    campos[0].dia_nasc = 1;
    strcpy(campos[0].mes_nasc,"janeiro");
    campos[0].ano_nasc = 262;
    campos[0].dia_ingresso = 1;
    strcpy(campos[0].mes_ingresso,"janeiro");
    campos[0].ano_ingresso = 276;

    strcpy(comerc[0].rua,"Colina de Aegon");
    comerc[0].numero = 1;
    strcpy(comerc[0].complemento,"Red Keep");
    strcpy(comerc[0].cidade,"Porto Real");
    strcpy(comerc[0].estado,"WE");
    strcpy(comerc[0].cep,"11111-111");

    strcpy(resid[0].rua,"Colina de Aegon");
    resid[0].numero = 1;
    strcpy(resid[0].complemento,"Red Keep");
    strcpy(resid[0].cidade,"Porto Real");
    strcpy(resid[0].estado,"WE");
    strcpy(resid[0].cep,"11111-111");

    strcpy(campos[1].nome,"John Snow");
    strcpy(campos[1].cpf,"222222222-22");
    strcpy(campos[1].sexo,"M");
    strcpy(campos[1].est_civil,"Solteiro");
    campos[1].salario = 111111;
    strcpy(campos[1].rg,"WE-22.222.222");
    strcpy(campos[1].tele,"92222-2222");
    campos[1].tele_ddd = 11;
    strcpy(campos[1].tele_resid,"22222-2222");
    campos[1].tele_resid_ddd = 11;
    campos[1].dia_nasc = 2;
    strcpy(campos[1].mes_nasc,"fevereiro");
    campos[1].ano_nasc = 281;
    campos[1].dia_ingresso = 2;
    strcpy(campos[1].mes_ingresso,"fevereiro");
    campos[1].ano_ingresso = 295;

    strcpy(comerc[1].rua,"Norte dos 7 Reinos");
    comerc[1].numero = 1;
    strcpy(comerc[1].complemento,"Castelo Negro");
    strcpy(comerc[1].cidade,"A Muralha");
    strcpy(comerc[1].estado,"WE");
    strcpy(comerc[1].cep,"11111-111");

    strcpy(resid[1].rua,"Norte dos 7 Reinos");
    resid[1].numero = 1;
    strcpy(resid[1].complemento,"Castelo Negro");
    strcpy(resid[1].cidade,"A Muralha");
    strcpy(resid[1].estado,"WE");
    strcpy(resid[1].cep,"11111-111");

    strcpy(campos[2].nome,"Jaime Lannister");
    strcpy(campos[2].cpf,"333333333-33");
    strcpy(campos[2].sexo,"M");
    strcpy(campos[2].est_civil,"Solteiro");
    campos[2].salario = 111111;
    strcpy(campos[2].rg,"WE-33.333.333");
    strcpy(campos[2].tele,"91111-1111");
    campos[2].tele_ddd = 11;
    strcpy(campos[2].tele_resid,"11111-1111");
    campos[2].tele_resid_ddd = 11;
    campos[2].dia_nasc = 1;
    strcpy(campos[2].mes_nasc,"janeiro");
    campos[2].ano_nasc = 262;
    campos[2].dia_ingresso = 1;
    strcpy(campos[2].mes_ingresso,"janeiro");
    campos[2].ano_ingresso = 276;

    strcpy(comerc[2].rua,"Colina de Aegon");
    comerc[2].numero = 1;
    strcpy(comerc[2].complemento,"Red Keep");
    strcpy(comerc[2].cidade,"Porto Real");
    strcpy(comerc[2].estado,"WE");
    strcpy(comerc[2].cep,"11111-111");

    strcpy(resid[2].rua,"Colina de Aegon");
    resid[2].numero = 1;
    strcpy(resid[2].complemento,"Red Keep");
    strcpy(resid[2].cidade,"Porto Real");
    strcpy(resid[2].estado,"WE");
    strcpy(resid[2].cep,"11111-111");

    strcpy(campos[3].nome,"Samwell Tarly");
    strcpy(campos[3].cpf,"444444444-44");
    strcpy(campos[3].sexo,"M");
    strcpy(campos[3].est_civil,"Solteiro");
    campos[3].salario = 111111;
    strcpy(campos[3].rg,"WE-44.444.444");
    strcpy(campos[3].tele,"92222-2222");
    campos[3].tele_ddd = 11;
    strcpy(campos[3].tele_resid,"22222-2222");
    campos[3].tele_resid_ddd = 11;
    campos[3].dia_nasc = 2;
    strcpy(campos[3].mes_nasc,"fevereiro");
    campos[3].ano_nasc = 283;
    campos[3].dia_ingresso = 2;
    strcpy(campos[3].mes_ingresso,"fevereiro");
    campos[3].ano_ingresso = 295;

    strcpy(comerc[3].rua,"Norte dos 7 Reinos");
    comerc[3].numero = 1;
    strcpy(comerc[3].complemento,"Castelo Negro");
    strcpy(comerc[3].cidade,"A Muralha");
    strcpy(comerc[3].estado,"WE");
    strcpy(comerc[3].cep,"11111-111");

    strcpy(resid[3].rua,"Norte dos 7 Reinos");
    resid[3].numero = 1;
    strcpy(resid[3].complemento,"Castelo Negro");
    strcpy(resid[3].cidade,"A Muralha");
    strcpy(resid[3].estado,"WE");
    strcpy(resid[3].cep,"11111-111");

    do
    {
        printf("<< Cadastro de Usuários >>\n\n");

        printf("1 - Listar todos os cadastros");
        printf("\n");
        printf("2 - Cadastrar/Sobrescrever nova pessoa");
        printf("\n");
        printf("3 - Listar as pessoas que nasceram depois de 1990");
        printf("\n");
        printf("4 - Copiar dados de um cadastro para outro");
        printf("\n");
        printf("0 - Sair");
        printf("\n\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();
        printf("\n");

        switch(opcao){

            case 1:
                printf("Lista de usuários cadastrados: \n\n");
                for(i = 0; i < 4; i++){

                printf("Posição: %d\n", i);
                printf("Informações Pessoais:\n");
                printf("Nome: %s, CPF: %s, Sexo: %s, Estado Civil: %s\n", campos[i].nome, campos[i].cpf, campos[i].sexo, campos[i].est_civil);
                printf("Salário: %.0f, Identidade:  %s\n", campos[i].salario, campos[i].rg);
                printf("Telefone residencial: (%d)  %s\n", campos[i].tele_resid_ddd, campos[i].tele_resid);
                printf("Telefone: (%d)  %s\n", campos[i].tele_ddd, campos[i].tele);
                printf("Data de Nascimento: %d de %s de %d\n", campos[i].dia_nasc, campos[i].mes_nasc, campos[i].ano_nasc);
                printf("Data de Ingresso: %d de %s de %d\n", campos[i].dia_ingresso, campos[i].mes_ingresso, campos[i].ano_ingresso);
                printf("\n\n");

                printf("Endereço comercial:\n");
                printf("Rua:  %s, Nº: %d, Complemento: %s, Cidade: %s\n", comerc[i].rua, comerc[i].numero, comerc[i].complemento, comerc[i].cidade);
                printf("Estado: %s, CEP: %s\n", comerc[i].estado, comerc[i].cep);
                printf("\n\n");

                printf("Endereço residencial:\n");
                printf("Rua:  %s, Nº: %d, Complemento: %s, Cidade: %s\n", resid[i].rua, resid[i].numero, resid[i].complemento, resid[i].cidade);
                printf("Estado: %s, CEP: %s\n", resid[i].estado, resid[i].cep);
                printf("\n\n");
                }
                break;

            case 2:
                printf("Escolha uma posição: ");
                scanf("%d", &posicao);
                getchar();

                printf("Nome:  ");
                fgets(campos[posicao].nome, 51,stdin);
                printf("\n");

                printf("CPF:  ");
                fgets(campos[posicao].cpf, 16,stdin);
                printf("\n");

                printf("Sexo:  ");
                fgets(campos[posicao].sexo,4,stdin);
                printf("\n");

                printf("Estado Civil:  ");
                fgets(campos[posicao].est_civil,11,stdin);
                printf("\n");

                printf("Salário:  ");
                scanf("%f", &campos[posicao].salario);
                getchar();
                printf("\n");

                printf("Identidade:  ");
                fgets(campos[posicao].rg,21,stdin);
                printf("\n");

                printf("Telefone residencial:\n");
                printf("DDD:  ");
                scanf("%d", &campos[posicao].tele_resid_ddd);
                getchar();
                printf("\n");

                printf("Número:  ");
                fgets(campos[posicao].tele_resid, 20, stdin);
                printf("\n");

                printf("Telefone:\n");
                printf("DDD:  ");
                scanf("%d", &campos[posicao].tele_ddd);
                getchar();
                printf("\n");

                printf("Número:  ");
                fgets(campos[posicao].tele, 20, stdin);;
                printf("\n");

                printf("Data de Nascimento: \n");

                printf("Dia:  ");
                scanf("%d", &campos[posicao].dia_nasc);
                getchar();
                printf("\n");

                printf("Mês:  ");
                fgets(campos[posicao].mes_nasc,15,stdin);
                printf("\n");

                printf("Ano:  ");
                scanf("%d", &campos[posicao].ano_nasc);
                getchar();
                printf("\n");

                printf("Data de Ingresso: \n");

                printf("Dia:  ");
                scanf("%d", &campos[posicao].dia_ingresso);
                getchar();
                printf("\n");

                printf("Mês:  ");
                fgets(campos[posicao].mes_ingresso,15,stdin);
                printf("\n");

                printf("Ano:  ");
                scanf("%d", &campos[posicao].ano_ingresso);
                getchar();
                printf("\n");

                printf("Endereço comercial:\n");

                printf("Rua:  ");
                fgets(comerc[posicao].rua,31,stdin);
                printf("\n");

                printf("Nº:  ");
                scanf("%d", &comerc[posicao].numero);
                getchar();
                printf("\n");

                printf("Complemento:  ");
                fgets(comerc[posicao].complemento,21,stdin);
                printf("\n");

                printf("Cidade:  ");
                fgets(comerc[posicao].cidade,21,stdin);
                printf("\n");

                printf("Estado:  ");
                fgets(comerc[posicao].estado,6,stdin);
                printf("\n");

                printf("CEP:  ");
                fgets(comerc[posicao].cep,16,stdin);
                printf("\n");

                printf("Endereço residencial:\n");

                printf("Rua:  ");
                fgets(resid[posicao].rua,31,stdin);
                printf("\n");

                printf("Nº:  ");
                scanf("%d", &resid[posicao].numero);
                getchar();
                printf("\n");

                printf("Complemento:  \n");
                fgets(resid[posicao].complemento,21,stdin);
                printf("\n");

                printf("Cidade:  ");
                fgets(resid[posicao].cidade,21,stdin);
                printf("\n");

                printf("Estado:  ");
                fgets(resid[posicao].estado,6,stdin);
                printf("\n");

                printf("CEP:  ");
                fgets(resid[posicao].cep,16,stdin);
                printf("\n");

                break;

            case 3:
                for(i = 0; i < 4; i++){

                    if(campos[i].ano_nasc > 1990 ){

                        printf("Posição: %d\n", i);
                        printf("Informações Pessoais:\n");
                        printf("Nome: %s, CPF: %s, Sexo: %s, Estado Civil: %s\n", campos[i].nome, campos[i].cpf, campos[i].sexo, campos[i].est_civil);
                        printf("Salário: %.0f, Identidade:  %s\n", campos[i].salario, campos[i].rg);
                        printf("Telefone residencial: (%d)  %s\n", campos[i].tele_resid_ddd, campos[i].tele_resid);
                        printf("Telefone: (%d)  %s\n", campos[i].tele_ddd, campos[i].tele);
                        printf("Data de Nascimento: %d de %s de %d\n", campos[i].dia_nasc, campos[i].mes_nasc, campos[i].ano_nasc);
                        printf("Data de Ingresso: %d de %s de %d\n", campos[i].dia_ingresso, campos[i].mes_ingresso, campos[i].ano_ingresso);
                        printf("\n\n");

                        printf("Endereço comercial:\n");
                        printf("Rua:  %s, Nº: %d, Complemento: %s, Cidade: %s\n", comerc[i].rua, comerc[i].numero, comerc[i].complemento, comerc[i].cidade);
                        printf("Estado: %s, CEP: %s\n", comerc[i].estado, comerc[i].cep);
                        printf("\n\n");

                        printf("Endereço residencial:\n");
                        printf("Rua:  %s, Nº: %d, Complemento: %s, Cidade: %s\n", resid[i].rua, resid[i].numero, resid[i].complemento, resid[i].cidade);
                        printf("Estado: %s, CEP: %s\n", resid[i].estado, resid[i].cep);
                        printf("\n\n");
                    }
                }
                break;

            case 4:

                printf("Posição que deseja copiar: ");
                scanf("%d", &posicao);
                getchar();

                printf("Posição que deseja sobrescrever: ");
                scanf("%d", &j);
                getchar();
                printf("\n\n");

                strcpy(campos[j].nome, campos[posicao].nome);
                strcpy(campos[j].cpf, campos[posicao].cpf);
                strcpy(campos[j].sexo, campos[posicao].sexo);
                strcpy(campos[j].est_civil, campos[posicao].est_civil);
                campos[j].salario = campos[posicao].salario;
                strcpy(campos[j].rg, campos[posicao].rg);
                strcpy(campos[j].tele, campos[posicao].tele);
                campos[j].tele_ddd = campos[posicao].tele_ddd;
                strcpy(campos[j].tele_resid, campos[posicao].tele_resid);
                campos[j].tele_resid_ddd = campos[posicao].tele_resid_ddd;
                campos[j].dia_nasc = campos[posicao].dia_nasc;
                strcpy(campos[j].mes_nasc, campos[posicao].mes_nasc);
                campos[j].ano_nasc = campos[posicao].ano_nasc;
                campos[j].dia_ingresso = campos[posicao].dia_ingresso;
                strcpy(campos[j].mes_ingresso, campos[posicao].mes_ingresso);
                campos[j].ano_ingresso = campos[posicao].ano_ingresso;

                strcpy(comerc[j].rua, comerc[posicao].rua);
                comerc[j].numero = comerc[posicao].numero;
                strcpy(comerc[j].complemento, comerc[posicao].complemento);
                strcpy(comerc[j].cidade, comerc[posicao].cidade);
                strcpy(comerc[j].estado, comerc[posicao].estado);
                strcpy(comerc[j].cep, comerc[posicao].cep);

                strcpy(resid[j].rua, resid[posicao].rua);
                resid[j].numero = resid[posicao].numero;
                strcpy(resid[j].complemento, resid[posicao].complemento);
                strcpy(resid[j].cidade, resid[posicao].cidade);
                strcpy(resid[j].estado, resid[posicao].estado);
                strcpy(resid[j].cep, resid[posicao].cep);

                break;

            case 0:
                break;

            default:
                break;

        }

    }while(opcao != 0);
    return 0;
}

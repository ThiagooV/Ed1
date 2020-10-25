//Prova 2, questão 1

#include <stdio.h>
#include <stdlib.h>
#include "Lista_grafico.h"

int main(){

	int n, i;

	Lista_grafico *li = cria_lista();
	n = 0;

	printf("Digite o nome do eixo x: ");
	scanf("%s", &li->nome_eixo_x)
	printf("\nDigite o nome do eixo y: ");
	scanf("%s", , &li->nome_eixo_y);
	printf("\nDigite quantos pontos deseja inserir na lista:");
	scanf("%d", &n)

	printf("\n");
	for(i = 0; i < n; i++){
		printf("Digite a coordenada (x) do ponto %d", i+1);
		scanf("%d", &li->ptos[i].x);
		printf("\n");
		printf("Digite a coordenada (y) do ponto %d", i+1);
		scanf("%d", &li->ptos[i].y);
		printf("\n");
	}

	mostrar_grafico(li);

	libera_lista(li);

	return 0;
}




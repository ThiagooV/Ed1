//Prova 2, questão 2


int insere_lista_posicao(Lista *li, struct aluno al, int pos){
    if(li == NULL)
        return -1;
    if(li->qtd == MAX)
        return -1;

    if(pos > li->qtd){
        li->dados[li->qtd+1] = al;
    }

    int k, i = 0;
    while(i < li->qtd && li->dados[i].matricula != pos)
        i++;

    for(k = li->qtd-1; k >= i; k--)
        li->dados[k+1] = li->dados[k];

    li->dados[i] = al;
    li->qtd++;

    return 0;
}
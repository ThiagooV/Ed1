//Prova 2, questão 3
//a)

TMat2D *cria_mat_copia(TMat *mat){

    TMat *mat_copia;
    mat_copia = (TMat *)malloc(sizeof(TMat));
    
    if (mat_copia == NULL){
        return NULL;
    }

    mat_copia->dados = calloc(1,sizeof(double)*mat->nlin * mat->ncol);
    if (mat_copia->dados == NULL){
        free(mat_copia);
        return NULL;
    }
    
    for(int i = 0; i < (mat->nlin * mat->ncol); i++){
        mat_copia->dados[i] = mat->dados[i];   
    }

    mat_copia->nlin = mat->nlin;
    mat_copia->ncol = mat->ncol;

    return mat_copia;
}
//eu preferi não usar a função cria_mat

//------------------------------------------
//b)

int libera_mat(TMat *mat){
    free(mat);
    free(mat->dados);

    return 0;
}

//------------------------------------------
//c)

int altera_tamanho(TMat *mat, int i, int j){
    if(i <= 0 || j <= 0){
        return -1;
    }

    if(mat == NULL){
        return -1;
    }

    if(i == mat->ncol && j == mat->nlin){
        mat->nlin = j;
        mat->ncol = i;
    }else{
        return -1;
    }

    return 0;
}

//------------------------------------------
//d)

int *copia_coluna(TMat *m, int coluna){

    int *vet;

    vet = malloc(m->nlin * sizeof(int));

    for(int i = 0; i < m->nlin; i++){
        vet[i] = m->dados[i+(m->nlin * coluna)];
    }
    vet[i] = '\0';
    return vet
}
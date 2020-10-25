#include "TLinkedList.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct list_node list_node;

// node definition
struct list_node {
    struct aluno data;
    list_node *next;
};

// list definition
struct TLinkedList {
    list_node *head;
};

// list_create - cria a lista, fazendo as alocações necessária
TLinkedList* list_create(){
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL){
        list->head = NULL;
    }
    return list;
};

// list_free - libera toda a lista da memória
int list_free(TLinkedList *li){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    list_node *aux = li->head;
    list_node *present = NULL;

    while(aux != NULL){
        present = aux;
        aux = aux->next;
        free(present);
    }

    free(li);

    return SUCCESS;
}

int list_push_front(TLinkedList *li, struct aluno al){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    list_node *new_node = malloc(sizeof(list_node));

    if(new_node == NULL){
        return OUT_OF_MEMORY;
    }

    new_node->data = al;
    new_node->next = li->head;
    li->head = new_node;

    return SUCCESS;
}

int list_push_back(TLinkedList *li, struct aluno al){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    list_node *new_node = malloc(sizeof(list_node));

    if(new_node == NULL){
        return OUT_OF_MEMORY;
    }

    new_node->data = al;
    new_node->next = NULL;

    if(li->head == NULL){
        li->head = new_node;
        return SUCCESS;
    }

    list_node* aux = li->head;

    while(aux->next != NULL){
        aux = aux->next;
    }

    aux->next = new_node;

    return SUCCESS;
}

int list_insert(TLinkedList *li, int pos, struct aluno al){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    list_node *aux = li->head;
    int count = 0;

    while(aux != NULL){
        count++;
        aux = aux->next;
    }

    if(pos <= 0 || pos > count+1){
        return OUT_OF_RANGE;
    }else{
        list_node *new_node = malloc(sizeof(list_node));

        if(new_node == NULL){
            return OUT_OF_MEMORY;
        }else {
            new_node->data = al;
            new_node->next = NULL;
            if(li->head == NULL){
                li->head = new_node;
            } else if (pos == 1){
                new_node->next = li->head;
                li->head = new_node;
            }else if (pos == count +1){
                aux = li->head;

                while(aux->next != NULL){
                    aux = aux->next;
                }

                aux->next = new_node;
            }else{
                int i = 1;
                aux = li->head;


                while(i < pos-1){
                    aux = aux->next;
                    i++;
                }
                new_node->next = aux->next;
                aux->next = new_node;
            }
            return SUCCESS;
        }
    }
}

int list_insert_sorted(TLinkedList *li, struct aluno al){
  if (li == NULL){
    return INVALID_NULL_POINTER;
  } else {
    list_node *node;
    node = malloc(sizeof(list_node));
    if (node == NULL) {
      return OUT_OF_MEMORY;
    } else {
      node->data = al;
      // teste se a lista está vazia
      if (li->head == NULL){
        node->next = NULL;
        li->head = node;
      } else {
        // a lista possui pelo menos 1 elemento
        list_node *aux, *previous;
        aux = li->head;
        while (aux != NULL &&  aux->data.matricula < al.matricula ) {
          previous = aux;
          aux = aux->next;
        }
        // verificando se a inserção é no início da lista
        if (aux == li->head) {
          node->next = li->head;
          li->head = node;
        } else {
          // inserção em uma posição diferente do início da lista
          previous->next = node;
          node->next = aux;
        }
      }
      return SUCCESS;
    }
  }
}

int list_size(TLinkedList *li){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    list_node *aux = li->head;
    int count = 0;

    while(aux != NULL){
        count++;
        aux = aux->next;
    }

    return count;
}

int list_pop_front(TLinkedList *li){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }

    list_node *aux = li->head;
    li->head = aux->next;

    free(aux);

    return SUCCESS;
}

int list_pop_back(TLinkedList *li){
     if(li == NULL){
        return INVALID_NULL_POINTER;
    }
    if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }
    //caso tenha só um elem na lista
    if(li->head->next == NULL){
        free(li);
        li->head == NULL;
        return SUCCESS;
    }

    list_node *prev = NULL;
    list_node *aux = li->head;

    while(aux->next != NULL){
        prev = aux;
        aux = aux->next;
    }

    prev->next = NULL;
    free(aux);

    return SUCCESS;
}

int list_erase_data(TLinkedList *li, int mat){
    if (li == NULL){
        return INVALID_NULL_POINTER;
    }else if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }else {
        list_node *aux, *prev;
        aux = li->head;

        while (aux != NULL && aux->data.matricula != mat){ // short circuit no teste!
          prev = aux;
          aux = aux->next;
        }

        if (aux == NULL){
          return ELEM_NOT_FOUND;
        }
        else {
            if (li->head->next == NULL){
                // lista com um só elemento
                li->head = NULL;
            } else if (aux == li->head){
                // início da lista
                li->head = aux->next;
            } else {
                // meio de lista
                prev->next = aux->next;
            }
            free(aux);
            return SUCCESS;
        }
    }
}

int list_erase_pos(TLinkedList *li, int pos){
    if (li == NULL){
        return INVALID_NULL_POINTER;
    }else if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }

    int count = list_size(li);
    if(pos <= 0 || pos > count){
        return OUT_OF_RANGE;
    }
    else {
        list_node *aux, *prev;
        aux = li->head;
        int flag = 1;

        while (aux != NULL && flag != pos){ // short circuit no teste!
          prev = aux;
          aux = aux->next;
          flag++;
        }

        if (li->head->next == NULL){
            // lista com um só elemento
            li->head = NULL;
        } else if (aux == li->head){
            // início da lista
            li->head = aux->next;
        } else {
            // meio de lista
            prev->next = aux->next;
        }
        free(aux);
        return SUCCESS;

    }

}

int list_find_pos(TLinkedList *li, int pos, struct aluno *al){
     if(li == NULL){
        return INVALID_NULL_POINTER;
    }else if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }
    int count = list_size(li);
    if(pos <= 0 || pos > count){
        return OUT_OF_RANGE;
    }else{

        list_node *aux = li->head;
        int i = 1;

        while(aux != NULL){
            if(i == pos)
             {
               *al = aux->data;
                break;
             }
            aux = aux->next;
            i++;
        }
        return SUCCESS;
    }
}

int list_find_mat(TLinkedList *li, int nmat, struct aluno *al){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }
    else{

        list_node *aux = li->head;

        while(aux != NULL && aux->data.matricula != nmat){
            aux = aux->next;
        }

        if(aux == NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            *al = aux->data;
            return SUCCESS;
        }
    }
}

int list_front(TLinkedList *li, struct aluno *al){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }else if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }else{
        *al = li->head->data;
        return SUCCESS;
    }
}

int list_back(TLinkedList *li, struct aluno *al){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }else if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }else{
        list_node *aux = li->head;

        while(aux->next != NULL){
            aux = aux->next;
        }
        *al = aux->data;
        return SUCCESS;
    }
}

int list_get_pos(TLinkedList *li, int nmat, int *pos){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }else if(li->head == NULL){
        return ELEM_NOT_FOUND;
    }
    else{

        list_node *aux = li->head;
        int flag = 1;

        while(aux != NULL && aux->data.matricula != nmat){
            aux = aux->next;
            flag++;
        }

        if(aux == NULL){
            return ELEM_NOT_FOUND;
        }
        else{
            *pos = flag;
            return SUCCESS;
        }
    }
}

int list_print(TLinkedList *li){
    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    list_node *aux = li->head;

    printf("Lista de alunos: \n");
    while(aux != NULL){
        printf("Matrícula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.2f, %.2f, %.2f\n", aux->data.n1, aux->data.n2, aux->data.n3);
        printf("-------------------------------------\n\n");

        aux = aux->next;
    }

    return SUCCESS;
}

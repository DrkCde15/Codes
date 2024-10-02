#include "lista.h"

void inicializa_lista (t_lista *l) {
    l->tamanho = 0;
    l->primeiro = NULL;
}

int esta_vazia (t_lista *l) {
    return l->primeiro == NULL;
}

void insere_inicio (int i, t_lista *l) {
    t_no * novo = constroi_no(i);
    if (!esta_vazia(l)) {
        novo->proximo = l->primeiro;
    }
    l->primeiro = novo;
    l->tamanho++;
    
}

int remove_inicio (t_lista * l) {
    int temp = l->primeiro->info;
    t_no * lixo = l->primeiro;
    l->primeiro = l->primeiro->proximo;
    l->tamanho--;
    free(lixo);
    return temp;
}
void mostra_lista (t_lista l) {
    if (esta_vazia(&l)) {
        printf ("lista vazia\n");

    } else {
        t_no * aux = l.primeiro;
        while (aux != NULL) { //fim da lista
            printf ("| %d | -> ", aux->info);
            aux = aux->proximo;
        }
        printf("//\n");
    }
}
 void insere_fim (int i, t_lista *l) {
    t_no * novo = constroi_no(i);
    if (esta_vazia(l)) {
        l->primeiro = novo;
    }
    else {
        t_no * aux = l->primeiro;
        while (aux->proximo != NULL) { //ultimo da lista
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
    l->tamanho++;
 }

int remove_fim (t_lista *l) {
    int temp;
    // = l->proximo->info;
    t_no * lixo;
    // = l->proximo;
    if (l->primeiro->proximo == NULL) {
        temp = l->primeiro->info;
        lixo = l->primeiro;
        l->primeiro = NULL; 
    } else {
        t_no * aux = l->primeiro;
        while (aux->proximo->proximo != NULL) {
            aux = aux->proximo;
        }
        temp = aux->proximo->info;
        lixo = aux->proximo;
        aux->proximo = NULL;
    }
    l->tamanho--;
    free(lixo);
    return temp;
}
#include "lista.h"
void inicia_lista (t_lista *l) {
    l->primeiro = NULL;
    l->tamanho = 0;
}
int esta_vazia (t_lista *l) {
    return l->tamanho == 0;
}

int push (int i, t_lista *l) {
    t_no * novo = constroi_no(i);
    if (novo == NULL) return FRACASSO;
    if (!esta_vazia(l)) {
        novo->proximo = l->primeiro;
    }
    l->primeiro = novo;
    l->tamanho++;
    return SUCESSO;
}

int pop (t_lista *l, int *i){
    if (esta_vazia(l)) return FRACASSO;
    *i = l->primeiro->info;
    struct no * temp = l->primeiro;
    l->primeiro = l->primeiro->proximo;
    l->tamanho--;
    free(temp);
    return SUCESSO;
}
void exibe_lista (t_lista *l) {
    if (esta_vazia(l))
        printf ("lista vazia");
    else {
        struct no * aux = l->primeiro;
        while (aux != NULL) { //até o final da lista
            printf ("[%d] -> ", aux->info);
            aux = aux->proximo;
        }
        printf ("//\n");
    }
}

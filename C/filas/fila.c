#include "fila.h"

void constroi_fila (t_fila *f) {
    f->primeiro = NULL;
    f->ultimo = NULL;
}

int fila_vazia (t_fila *f) {
    return f->primeiro == NULL;
}

void enfileira (int i, t_fila *f) {
    t_no * novo = constroi_no(i);
    if (fila_vazia(f)) {
        f->primeiro = novo;
    }
    else {
        f->ultimo->proximo = novo; 
    }
    f->ultimo = novo;
}

int desenfileira (t_fila *f) {
    int i = -1;
    if (!fila_vazia(f)) {
        i = f->primeiro->info;
        t_no * aux = f->primeiro;
        f->primeiro = f->primeiro->proximo;
        if (f->primeiro == NULL) f->ultimo = NULL; //esvaziou a fila
        free(aux);
    }
    return i;
}
void exibe_fila (t_fila *f) {
    if (fila_vazia(f))
        printf ("fila vazia");
    else {
        t_no * aux = f->primeiro;
        while (aux != NULL) {
            printf ("%d ", aux->info);
            aux = aux->proximo;
            
        }
    }
}

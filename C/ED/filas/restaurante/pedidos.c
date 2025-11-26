#include "pedidos.h"

void constroi_fila (t_fila *f) {
    f->primeiro = NULL;
    f->ultimo = NULL;
}

int fila_vazia (t_fila *f) {
    return f->primeiro == NULL;
}

void enfileira (t_prato p, t_fila *f) {
    t_no * novo = constroi_no(p);
    if (fila_vazia(f)) {
        f->primeiro = novo;
    }
    else {
        f->ultimo->proximo = novo; 
    }
    f->ultimo = novo;
}

t_prato desenfileira (t_fila *f) {
    t_prato p;
    if (!fila_vazia(f)) {
        p = f->primeiro->prato;
        t_no * aux = f->primeiro;
        f->primeiro = f->primeiro->proximo;
        if (f->primeiro == NULL) f->ultimo = NULL; //esvaziou a fila
        free(aux);
    }
    return p;
}
void exibe_fila (t_fila *f) {
    if (fila_vazia(f))
        printf ("sem pedidos\n");
    else {
        t_no * aux = f->primeiro;
        int i=1;
        while (aux != NULL) {
            printf ("prato %d:\n%s", i++, string_prato(aux->prato));
            aux = aux->proximo;
        }
    }
}

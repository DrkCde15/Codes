#include "abb.h"
void inicia_arvore (t_abb *abb) {
    abb->raiz = NULL;
}

int esta_vazia (t_abb *abb) {
    return abb->raiz == NULL;
}

void insere_rec (t_no *novo, t_no *atual) {
    if (novo->info > atual->info) { //ir para direita
        if (atual->direita == NULL) 
            atual->direita = novo;
        else
            insere_rec (novo, atual->direita);
    }
    else { //ir para esquerda
        if (atual->esquerda == NULL)
            atual->esquerda = novo;
        else
            insere_rec (novo, atual->esquerda);
    }
}
void insere (int i, t_abb *abb) {
    t_no *novo = constroi_no(i);
    if (esta_vazia(abb)) {
        abb->raiz = novo;
    }
    else {
        insere_rec (novo, abb->raiz);
    }
}

void print_em_ordem_rec (t_no * atual) {
    if (atual->esquerda != NULL) // navega para esquerda
    print_em_ordem_rec (atual->esquerda);
    printf ("%d ", atual->info); // faz o processamento da informação atual
    if (atual->direita != NULL)  // navega para direita
    print_em_ordem_rec (atual->direita);
}
void print_em_ordem (t_abb *abb) {
    if (esta_vazia(abb))
        printf ("arvore vazia\n");
    else 
        print_em_ordem_rec (abb->raiz);
}

int conta_nos_rec (t_no *atual) {
    if (atual == NULL) return 0;
    return 1 + conta_nos_rec(atual->esquerda) + conta_nos_rec(atual->direita);
}
int conta_nos (t_abb *abb) {
    if (esta_vazia(abb)) return 0;
    return conta_nos_rec (abb->raiz);
}
int soma_valores_rec (t_no *atual) {
    if (atual == NULL) return 0;
    return atual->info + soma_valores_rec(atual->esquerda) + soma_valores_rec(atual->direita);
}
int soma_valores (t_abb *abb){
    if (esta_vazia(abb)) return 0;
    return soma_valores_rec (abb->raiz);
}
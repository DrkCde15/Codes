#include "abb.h"

void inicializa_abb (t_abb * a) {
    a->raiz = NULL;
}

int esta_vazia (t_abb *a) {
    return (a->raiz == NULL);
}

void insere_rec (t_no * novo, t_no * atual) {
    if (novo->info <= atual->info) { //vai pra esquerda
        if (atual->esq == NULL) { //gancho da esquerda está livre
            atual->esq = novo; //atual esq tá recebendo o endereço, sai mais barato
        }
        else {
            insere_rec(novo, atual->esq);
        }

    }
    else { //vai pra direita
        if (atual->dir == NULL) { //gancho da direita está livre
            atual->dir = novo;
        }
        else {
            insere_rec(novo, atual->dir);
        }

    }
}
void insere (int i, t_abb *a) {
    t_no * novo = constroi_no(i);
    if (esta_vazia(a)) {
        a->raiz = novo;
    } else {
        insere_rec (novo, a->raiz);
    }
}

void exibe_em_ordem_rec (t_no * atual) {
    if (atual != NULL) {
        exibe_em_ordem_rec(atual->esq);
        mostra_no(atual);
        exibe_em_ordem_rec (atual->dir);
    }
}

void exibe_em_ordem (t_abb*a) {
    if (esta_vazia(a)) {
        printf("arvore vazia");

    }
    else {
        exibe_em_ordem_rec (a->raiz);

    }
}

void exibe_pre_ordem_rec (t_no * atual) {
    if (atual != NULL) {
        mostra_no(atual);
        exibe_em_ordem_rec(atual->esq);
        exibe_em_ordem_rec (atual->dir);
    }
}

void exibe_pre_ordem (t_abb * a) {
    if (esta_vazia(a)) {
        printf("arvore vazia");
    }
    else {
        exibe_pre_ordem_rec (a->raiz);
    }
}
void exibe_ordem_decrescente_rec (t_no * atual) {
    if (atual) {
        exibe_ordem_decrescente_rec (atual->dir);
        mostra_no(atual);
        exibe_ordem_decrescente_rec(atual->esq);
    }
}

void exibe_ordem_decrescente (t_abb * a) {
    if (esta_vazia(a)) {
        printf("arvore vazia");
    }
    else {
        exibe_ordem_decrescente_rec (a->raiz);
    }
}
int maior_arvore (t_abb * a) {
    if (esta_vazia(a)) return -1;
    t_no * atual = a->raiz;
    while (atual->dir != NULL) {
        atual = atual->dir;
    }
    return atual->info;

}

int altura_rec (t_no * atual) {
    if (atual->esq == NULL && atual->dir == NULL) { //é uma folha
        return 0;
    }
    int nivel_dir = 0, nivel_esq = 0;
    if (atual->esq != NULL) {
        nivel_esq = altura_rec(atual->esq);
    }
    if (atual->dir != NULL) {
        nivel_dir = altura_rec(atual->dir);
    }
    if (nivel_dir > nivel_esq) {
        return nivel_dir+1;
    } else {
        return nivel_esq+1;
    }
   //return nivel_dir > nivel_esq ? nivel_dir + 1 : nivel_esq + 1;
}

int altura_arvore (t_abb * a) {
    if (esta_vazia(a)) return 0; 
    return altura_rec(a->raiz);
}

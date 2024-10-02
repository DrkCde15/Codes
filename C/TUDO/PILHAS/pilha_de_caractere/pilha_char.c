#include "pilha_char.h"

void constroi_pilha (t_pilha *p, int capacidade) {
    p->dados = (char *) malloc (capacidade);
    p->capacidade = capacidade;
    p->topo = 0; //marca a primeira posição disponível
}

int esta_vazia (const t_pilha *p) {
    return p->topo == 0;
}

int esta_cheia (const t_pilha *p) {
    return p->topo == p->capacidade;
}

int tamanho (const t_pilha *p) {
    return p->topo;
}

void empilha (t_pilha *p, char c) {
    p->dados[p->topo++] = c;
}

char desempilha (t_pilha *p) {
    return p->dados[--p->topo];
}

void mostra_pilha (t_pilha *p) {
    if (esta_vazia(p)) 
        printf ("pilha vazia\n");
    else {
        for (int i=p->topo-1; i>=0; i--)
            printf ("%c\n", p->dados[i]);
    }
}
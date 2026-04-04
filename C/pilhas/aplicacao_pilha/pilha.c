#include "pilha.h"
pilha constroi_pilha (int capacidade){
    pilha p;
    p.capacidade = capacidade;
    p.topo = 0;
    p.v = (char *) malloc (capacidade*1);
    return p;
}
void exibe_pos_elem_topo (pilha *p){
    printf ("posicao do topo: %d\n elemento: %c\n", p->topo-1, p->v[p->topo-1]);
}
int push (char i, pilha *p) {
    if (!esta_cheia(p)) {
        p->v[p->topo++] = i;
        return SUCESSO;
    }
    return FRACASSO;
}
int pop (pilha *p, char *desempilhado) {
    if (!esta_vazia(p)) {
        *desempilhado = p->v[--p->topo];
        return SUCESSO;
    }
    return FRACASSO;
}

int esta_cheia (pilha *p) {
    return p->topo == p->capacidade;
}
int esta_vazia (pilha *p) {
    return p->topo == 0;
}
int tamanho (pilha *p) {
    return p->topo;
}
char * string_pilha (pilha *p) {
    // char s[1000];
    char *s = (char *) malloc (1000);
    char s_aux[32];
    s[0] = '\0';
    if (esta_vazia (p))
        sprintf (s, "pilha vazia\n");
    else {
        for (int i=p->topo-1; i>=0; i--) {
            sprintf (s_aux, "%c\n", p->v[i]);
            strcat (s, s_aux);
        }
        strcat(s, "-------------\n");
    }
    return s;
}
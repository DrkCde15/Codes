#include "no.h"

typedef struct{
    t_no * topo;
    int tamanho;

}t_pilha;

void inicializa_pilha(t_pilha *);

int esta_vazia(t_pilha *);

void empilha(int, t_pilha *);

void mostra_pilha(t_pilha);

int desempilha(t_pilha *);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUCESSO 1
#define FRACASSO 0
typedef  struct {
    int * v;
    int topo;
    int capacidade;
} pilha;
int esta_cheia (pilha *);
int esta_vazia (pilha *);
int push (int, pilha *);
int pop (pilha *, int *);
int tamanho (pilha *);
pilha constroi_pilha (int);
char * string_pilha (pilha *);

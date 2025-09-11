#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int *v;
    int topo;
    int capacidade;
}t_pilha;
int esta_cheia(t_pilha *);
int esta_vazia(t_pilha *);
void push(int, t_pilha *);
int pop(t_pilha *);
int tamannho(t_pilha *);
t_pilha constroi_pilha(int);
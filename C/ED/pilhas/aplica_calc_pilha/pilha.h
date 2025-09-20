#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SUCESSO 1
#define FRACASSO 0
typedef struct{
    char *v;
    int topo;
    int capacidade;
}t_pilha;
int esta_cheia(t_pilha *);
int esta_vazia(t_pilha *);
int push(char, t_pilha *);
int pop(t_pilha *, char *);
int tamannho(t_pilha *);
t_pilha constroi_pilha(int);
char * string_pilha(t_pilha *);
void exibe_pos_ele_topo (t_pilha *);
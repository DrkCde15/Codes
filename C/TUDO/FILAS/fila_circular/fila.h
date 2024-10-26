#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int * v;
    int primeiro, ultimo;
    int capacidade, tamanho;
} t_fila;

t_fila * constroi_fila (int); //o parametro é a capacidade 

int esta_vazia (t_fila *);
int esta_cheia (t_fila *);

int enfileira (int, t_fila *); //o retorno é sucesso(1) ou fracasso(0)
int desenfileira (int *, t_fila *);
//o retorno tbm é sucesso/fracasso e o elemento retirado é passado por parâmetro referência

void mostra_fila (t_fila *);
void mostra_vetor (t_fila *);

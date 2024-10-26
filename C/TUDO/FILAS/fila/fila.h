#include "no.h"

typedef struct {
    t_no * primeiro;
    t_no * ultimo;
    int tamanho;
} t_fila;

void inicia_fila (t_fila *);
int esta_vazia (t_fila *);
void enfileira (int, t_fila *);
int desenfileira (t_fila *);
void mostra_fila (t_fila *);



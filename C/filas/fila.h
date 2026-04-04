#include "no.h"
typedef struct fila {
    t_no * primeiro;
    t_no * ultimo;
} t_fila;

void constroi_fila (t_fila *);
int fila_vazia (t_fila *);
void enfileira (int, t_fila *);
int desenfileira (t_fila *);
void exibe_fila (t_fila *);

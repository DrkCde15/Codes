#include "no.h"
typedef struct fila {
    t_no * primeiro;
    t_no * ultimo;
} t_fila;

void constroi_fila (t_fila *);
int fila_vazia (t_fila *);
void enfileira (t_prato, t_fila *);
t_prato desenfileira (t_fila *);
void exibe_fila (t_fila *);

#include "no.h"
typedef struct  abb {
    t_no *raiz;
} t_abb;

void inicia_arvore (t_abb *);

int esta_vazia (t_abb *);

void insere (int, t_abb *);

void print_em_ordem (t_abb *);

int conta_nos (t_abb *);

int soma_valores (t_abb *);
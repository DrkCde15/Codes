#include "no.h"
#define SUCESSO 1
#define FRACASSO 0
typedef struct lista {
    struct no * primeiro;
    int tamanho;
} t_lista;
void inicia_lista (t_lista *);
int esta_vazia (t_lista *);
int push (int, t_lista *);
int pop (t_lista *, int *);
void exibe_lista (t_lista *);


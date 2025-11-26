#include "no.h"
#define SUCESSO 1
#define FRACASSO 0
typedef struct lista {
    struct no * primeiro;
    int tamanho;
} t_lista;
void inicia_lista (t_lista *);
int esta_vazia (t_lista *);
int insere_inicio (int, t_lista *);
int remove_inicio (t_lista *, int *);
void exibe_lista (t_lista *);
int insere_fim (int, t_lista *);
int remove_fim (t_lista *, int *);

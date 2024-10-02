#include "no.h"

typedef struct {
    t_no * primeiro;
    int tamanho;
}t_lista;

void inicializa_lista (t_lista * );

int esta_vazia (t_lista *);

void insere_fim (int, t_lista *);

void insere_inicio (int, t_lista *);

void mostra_lista (t_lista);

int remove_inicio (t_lista *);

int remove_fim (t_lista *);
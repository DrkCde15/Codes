//bst = abb (binary search tree, arvore binaria de busca)
#include "no.h"

typedef struct abb {
    t_no * raiz;
} t_abb;

void inicializa_abb (t_abb *);

int esta_vazia (t_abb *);

void insere (int, t_abb *);

void exibe_em_ordem (t_abb*);

void exibe_pre_ordem (t_abb*);

void exibe_ordem_decrescente (t_abb *);

int maior_arvore (t_abb *);

int altura_arvore (t_abb *);
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct {
    int capacidade;
    int ocupacao;
    int *v;
} t_vetor;
void inicializa_vetor (t_vetor *, int);
int insere_valor (int, t_vetor *);
int remove_valor (int *, t_vetor *);
int esta_cheio (t_vetor *);
int esta_vazio (t_vetor *);
void exibe_vetor (t_vetor *);
void preenche_vetor (t_vetor *);
void libera_memoria (t_vetor *);
void selection_sort (t_vetor *);
void bubble_sort (t_vetor *);

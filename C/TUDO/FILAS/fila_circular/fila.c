#include "fila.h"

t_fila * constroi_fila (int capacidade) {
    t_fila * pf = (t_fila *) malloc (sizeof(t_fila));
    if (pf != NULL) {
        pf->v = (int *) malloc (capacidade * sizeof(int));
        if (pf->v == NULL) {
            return NULL;
        }
        pf->capacidade = capacidade;
        pf->tamanho = 0;
        pf->primeiro = 0;
        pf->ultimo = 0;
    }
    return pf;
}

    int esta_vazia (t_fila *pf) {
        return pf->tamanho == 0;
    }

    int esta_cheia (t_fila *pf) {
        return pf->tamanho == pf->capacidade;
    }

    int proxima_posicao (int posicao, t_fila * pf) {
        return (posicao + 1) % pf->capacidade;
    }

    int enfileira (int i, t_fila *pf) {
        if (esta_cheia(pf)) return 0;
        pf->v[pf->ultimo] = i;
        pf->ultimo = proxima_posicao(pf->ultimo, pf);
        pf->tamanho++;
        return 1;
    }
    int desenfileira (int *pi, t_fila *pf) {
        if (esta_vazia(pf)) return 0;
        *pi = pf->v[pf->primeiro]; //utiliza *pi para alterar o valor da variavel antes do return, mas n retorna a variavel, só ganho e fracasso
        pf->primeiro = proxima_posicao(pf->primeiro, pf);
        pf->tamanho--;
        return 1;
    }

    void mostra_fila (t_fila *pf) {
        if (esta_vazia(pf)) {
            printf ("fila vazia");
        } else {
            int i = pf->primeiro; 
            do {
                printf ("%d ", pf->v[i]);
                i=proxima_posicao(i, pf);
            } while (i!=pf->ultimo);
           // printf ("\n");
        }
        printf(" | ");
    }
    void mostra_vetor (t_fila *pf) {
        int i;
        if (esta_cheia(pf)) {
            for (i=0; i<pf->capacidade; i++) {
                printf ("%d ", pf->v[i]);
            }
        }
        else if (pf->primeiro <= pf->ultimo) {
            for (i=0; i<pf->primeiro; i++) {
                printf("_ ");
            }
            for (i=pf->primeiro; i<pf->ultimo; i++) {
                printf ("%d ", pf->v[i]);
            }
            for (i=pf->ultimo; i<pf->capacidade; i++) {
                printf("_ ");
            }

        } else {
            for (i=0; i<pf->ultimo; i++) {
                printf("%d ", pf->v[i]);
            }
            for (i=pf->ultimo; i<pf->primeiro; i++) {
                printf("_ ");
            }
            for (i=pf->primeiro; i<pf->capacidade; i++) {
                printf("%d ", pf->v[i]);
            }

        }
        printf("\n");

    }
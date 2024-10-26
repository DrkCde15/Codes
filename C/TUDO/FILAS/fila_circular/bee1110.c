#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int * v;
    int primeiro, ultimo;
    int capacidade, tamanho;
} t_fila;

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

    int posicao_anterior (int posicao, t_fila * pf) {
        return (posicao + pf->capacidade - 1) % pf->capacidade;
    }

    int enfileira (int i, t_fila *pf) {
        if (esta_cheia(pf)) return 0;
        pf->v[pf->ultimo] = i;
        pf->ultimo = proxima_posicao(pf->ultimo, pf);
        pf->tamanho++;
        return 1;
    }
    int desenfileira (t_fila *pf) {
        int i = pf->v[pf->primeiro];
        pf->primeiro = proxima_posicao(pf->primeiro, pf);
        pf->tamanho--;
        return i;
    }

    void mostra_fila (t_fila *pf) {
        int i =  pf->primeiro;
        while (i < posicao_anterior(pf->ultimo, pf)) {
            printf ("%d, ", pf->v[i]);
            i = proxima_posicao(i, pf);
        }
        printf ("%d\n", pf->v[i]);
    }
    void libera_fila (t_fila * pf) {
        free(pf->v);
        free(pf);
    }
    int main () {
        int n;
        scanf("%d", &n);
        while (n > 0) {
            t_fila *fila = constroi_fila(n);
            t_fila *descartados = constroi_fila(n-1);
            for (int i=1; i<=n; i++) {
                enfileira(i, fila);
            }
            while (fila->tamanho >= 2) {
                enfileira(desenfileira(fila), descartados);
                enfileira(desenfileira(fila), fila);
            }
            printf("Discarded cards: ");
            mostra_fila(descartados);
            printf("Remaining card: ");
            mostra_fila(fila);
            libera_fila(fila);
            libera_fila(descartados);
            scanf("%d", &n);
        }
        return 0;
    }
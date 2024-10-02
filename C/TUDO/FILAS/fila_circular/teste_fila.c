#include "fila.h"

int main () {
    t_fila * fila = constroi_fila(10);

    if (fila != NULL) {
        printf("estrutura fila construida com sucesso!\n");
    } else {
        printf("problema na alocaçao da fila!\n");
    }

    if (esta_vazia(fila)) {
        printf("fila vazia\n");
    } else {
        printf("fila tem gente\n");
    }
    int a = 10;
    while (enfileira(a++, fila)) {
        mostra_fila(fila);
    }
    if (esta_cheia(fila)) {
        printf ("fila esta cheia\n");
    } else {
        printf ("fila tem lugar\n");
    }
    while (desenfileira (&a, fila)) {
        printf("%d foi atendido\n", a);
    }
    return 0;
}
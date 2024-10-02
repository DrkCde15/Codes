// 16. Fazer uma funcao que copia uma lista L1 em uma outra lista L2.

#include "lista.h"

void copia_lista(t_lista *l1, t_lista *l2) {

    inicializa_lista(l2);

    t_no *atual_l1 = l1->primeiro;
    while (atual_l1 != NULL)
    {
        insere_fim(atual_l1->info, l2);
        atual_l1 = atual_l1->proximo;
    }
}

int main() {

    t_lista l1, l2;

    inicializa_lista(&l1);

    insere_fim(5, &l1);
    insere_fim(4, &l1);

    printf("lista 1:\n");
    mostra_lista(l1);

    copia_lista(&l1, &l2);

    printf("lista 2:\n");
    mostra_lista(l2);

    return 0;
}
// Escreva uma funcao que verifica se duas listas dadas sao iguais (mesmo conteudo)

#include "lista.h"

int listas_iguais (t_lista *l1, t_lista *l2) {

    t_no *atual_l1 = l1->primeiro;
    t_no *atual_l2 = l2->primeiro;

    while (atual_l1 != NULL && atual_l2 != NULL) {
        if (atual_l1->info != atual_l2->info) {
            return 0;
        } 
        atual_l1 = atual_l1->proximo;
        atual_l2 = atual_l2->proximo;
    }

    if (atual_l1 != NULL || atual_l2 != NULL) {
        return 0;
    }

    return 1;   
}

int main () {

    t_lista l1, l2; 

    inicializa_lista(&l1);
    inicializa_lista(&l2);

    insere_fim(5, &l1);
    insere_fim(2, &l1);
    insere_fim(5, &l2);

    printf("lista 1:\n ");
    mostra_lista(l1);
    printf("lista 2:\n ");
    mostra_lista(l2);

    if (listas_iguais(&l1, &l2)) {
        printf("\nsao iguais");
    } else {
        printf("\nnao sao iguais");
    }

    return 0;
}
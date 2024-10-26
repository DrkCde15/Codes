//14. Desenvolva uma operacao para transferir 
//elementos de uma pilha P1 para uma pilha P2(copia).

#include "pilha.h"

void copia_pilha(t_pilha *p1, t_pilha *p2) {

    while (!esta_vazia(p1)) {
        int aux = desempilha(p1);
        empilha(aux, p2);
    }

}

int main () {

    t_pilha p1, p2;

    inicializa_pilha(&p1);
    inicializa_pilha(&p2);

    empilha (5, &p1);
    empilha (2, &p1);
    empilha (3, &p1);

    printf("pilha 1: \n");
    mostra_pilha(p1);

    copia_pilha(&p1, &p2);

    printf("pilha copiada: \n");
    mostra_pilha(p2);

    return 0;
}
#include <time.h>
#include "pilha.h"

int main () {
    srand (time(0));
    t_pilha p;
    inicializa_pilha(&p);
    do {
        if (rand() % 2) { //verdadeiro: == 1
            empilha(rand()%100, &p);
        }
        else {
            if (!esta_vazia(&p))
                printf ("\n%d foi desempilhado\n", desempilha(&p));
        }
        mostra_pilha(p);
        printf ("-----------\n");
    } while (!esta_vazia(&p));
    return 0;
}

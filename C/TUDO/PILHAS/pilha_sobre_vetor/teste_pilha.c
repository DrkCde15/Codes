#include <time.h>
#include "pilha.h"

int main () {
    srand (time(0));
    t_pilha p;
    constroi_pilha(&p, 10);
    do {
        if (rand() % 2) { //verdadeiro: == 1
            if (!esta_cheia(&p))
                empilha(&p, rand()%100);
        }
        else {
            if (!esta_vazia(&p))
                printf ("\n%d foi desempilhado\n", desempilha(&p));
        }
        mostra_pilha(&p);
        printf ("-----------\n");
    } while (!esta_vazia(&p));
    return 0;
}

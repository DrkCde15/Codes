#include <time.h>
#include "fila.h"

int main () {
    t_fila * fila = constroi_fila(12);
    srand(time(0));
    do {
        if (rand() % 2) {
            enfileira(rand() % 10, fila);
            
        } else {
            int a;
            if (desenfileira (&a, fila)){
                printf("%d saiu\n", a);
            }
        }
        mostra_fila (fila);
        mostra_vetor (fila);
    } while (!esta_vazia(fila));
    return 0;
}
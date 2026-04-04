#include <time.h>
#include "abb.h"

int main () {
    t_abb abb;
    int i, n;
    srand(time(0));
    inicia_arvore (&abb);
    for (i=1; i<=12; i++) {
        n = rand() % 100 + 1; //gera valores de 1 a 100
        printf ("%d ", n);
        insere (n, &abb);
    }
    printf ("\n");
    print_em_ordem (&abb);

    printf ("\na arvore tem %d nos", conta_nos(&abb));
    printf ("\na soma dos valores e %d", soma_valores(&abb));
    return 0;
}
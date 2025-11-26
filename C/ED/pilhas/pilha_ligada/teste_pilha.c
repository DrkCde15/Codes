#include "lista.h"
void converte_binaria (int n) {
    t_lista p;
    inicia_lista(&p);
    while (n>0) {
        push (n%2, &p);
        n = n/2;
        exibe_lista (&p);
    }
}

int main () {
    t_lista p;
    inicia_lista (&p);
    int i = 2;
    while (i<=100) {
        push(i, &p);
        i += 2;
        exibe_lista(&p);
    }
    do {
        if (pop(&p, &i)) {
            printf ("%d foi desempilhado\n", i);
            exibe_lista(&p);
        }
    } while (!esta_vazia(&p));
    return 0;
}
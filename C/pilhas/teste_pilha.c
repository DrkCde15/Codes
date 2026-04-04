#include "pilha.h"

void converte_binaria (int n) {
    pilha p;
    p = constroi_pilha(100);
    while (n>0) {
        push (n%2, &p);
        n = n/2;
        printf ("%s", string_pilha(&p));
    }
}

int main () {
    pilha p = constroi_pilha(5);
    int i = 2;
    while (push(i, &p)) {
        i += 2;
        printf ("%s", string_pilha(&p));
    }
    do {
        if (pop(&p, &i)) {
            printf ("%d foi desempilhado\n", i);
            printf ("%s", string_pilha(&p));
        }
    } while (!esta_vazia(&p));
    return 0;
}
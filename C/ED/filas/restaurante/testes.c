#include <string.h>
#include "no.h"

int main () {
    t_prato p1, p2;
    strcpy (p1.nome, "Lasanha");
    p1.tempo_preparo = 5000;
    p1.preco = 32.75;

    p2 = p1;

    printf ("prato 2:\nnome: %s\npreco: %.2f\ntempo preparo: %d s\n", p2.nome, p2.preco, p2.tempo_preparo/1000);

    printf ("prato 1: %s", string_prato(p1));
    return 0;
}
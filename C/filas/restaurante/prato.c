#include "prato.h"

char * string_prato (t_prato p) {
    char * s = (char *) malloc (200);
    sprintf (s, "nome: %s\npreco: %.2f\ntempo preparo: %d s\n", p.nome, p.preco, p.tempo_preparo/1000);
    return s;
}
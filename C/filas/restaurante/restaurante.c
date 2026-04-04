#include <string.h>
#include "pedidos.h"

int main () {
    t_fila fila_pedidos;
    constroi_fila (&fila_pedidos);
    printf ("restaurante abriu:\n");
    exibe_fila (&fila_pedidos);
    //---------------------
    t_prato p;
    strcpy (p.nome, "lasanha");
    p.tempo_preparo = 50000;
    p.preco = 32.75;
    enfileira (p, &fila_pedidos);
    exibe_fila ((&fila_pedidos));
    //-----------------------
    strcpy (p.nome, "macarrao");
    p.tempo_preparo = 40000;
    p.preco = 28.75;
    enfileira (p, &fila_pedidos);
    exibe_fila ((&fila_pedidos));
    //--------------------
    strcpy (p.nome, "pizza");
    p.tempo_preparo = 12000;
    p.preco = 50.75;
    enfileira (p, &fila_pedidos);
    exibe_fila ((&fila_pedidos));
    return 0;
}
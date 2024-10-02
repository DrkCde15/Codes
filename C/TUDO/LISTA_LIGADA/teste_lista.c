#include "lista.h"

int main () {
    t_lista lista;
    inicializa_lista(&lista);
    printf("lista inicializada\n");
    mostra_lista(lista);
    for (int i=15; i<=25; i+=5) {
        printf("inserido o %d\n", i);
        insere_inicio(i, &lista);
        mostra_lista(lista);
    }
    while (!esta_vazia(&lista)) {
        printf("%d foi removido do inicio\n A lista ficou assim:\n", remove_inicio(&lista));
        mostra_lista(lista);
    }
    for (int i=10; i<=30; i+=10) {
        printf("inserindo o %d\n", i);
        insere_fim(i, &lista);
        mostra_lista(lista);
    }
    
    return 0;
}
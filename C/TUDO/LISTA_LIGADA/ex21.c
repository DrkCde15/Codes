//Escreva uma funcao que crie uma lista encadeada a partir de um vetor.

#include "lista.h"

void lista_de_vetor (int v[], int tamanho, t_lista *lista) {

    inicializa_lista(lista);

    for (int i=0; i<tamanho; i++) {
        insere_fim(v[i], lista);
    }
   
}

int main () {
    int v[] = {1, 2, 3, 4};
    t_lista minha_lista;

    lista_de_vetor(v, 4, &minha_lista);

    mostra_lista(minha_lista);

    return 0;
}
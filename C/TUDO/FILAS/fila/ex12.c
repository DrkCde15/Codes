//escreva uma função que, dada duas filas, concatene as duas filas. retorne a fila concatenada
// em F1. F2 deve ficar vazia

#include "fila.h"

void concatena_fila (t_fila *f1, t_fila *f2 ) {
    f1->ultimo->proximo = f2->primeiro;
    f1->ultimo = f2->ultimo;
    f1->tamanho = f1->tamanho + f2->tamanho;
    inicia_fila(f2); //isso foi feito para o f2 zerar

}
int main () {

    t_fila f1, f2;
    inicia_fila(&f1);
    inicia_fila(&f2);
    for (int i=1; i<10; i+=2) { //enfileira os numeros de 1 a 9 na fila 1;
        enfileira (i, &f1);
    }
    mostra_fila (&f1);
    for (int i=2; i<=10; i+=2) {
        enfileira (i, &f2);
    }
    mostra_fila (&f2);
    concatena_fila(&f1, &f2);
    mostra_fila(&f1);
    mostra_fila(&f2);

    return 0;
}
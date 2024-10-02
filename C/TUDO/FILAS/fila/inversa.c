//Escreva uma função em C que receba uma fila como argumento e inverta a ordem dos elementos na fila. 
//A função não deve alocar memória adicional (exceto variáveis locais).

#include "fila.h"

void inversa (t_fila *f) {
    int temp[10];
    int tam;
    while (!esta_vazia(f)) {
        temp[tam++] = desenfileira(f);
    }

    for (int i=tam-1; i>=0; i--) {
        enfileira(temp[i], f);
    }
}

int main () {
    t_fila f;
    inicia_fila(&f);
    for (int i=1; i<10; i++) { //enfileira os numeros de 1 a 9 na fila 1;
        enfileira(i, &f);
    }
    mostra_fila(&f);

    inversa(&f);
    
    printf("     ");
    mostra_fila(&f);

    return 0;
}
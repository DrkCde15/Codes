#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int primeiro;
    int ultimo;
} t_fila;

void inicia_fila(t_fila *f) {
    f->primeiro = -1;
    f->ultimo = -1;
}

void enfileira(int elemento, t_fila *f) {
    if (f->ultimo == MAX_SIZE - 1) {
        printf("Fila cheia.\n");
    } else {
        if (f->primeiro == -1) {
            f->primeiro = 0;
        }
        f->ultimo++;
        f->items[f->ultimo] = elemento;
    }
}

int inversa(t_fila *f, int tamanho) {
    int i;
    int v[MAX_SIZE]; // Array temporário para armazenar os elementos da fila
    int elemento;

    // Copia os elementos da fila para o array temporário v
    for (i = f->ultimo; i >= f->primeiro; i--) {
        v[i] = f->items[i];
    }

    // Retorna o elemento no índice tamanho-1 do array v (inverso da posição tamanho na fila)
    elemento = v[tamanho - 1];
    return elemento;
}

int main() {
    t_fila f;
    inicia_fila(&f);

    for (int i = 1; i < 10; i++) {
        enfileira(i, &f);
    }

    int a = inversa(&f, 5);
    printf("Elemento na posição inversa: %d\n", a);

    return 0;
}

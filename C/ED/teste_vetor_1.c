#include "vetor.h"
int main () {
    int capacidade;
    t_vetor meu_vetor;
    printf ("digite a capacidade do vetor: ");
    scanf ("%d", &capacidade);
    inicializa_vetor(&meu_vetor, capacidade);
    exibe_vetor (&meu_vetor);
    int i;
    for (i=1; i<=100; i++) {
        insere_valor(i, &meu_vetor);
        printf ("capacidade: %d, ocupacao: %d\n", meu_vetor.capacidade, meu_vetor.ocupacao);
        exibe_vetor (&meu_vetor);
    }
    while (remove_valor(&i, &meu_vetor)) {
        printf ("%d saiu\n", i);
        printf ("capacidade: %d, ocupacao: %d\n", meu_vetor.capacidade, meu_vetor.ocupacao);
        exibe_vetor(&meu_vetor);
    }
    return 0;
}


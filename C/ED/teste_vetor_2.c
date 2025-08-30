#include "vetor.h"
int main () {
    t_vetor vetor;
    int capacidade;
    printf ("qual o tamanho do vetor? ");
    scanf ("%d", &capacidade);
    srand(time(0));
    while (capacidade > 0) {
        inicializa_vetor(&vetor, capacidade);
        preenche_vetor(&vetor);
        exibe_vetor(&vetor);
        long int ini = time(0);
        selection_sort(&vetor);
        long int fim = time(0);
        exibe_vetor(&vetor);
        printf ("Selecton:\ntamanho: %d, tempo: %d\n", capacidade, fim-ini);
        preenche_vetor(&vetor);
        exibe_vetor(&vetor);
        ini = time(0);
        bubble_sort(&vetor);
        fim = time(0);
        exibe_vetor(&vetor);
        printf ("Bubble:\ntamanho: %d, tempo: %d\n", capacidade, fim-ini);
        libera_memoria(&vetor);
        printf ("\nqual o novo tamanho do vetor? ");
        scanf ("%d", &capacidade);
    }
    return 0;
}
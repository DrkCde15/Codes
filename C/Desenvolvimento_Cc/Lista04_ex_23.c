#include <stdio.h>

int main() {
    float vetor1[5], vetor2[5];
    float produtoEscalar = 0;

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor2[i]);
        produtoEscalar += vetor1[i] * vetor2[i];
    }

    printf("\nVetor 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetor2[i]);
    }

    printf("\nProduto Escalar: %.2f\n", produtoEscalar);

    return 0;
}
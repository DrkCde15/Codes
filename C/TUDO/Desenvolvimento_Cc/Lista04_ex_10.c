#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / 15;
    printf("A média geral é: %.2f\n", media);

    return 0;
}
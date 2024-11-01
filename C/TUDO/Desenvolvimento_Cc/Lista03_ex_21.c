#include <stdio.h>

int main() {
    int num1, num2, i;
    int somaPares = 0, multiplicacaoImpares = 1;

    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    for (i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            multiplicacaoImpares *= i;
        }
    }

    printf("Soma dos pares: %d\n", somaPares);
    printf("Multiplicação dos ímpares: %d\n", multiplicacaoImpares);

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite dois números inteiros positivos i e j (diferentes de 0): ");
    scanf("%d %d", &i, &j);

    printf("Os primeiros %d naturais múltiplos de %d ou %d são: ", n, i, j);

    int count = 0, num = 0;
    while (count < n) {
        if (num % i == 0 || num % j == 0) {
            printf("%d, ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}
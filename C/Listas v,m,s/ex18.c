#include <stdio.h>

#define L 3
#define C 3

int main() {
    int matrix[L][C];
    int soma_coluna[C] = {0};
    int i;
    int j;

    printf("Digite os elementos da matriz %dx%d:\n", L, C);
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
            soma_coluna[j] += matrix[i][j];
        }
    }

    printf("Soma dos elementos de cada coluna:\n");
    for (int j = 0; j < C; j++) {
        printf("%d ", soma_coluna[j]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 5

int contains(int num, int (*matrix)[T]) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (matrix[i][j] == num) {
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int matrix[T][T] = {0};
    srand(time(NULL));

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            int num;
            do {
                num = rand() % 100; 
            } while (contains(num, matrix));
            matrix[i][j] = num;
        }
    }

    printf("Cartela de Bingo:\n");
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
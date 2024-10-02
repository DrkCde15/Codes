#include <stdio.h>

#define L 2
#define C 2

void printMatrix(float matrix[L][C]) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addConstant(float matrix[L][C], float constant) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            matrix[i][j] += constant;
        }
    }
}

int main() {
    float matrix1[L][C], matrix2[L][C];
    float constant;

    printf("Digite os elementos da primeira matriz %dx%d:\n", L, C);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%f", &matrix1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", L, C);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%f", &matrix2[i][j]);
        }
    }

    char option;
    printf("Escolha uma opcao:\n");
    printf("(a) somar as duas matrizes\n");
    printf("(b) subtrair a primeira matriz da segunda\n");
    printf("(c) adicionar uma constante as duas matrizes\n");
    scanf(" %c", &option);

    if (option == 'a') {
        printf("Resultado da soma:\n");
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                printf("%.2f ", matrix1[i][j] + matrix2[i][j]);
            }
            printf("\n");
        }
    } else if (option == 'b') {
        printf("Resultado da subtracao:\n");
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                printf("%.2f ", matrix2[i][j] - matrix1[i][j]);
            }
            printf("\n");
        }
    } else if (option == 'c') {
        printf("Digite a constante a ser adicionada: ");
        scanf("%f", &constant);
        printf("Resultado da adicao da constante %.2f:\n", constant);
        addConstant(matrix1, constant);
        addConstant(matrix2, constant);
        printf("Matriz 1:\n");
        printMatrix(matrix1);
        printf("Matriz 2:\n");
        printMatrix(matrix2);
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
#include <stdio.h>

// Função de partição
int partition(int elementos[], int p, int r) {
    int x = elementos[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (elementos[j] <= x) {
            i = i + 1;
            int aux = elementos[i];
            elementos[i] = elementos[j];
            elementos[j] = aux;
        }
    }
    i = i + 1;
    elementos[r] = elementos[i];
    elementos[i] = x;
    return i;
}

// Função quick sort
void quick(int elementos[], int p, int r) {
    printf("p = %d, r = %d\n", p, r);
    if (p < r) {
        int q = partition(elementos, p, r);
        printf("q = %d\n", q);
        quick(elementos, p, q - 1);
        quick(elementos, q + 1, r);
    }
}

// Função principal
int main() {
    int elementos[] = {3, 6, 8, 10, 1, 2, 1};
    int n = sizeof(elementos) / sizeof(elementos[0]);

    printf("Array original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", elementos[i]);
    }
    printf("\n");

    quick(elementos, 0, n - 1);

    printf("Array ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", elementos[i]);
    }
    printf("\n");

    return 0;
}

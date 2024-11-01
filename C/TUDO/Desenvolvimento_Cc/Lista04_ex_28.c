#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10];
    int countV1 = 0, countV2 = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) {
            v2[countV2] = v[i];
            countV2++;
        } else {
            v1[countV1] = v[i];
            countV1++;
        }
    }

    printf("\nElementos UTILIZADOS de v1: ");
    for (int i = 0; i < countV1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nElementos UTILIZADOS de v2: ");
    for (int i = 0; i < countV2; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n");

    return 0;
}
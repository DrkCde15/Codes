#include <stdio.h>
#define T 10

int main () {
    int v[T];
    int i;

    printf("Digite %d valores:\n", T);
    for(i=0; i<T; i++) {
        scanf("%d", &v[i]);
    }
    printf("\nValores das posicoes pares:");
    for(i=0; i<T; i=i+2) {
        printf("%d ", v[i]);
    }
    return 0;
}
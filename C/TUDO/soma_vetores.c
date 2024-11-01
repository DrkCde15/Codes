#include <stdio.h>
#define T 5

int main() {
    int v1[T], v2[T], vs[T];
    int i;
    printf("Digite %d valores para o 1o vetor:\n", T);
    for(i=0; i<T; i++) {
        scanf("%d", &v1[i]);
    }
    printf("Digite %d valores para o 2o vetor:\n", T);
    for(i=0; i<T; i++) {
        scanf("%d", &v2[i]);
    }
    for(i=0; i<T; i++) {
        vs[i] = v1[i] + v2[i];
    }
    for(i=0; i<T; i++) {
        printf("%4d ", v1[i]);
    }
    printf("\n      +\n");
    printf("\n");
    for(i=0; i<T; i++) {
        printf("%4d ", v2[i]);
    }
    printf("\n");
    for(i=0; i<T; i++) {
        printf("------");
    }
    printf("\n");
    for(i=0; i<T; i++) {
        printf("%4d ", vs[i]);
    }
    return 0;
}
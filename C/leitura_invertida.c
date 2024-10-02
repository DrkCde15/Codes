#include <stdio.h>
#define D 6

int main () {
    int v[D];
    int i;

    printf("Insira 6 numeros:");
    for(i=0; i<D; i++) {
        scanf("%d", &v[i]);
    }

    printf("Valores na ordem inversa:\n");
    for(i=D-1; i>=0; i--) {
        printf("%d ", v[i]);
    }
    return 0;
}
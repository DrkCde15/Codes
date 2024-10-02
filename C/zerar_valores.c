#include <stdio.h>

int main () {
    int v[10];
    int i;

    printf("Digite 10 numeros: ");

    for(i=0; i<10; i++) {
        if(v[i]<0) {
            v[i] = 0;
        }
    }
    for(i=0; i<10; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
#include <stdio.h>
#define T 10

int main() {
    int v[T], v2[T];
    int i=0, j, x;

    printf("Insira numeros inteiros ate 50: ");
    while(i<T) {
        scanf("%d", &x);
        if(x>=0 && x<=50){
            v[i]=x;
            i++;
            for(j=0; j<i; j++) {
                printf ("%d ", v[j]);
            }
            printf("\n");
        }
        else {
            printf("Numero invalido. Insira outro: ");
        }
    }
    for(i=0; i<T; i++) {
        printf("%d ", v[i]);
    }
    for(i=0, j=0; i<T; i++) {
        if(v[i] % 2 == 1) {
            v2[j] = v[i];
            j++;
        }
    }
    printf("\nVetor de impares\n");
    for(i=0; i<j; i++) {
        printf("%d ", v2[i]);
    }
    return 0;
}
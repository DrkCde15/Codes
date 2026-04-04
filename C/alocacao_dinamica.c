#include <stdio.h>
#include <stdlib.h>

int main () {
    int *v, tamanho;

    printf ("tamanho de v: %d\n", sizeof (v));
    printf ("tamanho de tamanho: %d\n", sizeof(tamanho));
    printf ("digite o tamanho do vetor: ");
    scanf ("%d", &tamanho);
    v = (int *) malloc (tamanho * sizeof(int));
    //printf ("novo tamanho de v: %d\n", sizeof (v));
    for (int i=0; i<tamanho; i++) {
        printf ("posicao %d: %p | ", i, v+i);
        printf ("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, t;
    printf("Vetor: %d\n", sizeof(v));
    printf("Tamanho de t: %d\n", sizeof(t));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);
    v = (int*)malloc(t*sizeof(int));

    // printf("novo tamanho do vetor: %d\n", sizeof(v));

    for(int i=0; i<t; i++){
        printf("posicao %d:%p | ", i, v+i);
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0;
}
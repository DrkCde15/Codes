#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, t, *v, maior, seg_maior;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);

    v = (int *) malloc (t * sizeof(int));

    for(i = 0; i < t; i++){
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &v[i]);
    }

    maior = v[0];

    for(i = 1; i < t; i++){
        if(v[i] > maior){
            seg_maior = maior;
            maior = v[i];
        }
    }
    printf("O segundo maior valor e: %d", seg_maior);
    return 0;
}
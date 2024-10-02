#include<stdio.h>
#include<stdlib.h>

int main(){
    int * v, i;
    
    v = (int *) malloc (290000000 * sizeof(int));

    printf("Tamanho do vetor: %d", sizeof(v));
    printf("Valor do v: %p\n", v);
    printf("Valores nas posicoes do vetor:\n");
    for(i = 0; i < 10; i++){
        printf("posicao:%p      valor:%d\n",v+i, v[i]);
    }
    return 0;
}
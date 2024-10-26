#include<stdio.h>
#include<stdlib.h>

int main(){
    int t, i, *v;
    printf("escolha o tamanho do vetor: ");
    scanf("%d", &t);
    v = (int *) malloc (t * sizeof(int));
    for(i = 0; i < t; i++){
        printf("valor da posicao %d: ", i);
        scanf("%d", &v[i]);  
    }
    printf("\nvetor digitado: ");
    for(i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    free(v);
    v = (int *) malloc (2*t*sizeof(int));

}
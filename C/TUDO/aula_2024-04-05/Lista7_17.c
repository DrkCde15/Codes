#include <stdio.h>


void somaEntreValores(int, int, int *);

int main(){

    printf("\n\n\n");


    int soma=0;
    somaEntreValores(4,1, &soma);

    printf("Soma dos valores: %d", soma);
    
    
    printf("\n\n\n");

    return 0;
}


void somaEntreValores(int a, int b, int *soma){
    int ini, fim;

    if(a <= b){
        ini = a;
        fim = b;
    }
    else{
        ini = b;
        fim = a;
    }


    for(int i=ini+1; i<fim; i++){
        *soma += i;
    }
}
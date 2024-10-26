#include <stdio.h>

int somarDobro(int *, int *);

int main(){

    printf("\n\n\n");



    int a=0, b=0;

    printf("Digite o valor de 'a': ");
    scanf("%d", &a);
    printf("Digite o valor de 'b': ");
    scanf("%d", &b);

    printf("A soma do dobro eh %d", somarDobro(&a, &b));



    printf("\n\n\n");

    return 0;
}


int somarDobro(int *a, int *b){
    *a *= 2;
    *b *= 2;

    return *a + *b;
}
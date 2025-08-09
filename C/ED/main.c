#include <stdio.h>
int main(){
    int a; //inteiro
    int *pi; // aponta(ponteiro) para um inteiro
    int **pp; // ponteiro para um ponteiro de um inteiro

    a = 37; //atribuição de valor a uma variável
    pi = &a; //atribuição de endereço para uma variável
    *pi = 42; //atribuição de valor para um endereço
    printf("%d, %d e %d", a, pi, *pi); //mostra o valor das variáveis
    return 0;
}

//& = referencia

void zum (int a){
    a = a + 2;
}

void plac (int *a){
    *a = *a * 10;
}
int main(){
    int a = 10;
    printf("a original: %d\n", a);
    zum(a);
    printf("a depois de zum: %d\n", a);
    plac(&a);
    printf("a depois de plac: %d\n", a);
    return 0;
}
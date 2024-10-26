//ler um inteiro na base 10 e convertê-lo para a base binária, utilizando pilha
#include "pilha.h"

int main () {
    int n;
    t_pilha p;
    constroi_pilha(&p, 100);
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (n>1) {
        empilha (&p, n%2);
        n = n/2;
    }
    empilha (&p, n);
    mostra_pilha (&p);
    return 0;
}
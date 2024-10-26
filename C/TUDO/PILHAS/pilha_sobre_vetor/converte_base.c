//usuario inserir valor na base 10 e converter para a base dois usando pilha 
#include <stdio.h>
#include "pilha.h"

int main() {

    int n;
    t_pilha p;
    constroi_pilha(&p, 100);
    printf("insira o valor inteiro:");
    scanf("%d", &n);

    while (n > 1) {
        empilha (&p, n%2);
        n = n / 2;
    }
    empilha (&p, n);
    mostra_pilha (&p);
    return 0;
}
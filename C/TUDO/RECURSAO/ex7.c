//Fac¸a uma func¸ao recursiva que receba um n ˜ umero inteiro positivo N e imprima todos os ´
//numeros naturais de 0 at ´ e N em ordem crescente.

#include <stdio.h>

int naturais(int n) {
    if (n>0) {
        naturais(n-1);
    }
    printf("%d ", n);
}


int main () {
    int n = 4;
    naturais(n);

    return 0;
}
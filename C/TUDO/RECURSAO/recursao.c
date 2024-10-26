//Chamada de uma sub-rotina por ela mesma.
//Toda repetição pode ser por comandos de laço, ou por chamadas recursivas.
//Toda recursão deve ter um critério de parada.
#include <stdio.h>

int fatorial (int n) {
    //printf("n = %d\n", n);
    if (n <= 1) {
        return 1;
    }
    else {
        return n * fatorial(n-1);
    }
}

int fibonacci (int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int soma_1_a_n (int n) {
    if (n>0) {
        return n + soma_1_a_n(n-1);
    }
    else {
        return 0;
    }
}

int main () {

    for (int i=0; i <= 12; i++) {
        printf("Fatorial de %d = %d\n", i, fatorial(i));
    }
    for (int i=1; i <= 40; i++) {
        printf("Fibonacci em %d = %d\n", i, fibonacci(i));
    }
    printf("\nSoma 1 a 20 = %d\n", soma_1_a_n(4));
    return 0;
}
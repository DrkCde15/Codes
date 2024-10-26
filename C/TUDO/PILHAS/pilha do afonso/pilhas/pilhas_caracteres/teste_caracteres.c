//Parte 1: construir nova pilha para caracteres
//Parte 2: ler uma string e vai dizer se é palíndromo usando pilha
#include "pilha.h"

int main () {
    char c, palavra[101];
    int i=0, tamanho, e_palindromo = 1;
    t_pilha p;
    printf("Insira uma palavra: ");
    while (i < 101 && ((c=getchar()) != '\n')) {
        palavra[i++] = c;
    }
    palavra[i] = '\0';
    tamanho = i;
    constroi_pilha(&p, tamanho);
    for (i=0; i<tamanho; i++) {
        empilha (&p, palavra[i]);
    }
    for (i=0; i<tamanho && e_palindromo; i++) {
        if (desempilha(&p) != palavra[i]) {
            e_palindromo = 0;
        }
    }
    if (e_palindromo) {
        printf ("\n%s eh palindromo.\n", palavra);
    }
    else {
        printf ("\n%s NAO eh palindromo.\n", palavra);
    }
    return 0;
}
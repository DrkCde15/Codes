#include "pilha_char.h"

int main () {

    char c, s[101];
    int i=0, tamanho, e_palindromo = 1;
    t_pilha p;
    printf ("digite sua frase: ");
    //scanf("%100^[\n]s", s);
    while (i < 101 && (c=getchar()) != '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    tamanho = i;
    constroi_pilha(&p, tamanho);
    for (i=0; i<tamanho; i++) {
        empilha (&p, s[i]);
    }
    for (i=0; i<tamanho && e_palindromo; i++) {
        if (desempilha(&p) != s[i]) {
            e_palindromo = 0;
        }
    }
    if (e_palindromo) {
        printf ("\n%s e palindromo\n", s);
    } else {
        printf ("\n%s NAO e palindromo\n", s);
    }

    return 0;
}
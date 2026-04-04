#include "pilha.h"
int main () {
    char expressao[100];
    int i;
    printf ("digite sua expressao:\n");
    scanf ("%s", expressao);
    pilha p = constroi_pilha(100);
    // for (i=0; i<5; i++) {
    //     expressao[i] = i + 65;
    // }
    // printf ("\n%s\n", expressao);
    char caracter;
    int falhou = 0;
    for (i=0; i < strlen(expressao) && !falhou; i++) {
        if (expressao[i] == '(') push ('(', &p);
        else if (expressao[i] == ')')
            if (!pop(&p, &caracter)) falhou = 1;
    }
    if (falhou || !esta_vazia(&p)) printf ("\nexpressao incorreta!\n");
    else printf ("\nexpressao correta!");
    return 0;
}
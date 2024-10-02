//Escreva um programa que utilize uma pilha para verificar se expressoes aritmeticas estao
//com a parentizacao correta. O programa deve verificar expressoes para ver se cada “abre
//parenteses” tem um “fecha parenteses” correspondente. Ex.:
//Correto: ( ( ) )– ( ( )( ) )– ( ) ( )
//Incorreto: )(– ( ( ) (– ) ) ( (

#include "pilha_char.h"
#include <string.h>

char parenteses (char *s) {
    int t = strlen(s);
    t_pilha p;
    constroi_pilha(&p, t);

    for (int i = 0; i < t; i++) {
        if (s[i] == '(') {
            empilha(&p, '(');
        } else if (s[i] == ')') {
            if (esta_vazia(&p)) {
                free(p.dados); 
                return 0;
            } else {
                desempilha(&p);
            }
        }
    }

    int res = esta_vazia(&p);
    free(p.dados);
    return res;
}

int main () {

    char s[10];

    printf("insira os elementos: ");
    scanf("%9s", s);

    if (parenteses(s)) {
        printf("\ncorreto");
    } else {
        printf("\nincorreto");
    }

    return 0;
}
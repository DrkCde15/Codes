//13. Desenvolva uma funcao para testar se duas pilhas 
//P1 e P2 sao iguais.

#include "pilha.h"

int pilhas_iguais (t_pilha *p1, t_pilha *p2) {

    while (!esta_vazia(p1) && !esta_vazia(p2)) {
        int aux1 = desempilha(p1);
        int aux2 = desempilha(p2);

        if (aux1 != aux2) {
            return 0;
        }

    }

    return 1;

}
int main () {

    t_pilha p1, p2;

    inicializa_pilha(&p1);
    inicializa_pilha(&p2);

    empilha (5, &p1);
    empilha (2, &p1);
    empilha (5, &p1);

    empilha (5, &p2);
    empilha (5, &p2);
    empilha (3, &p2);
    
    if (pilhas_iguais(&p1, &p2)) {
        printf("sao iguais");
    } else {
        printf("nao sao iguais");
    }

    return 0;
}
//5. Considere uma pilha que armazene caracteres. Faca uma funcao para determinar se
//uma string e da forma XY, onde X e uma cadeia formada por caracteres arbitrarios e Y
//e o reverso de X. Por exemplo, se x = ABCD, entao y = DCBA. Considere que x e y sao
//duas strings distintas.

#include "pilha.h"
#include <string.h>

int stringXY(const char *string) {
    int n = strlen(string);
    
    if (n % 2 != 0) { //se a pilha for impar, não tem como ser XY, pois só é possível caso tenha uma metade inteira
        return 0;
    }

    t_pilha pilha;
    constroi_pilha(&pilha, n / 2);

    int meio = n / 2; 

    for (int i = 0; i < meio; i++) { 
        empilha(&pilha, string[i]);
    }

    for (int i = meio; i < n; i++) {
        if (esta_vazia(&pilha) || string[i] != desempilha(&pilha)) { //se a pilha estiver vazia ou o valor desempilhado no topo da pilha for
            free(pilha.dados);                                       //diferente do valor da string na posição atual, nao é XY   
            return 0; 
        }
    }

    int resultado = esta_vazia(&pilha);
    free(pilha.dados); 
    return resultado;
}

int main() {
    char string[100];

    printf("digite uma string: ");
    scanf("%99s", string);

    if (stringXY(string)) {
        printf("\na string eh da forma XY, onde Y eh o reverso de X\n");
    } else {
        printf("\na string nao eh da forma XY\n");
    }

    return 0;
}

//5. Considere uma pilha que armazene caracteres. Faca uma funcao para determinar se
//uma string e da forma XY, onde X e uma cadeia formada por caracteres arbitrarios e Y
//e o reverso de X. Por exemplo, se x = ABCD, entao y = DCBA. Considere que x e y sao
//duas strings distintas.

#include "pilha.h"

char string_arbitraria (char *string, char *string2) {

    int i = 0;
    
    while (string[i] != '\0' && string2[i] != '\0') {
        if (string[i] != string2[i]) {
            return 0; 
        }
        i++;
    }
   
    if (string[i] == '\0' && string2[i] == '\0') {
        return 1; 
    } else {
        return 0; 
    }
}

int main () {

    char string[10], string2[10];

    printf("digite a primeira string: ");
    scanf("%9s", string);

    printf("digite a segunda string: ");
    scanf("%9s", string2);

    if (string_arbitraria(string, string2)) {
        printf("\nsao iguais");
    } else {
        printf("\nnao sao iguais");
    }
}
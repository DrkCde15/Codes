#include <stdio.h>

int main(){

    // Variaveis
    int valInt;
    float valFloat;
    char valCharac;
    char palavra[20], frase[20];

    printf("Digite um numero Inteiro: ");
    scanf("%d", &valInt);
    printf("O valor inserido foi: %d", valInt);

    printf("\n\nDigite um numero Float: ");
    scanf("%f", &valFloat);
    printf("O valor inserido foi: %.2f", valFloat);

    printf("\n\nDigite uma Letra: ");
    scanf(" %c", &valCharac);
    printf("O valor inserido foi: %c", valCharac);

    printf("\n\nDigite uma Palavra: ");
    scanf(" %s", palavra);
    printf("O valor inserido foi: %s", palavra);

    printf("\n\nDigite uma Frase: ");
    scanf(" %[^\n]", frase);
    printf("O valor inserido foi: %s", frase);



    return 0;
}
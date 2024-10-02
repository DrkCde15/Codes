#include <stdio.h>


int main(){

    int numero = 0, i=1, digito = 0;


    printf("\n\n");


    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(numero <= 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }


    while(numero > 0){
        digito = numero % 10;
        printf("Digito %d: %d\n", i, digito);

        numero = numero / 10;

        i++;
    }


    return 0;
}


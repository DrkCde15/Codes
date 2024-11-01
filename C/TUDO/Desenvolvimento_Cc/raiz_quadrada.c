#include <math.h>
#include <stdio.h>

int main(){
    // Variaveis
    float numero = 25;

    // Função usada
    printf("Funcao usada -> sqrt()\n");

    // Pedir numero ao usuario
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero >= 0){
    // Imprimir resultado
    printf("\n\nRaiz Quadrada de %.2f equivale a %.2f \n", numero, sqrt(numero));
    }
    else{
        printf("\n\nNao existe Raiz Quadrada de numeros negativos\n");
    }
    printf("Raiz Cubica de %.2f equivale a %.2f", numero, cbrt(numero));

    return 0;
}
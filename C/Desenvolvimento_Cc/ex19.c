#include <stdio.h>

int main() {
    int numero;

  
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if ((numero % 3 == 0 || numero % 5 == 0) && !(numero % 3 == 0 && numero % 5 == 0)) {
        printf("%d é divisível por 3 ou 5, mas não pelos dois simultaneamente.\n", numero);
    } else {
        printf("%d não atende aos critérios.\n", numero);
    }

    return 0;
}
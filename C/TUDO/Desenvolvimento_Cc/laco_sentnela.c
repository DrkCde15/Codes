//ler valores e somar ate o usuario digitar 0
#include <stdio.h>
int main(){
    int n;
    int soma = 0;

    printf("Digite sua soma de valores, 0 encerra: ");
    scanf("%i", &n);

    while(n){
        soma+= n; // soma = soma + n;
        printf("Proximo numero: ");
        scanf("%i", &n);

    }
    printf("Soma = %i", soma);
    return 0;
}
#include <stdio.h>
int main (){
    int i, n;
    int resultado = 0;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for(i=0; i<=10;i++){
        resultado = n*i;
        printf("%2i x %2i = %3i\n", n, i, resultado);
    }
    return 0;
}
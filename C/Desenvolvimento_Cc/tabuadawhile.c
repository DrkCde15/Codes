#include <stdio.h>

int main(){
int i=0, resultado, n;

printf("Digite um numero: ");
scanf("%i", &n);

while(i<=10){
    resultado = i*n;
    printf("%2i x %2i = %3i\n", i, n, resultado);
    i++;
}

    return 0;
}
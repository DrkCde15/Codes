#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1=0;
    int n2=0;
    int maior=0;
    int menor=0;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    printf("Digite mais um numero: ");
    scanf("%i", &n2);

    if (n1>n2){
        maior = n1;
        menor = n2;
        printf("%.3i e maior que %.3i",maior, menor);
    } 
    else if (n1<n2){
        maior = n2;
        menor = n1;
        printf("%.3i e maior que %.3i\n", maior, menor);
    }
    else{
        printf("Os numeros sao iguais");
    }
    system("pause");

    return 0;
}
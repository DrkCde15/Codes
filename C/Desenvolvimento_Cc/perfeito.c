//dizemos que um numero e perfeito quando é igual a soma de seus de seus divisores de 1 até a metade. ler um numero inteiro e dizer se ele é perfeito.ex: 6 = 1 + 2 + 3.

// dizemos que um numero é triangular quando é a soma de 3 inteiros sucessivos: 6 = 1 + 2 + 3 , 9 = 2 + 3 + 4.

// laços aninhados:
// mostrar todos os primos entre 1 e 10000
// mostrar todos os perfeitos entre 1 e 10000
// mostrar todos os triangulares entre 1 e 10000

#include <stdio.h>
int main(){
    int soma=0;
    int d = 0;
    int a= 0;
    int metade;
    printf("Digite um numero: ");
    scanf("%i", &a);
    metade = a/2;
    for(d=1; d<=metade; d++){
        if(a%d==0){
            soma = d + soma;

        }
    }
    if(soma == a){
        printf("%i eh perfeito", a);
    }
    else{ 
        printf("%i nao eh perfeito", a);
    }



    return 0;
}
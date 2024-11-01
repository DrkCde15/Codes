#include <stdio.h>
int main(){
    int n=0, n_metade = 0;
    int d = 0;

    printf("\n\n");


    printf("Digite um numero: ");
    scanf("%i", &n);

    printf("\nDivisores de %d\n1 ", n);

    n_metade = n / 2;

    for(d=2; d<=n_metade; d++){
        if(n%d==0){
            printf("%i ", d);
        }
    }

    printf("%i \n\n", n);

    return 0;
}
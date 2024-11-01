#include <stdio.h>
int main(){
    int n=0, n_metade=0, d=0, count=0;

    printf("\n\n");

    printf("Digite um numero: ");
    scanf("%i", &n);

    n_metade = n / 2;

    for(d=1; d<=n_metade && count!=3; d++){
        if(n%d==0){
            count++;
        }
    }

    if(!(count > 2)){
        printf("O numero %d eh PRIMO", n);
    }
    else{
        printf("O numero %d nue PRIMO", n);
    }


    printf("\n\n");
    return 0;
}
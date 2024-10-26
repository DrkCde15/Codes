#include <stdio.h>
int main(){
    float p1 = 0;
    float p2 = 0;
    float media = 0;

    printf("Digite a nota da P1: ");
    scanf("%f", &p1);

    printf("Digite a nota da p2: ");
    scanf("%f", &p2);

    if(p1>10 || p2>10){
        printf("Valor invalido, digite um valor entre 0 e 10. ");
    }
    else { 
        media = (p1 + p2)/2;
        printf("Media = %.2f", media);
    }

    return 0;
}
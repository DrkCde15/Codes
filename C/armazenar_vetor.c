#include <stdio.h>

int main() {
    int v[10];
    int i=0, x;

    printf("Insira numeros inteiros ate 50: ");
    while(i<10) {
        scanf("%d", &x);
        if(x<=50){
            x=v[i];
            i++;
        }
        else {
            printf("Numero invalido. Insira outro: ");
        }
    }
    return 0;
}
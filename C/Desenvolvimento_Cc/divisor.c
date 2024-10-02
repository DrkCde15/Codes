#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;

    printf("Digite um valor:");
    scanf("%i", &a);
    printf("\nDigite outro valor: ");
    scanf("%i", &b);

    if(a % b == 0){
        printf("\n%i eh divisivel por %i", a, b);
    }
    else{
        printf("\nNao eh divisivel\n");
    }
    return 0;
}
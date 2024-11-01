#include <stdio.h>
#include <math.h>

float acharHipotenusa(int, int);

int main(){
    printf("\n\n\n");
    printf("Hipotenusa eh %.2f", acharHipotenusa(68,56));
    printf("\n\n\n");

    return 0;
}


float acharHipotenusa(int a, int b){
    float hipotenusa = sqrt((a*a) + (b*b));

    return hipotenusa;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int n = 1000000;
    float media_total = 0.0;
    for(int j=1; j<=100; j++){
        float resultado = 0.0;
        for(int i=1; i<=n; i++)
            resultado += rand() % 100 + 1;
        printf("media parcial = %.4f\n", resultado/n);
        media_total += resultado / n;
    }
    printf("media das medias = %.4f",media_total/100);
    return 0;
}
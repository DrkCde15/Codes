#include<stdio.h>

int main(){
    int i;
    double f;

    for(i = 1, f = 1; i<=30; i++){
        printf("fatorial de %2d = %0.0f\n", i, f);
        f += f*i;
    }
    return 0;
}
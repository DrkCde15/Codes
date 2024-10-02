#include <stdio.h>

int acharMaior(int, int);

int main(){
    printf("\n\n\n");
    printf("Maior: %d", acharMaior(10,5));
    printf("\n\n\n");

    return 0;
}

int acharMaior(int a, int b){
    return (a > b) ? a : b;
}
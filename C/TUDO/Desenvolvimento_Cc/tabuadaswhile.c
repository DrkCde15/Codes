#include <stdio.h>

int main(){

    int i = 0, n = 0, r = 0, m = 0;

    printf("Digite um numero: ");
    scanf("%i", &m);
        while(i<=m){
            if(i % 2 == 0){
                printf("\nTabuada do %i\n", i);
                while(n<=10){
                    r = i*n;
                    printf("%2i x %2i = %3i\n", i, n, r);
                    n++;
                }
                n = 0;
                
                
            }
            i++;
        }
    
    return 0;
}
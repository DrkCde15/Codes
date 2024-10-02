#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int cont = 0;
    int *v = (int *) malloc (200000000 * sizeof(int));
    while(v!= NULL){
            printf("%d\n", ++cont);
            free(v);
            v = (int *) malloc (200000000 * sizeof(int));
    }
} 
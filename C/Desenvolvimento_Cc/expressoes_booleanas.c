#include <stdio.h>
int main(){
    int a = 2;

    if(a){
        printf("a eh verdadeiro");
    }
    else{
        printf("a eh falso");
    }    

    printf("%d\n ", a>0);
    printf("%d\n", !a);


    while(a){
        printf("%d", a--);
    }

    return 0;
}
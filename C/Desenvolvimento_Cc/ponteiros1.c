#include <stdio.h>

int main(){
    int i = 35, *pi;
    float f = 0.75, *pf;

    pi = &i;

    printf("endereco do i: %p\n", &i);
    printf("Conteudo do ponteiro pi: %p\n", pi);
    printf("Conteudo apontado por pi: %d\n", *pi);
    printf("endereco do pi:%p\n", &pi);

    pf = &f;

    printf("\n\nendereco do f: %p\n", &f);
    printf("Conteudo do ponteiro pf: %p\n", pf);
    printf("Conteudo apontado por pf: %0.2f\n", *pf);
    printf("endereco do pf:%p\n", &pf);
    return 0;
}
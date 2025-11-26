#include "no.h"
int main () {
    struct no n1;
    t_no n2;

    n1.info = 10;
    n1.proximo = NULL;

    printf ("n1.info: %d, n1.proximo: %x\n", n1.info, n1.proximo);

    struct no * p1;
    t_no * p2;
    
    p1 = constroi_no (20);
    printf ("p1: %p\n", p1);
    printf ("p1->info: %d, p1->proximo: %x\n", p1->info, p1->proximo); 
    p1->proximo = &n1;
    p1->proximo->info = 35;
    printf ("n1.info: %d\n", n1.info);
    return 0;
}
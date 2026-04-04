#include <stdio.h>
#include <stdlib.h>

int main () {
    int * v;

    while (1) {
        v = (int *) malloc (1000000000);
        printf ("%p\n", v);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int m, n;
    srand(time(0));
    m = rand();
    n = rand();
    printf ("m = %d\nn = %d\n", m, n);
    m = rand() % 100;
    n = rand() % 1000;
    printf ("m = %d\nn = %d\n", m, n);
    return 0;
}
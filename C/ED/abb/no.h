#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no *esquerda;
    struct no *direita;
} t_no;

t_no * constroi_no (int);

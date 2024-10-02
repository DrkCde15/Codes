#include <stdio.h>
#include <stdlib.h>

typedef struct no { //tirar o typedef obriga a escrever struct toda vez q for mencionar
    int info;
    struct no * esq;
    struct no * dir; 
} t_no;

t_no * constroi_no (int);

void mostra_no (t_no *);
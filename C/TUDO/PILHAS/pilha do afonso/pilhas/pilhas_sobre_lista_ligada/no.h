#include <stdio.h>
#include <stdlib.h>

typedef struct no { //como teremos um ponteiro no próprio struct, temos que dar nome ao typedef da struct, mas em outra ocasião o typedef fica apenas "typedef struct{}"
    int info;
    struct no * proximo;//definição recursiva
} t_no;

t_no * constroi_no (int);


#include "no.h"

t_no * constroi_no (int i) {
    t_no * no = (t_no *) malloc (sizeof(t_no)); 
    if (no != NULL) {
        no->info = i;
        no->esq = no->dir = NULL;
    }
    return no; //lembrando que é um ponteiro de nó
}

void mostra_no (t_no *no) {
    printf("| %d | ", no->info);
}
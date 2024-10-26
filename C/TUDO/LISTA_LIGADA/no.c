#include "no.h"

t_no * constroi_no (int i) {
    t_no * novo = (t_no *) malloc (sizeof(t_no));
    if (novo != NULL) {
        novo->info = i;
        novo->proximo = NULL;
    }
    return novo;
}
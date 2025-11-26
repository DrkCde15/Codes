#include "no.h"

t_no * constroi_no (t_prato prato) {
    t_no * novo = (t_no *) malloc (sizeof(t_no));
    if (novo) {
        novo->proximo = NULL;
        novo->prato = prato;
    }
    return novo;
}
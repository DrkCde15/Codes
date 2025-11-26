#include "no.h"

t_no * constroi_no (int n) {
    t_no * ponteiro_novo_no = (t_no *) malloc (sizeof (t_no));
    if (ponteiro_novo_no != NULL) {
        ponteiro_novo_no->info = n;
        ponteiro_novo_no->proximo = NULL;
    }
    return ponteiro_novo_no;
}

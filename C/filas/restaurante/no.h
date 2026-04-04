#include "prato.h"

typedef struct no {
    t_prato prato;
    struct no * proximo;
} t_no;

t_no * constroi_no (t_prato);
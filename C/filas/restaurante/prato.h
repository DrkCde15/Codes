#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char nome[100];
    int tempo_preparo;
    float preco;
} t_prato;

char * string_prato (t_prato);

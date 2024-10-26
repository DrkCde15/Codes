#include <stdio.h>
#include <string.h>

void mostra_string ( char *s) { //nao é possível modificar const
    printf ("\n%s\n", s);
    // //concatenar = juntar 
}

int main () {

    char s[40];
    printf ("insira uma string: \n");
    scanf ("%s", s);

    mostra_string(s);
    return 0;
}
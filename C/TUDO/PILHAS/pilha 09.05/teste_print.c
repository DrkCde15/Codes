#include <stdio.h>
#include <string.h>

void mostra_string (const char *s) { //nao é possível modificar const
    printf ("\n%s\n", s);
    strcat (s, "abc123"); //concatenar = juntar 
}

int main () {

    char s[40];
    scanf ("%s", s);

    mostra_string(s);
    return 0;
}
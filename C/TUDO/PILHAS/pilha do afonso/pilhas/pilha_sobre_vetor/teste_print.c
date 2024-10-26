#include <stdio.h>
#include <string.h>

void mostra_string (char * s) {
    printf("\n%s\n", s);
    strcat (s, "abc123");
}

int main () {
    char s[40];
    scanf ("%s", s);

    mostra_string (s);
}
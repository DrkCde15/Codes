#include <stdio.h>
#include <string.h>

int main () {
    char s[100] = "kkk";
    strcat (s, "oi");
    printf ("%s", s);
    return 0;
}

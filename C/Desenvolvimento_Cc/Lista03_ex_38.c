#include <stdio.h>

int main() {
    int a, b, c;

    for (a = 1; a <= 1000; a++) {
        for (b = a; b <= 1000 - a; b++) {
            c = 1000 - a - b;

            if (a * a + b * b == c * c) {
                printf("Terno pitagórico: a=%d, b=%d, c=%d\n", a, b, c);
                return 0;
            }
        }
    }

    printf("Nenhum terno pitagórico encontrado para a + b + c = 1000.\n");

    return 0;
}
// Efetuar tabuadas do 0 ao 10
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Variaveis
    int i, n;
    char c;

    // Tabuada em si (numero da esquerda)
    for(i=0; i<=10; i++){
        printf("Tabuada do %i\n", i);

        for(n=0; n<=10; n++){
            printf("%2i x %2i = %3i\n", i, n, n*i);
        }

        printf("Digite ENTER para continuar");
        c = getchar();

        system("cls");
    }



    return 0;
}
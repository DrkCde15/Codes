// Bibliotecas
#include <stdio.h>
#include <ctype.h> 

int main(){
    // Variaveis
    float altura = 0;
    char genero;
    float peso_ideal = 0;

    

    do{
        // Armazenar o Gênero
        printf("Informe seu genero (m/f): ");
        scanf(" %c", &genero);
            // Passar a letra digitada para Maiuscula (uppercase)
        genero = toupper(genero);

    }while(genero != 'M' && genero != 'F');

    // Armazenar o valor de Altura
    printf("\nInforme sua altura: ");
    scanf("%f", &altura);

    // Condicional para calcular o Peso
    if(genero == 'M' || genero = 'm'){
        peso_ideal = (altura * 72.7) - 58;
        printf("Voce possui uma altura de %.2fm e o seu peso idel equivale a %.2fkg", altura, peso_ideal);
    }
    else if(genero == 'F' || genero='f'){
        peso_ideal = (altura * 62.1) - 44.7;
        printf("Voce possui uma altura de %.2fm e o seu peso ideal equivale a %.2fkg", altura, peso_ideal);
    }

    return 0;
}
#include <stdio.h>

int main(){

    int dia_semana;

    printf("\n\n1 - Segunda\n2 - Terca\n3 - Quarta\n4 - Quinta\n5 - Sexta\n6 - Sabado\n7 - Domingo");
    printf("\n\nDigite um dia da Semana: ");
    scanf("%d", &dia_semana);


    switch(dia_semana){
        case 1:
            printf("Segunda");
            break;

        case 2:
            printf("Terca");
            break;

        case 3:
            printf("Quarta");
            break;

        case 4:
            printf("Quinta");
            break;

        case 5:
            printf("Sexta");
            break;

        case 6:
            printf("Sabado");
            break;

        case 7:
            printf("Domingo");
            break;

        default:
            printf("Esse dia nao existe!");
            break;
    }

    return 0;
}
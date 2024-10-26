#include <stdio.h>

int ordernar_tres_val(int *, int *, int *);

int main(){

    printf("\n\n\n");



    int a, b, c;

    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    printf("Insira o valor de C: ");
    scanf("%d", &c);


    if(ordernar_tres_val(&a, &b, &c)){
        printf("Valores Iguais");
    }
    else{
        printf("\nValores ordenados: %d %d %d", a, b, c);
    }




    printf("\n\n\n");

    return 0;
}


int ordernar_tres_val(int *a, int *b, int *c){

    int primeiro = *a, segundo = *b, terceiro = *c;
    int aux;

    if(*a == *b == *c){
        return 1;
    }



    if(primeiro > terceiro){
        aux = primeiro;
        primeiro = terceiro;
        terceiro = aux;
    }

    if(primeiro > segundo){
        aux = primeiro;
        primeiro = segundo;
        segundo = aux;
    }

    if(segundo > terceiro){
        aux = segundo;
        segundo = terceiro;
        terceiro = aux;
    }


    *a = primeiro;
    *b = segundo;
    *c = terceiro;


    return 0;
}
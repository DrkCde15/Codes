#include <stdio.h>


int conveterEmSegundos(int, int, int);

int main(){

    printf("\n\n\n\n");

    int horas, minutos, segundos;

    printf("Informe as horas: ");
    scanf("%d", &horas);

    printf("Informe os minutos: ");
    scanf("%d", &minutos);

    printf("Informe os segundos: ");
    scanf("%d", &segundos);


    printf("\n\nA quantidade de segundos eh %d", conveterEmSegundos(horas, minutos, segundos));



    printf("\n\n\n\n");

    return 0;
}


int conveterEmSegundos(int horas, int minutos, int segundos){
    segundos = (horas * 3600) + (minutos * 60) + segundos;

    return segundos;
}
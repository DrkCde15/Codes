#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int num, naipe;
} t_carta;

typedef struct {
    t_carta carta;
    int posse;
} t_carta_jogo;

t_carta gera_carta () {
    t_carta carta;
    carta.num = rand() % 13 + 1;
    //1 = ouros, 2 = espadas, 3 = copas, 4 = paus
    carta.naipe = rand() % 4 + 1;
    return carta;
}

t_carta * gera_ponteiro_carta () {
    t_carta * p_carta = (t_carta *) malloc (sizeof(t_carta));
    p_carta->num = rand() %13 + 1;
    return p_carta; 
}

void mostra_carta (t_carta carta) {
    switch (carta.num) {
        case 1:
            printf("as de ");
            break;
        case 2:
            printf("2 de ");
            break;
        case 3:
            printf("3 de ");
            break;
        case 4:
            printf("4 de ");
            break;
        case 5:
            printf("5 de ");
            break;
        case 6:
            printf("6 de ");
            break;
        case 7:
            printf("7 de ");
            break;
        case 8:
            printf("8 de ");
            break;
        case 9:
            printf("9 de ");
            break;
        case 10:
            printf("10 de ");
            break;
        case 11:
            printf("valete de ");
            break;
        case 12:
            printf("dama de ");
            break;
        case 13:
            printf("rei de ");
    }

    switch (carta.naipe) {
    //1 = ouros, 2 = espadas, 3 = copas, 4 = paus
        case 1:
            printf("ouros\n");
            break;
        case 2:
            printf("espadas\n");
            break;
        case 3:
            printf("copas\n");
            break;
        case 4:
            printf("paus\n");
            break;
    }
}
void distribui_cartas_jogador (t_carta jog[]) { 
    //sem preocupação com repetições e cada jogador individualmente
    for (int i=0; i<5; i++) {
        jog[i] = gera_carta();
    }
}

void mostra_mao (t_carta jog[]) {
    for (int i=0; i<5; i++) {
        mostra_carta(jog[i]);
    }
}

void compra_baralho (int baralho[5][14]) {
    for (int i=1; i<5; i++) {
        for (int j=1; j<14; j++){
            baralho[i][j] = 0;
        }
    }
}
void sorteio (int baralho[][14], t_carta jog[], int i, int j) {
    int linha, coluna;
    linha = rand() % 4 + 1;
    coluna = rand() % 13 + 1;
        while (baralho[linha][coluna] != 0) {
            linha = rand() % 4 + 1;
            coluna = rand() % 13 + 1;
        }
        baralho[linha][coluna] = j;
        jog[i].naipe = linha;
        jog[i].num = coluna;
}
void distribui_cartas(int baralho[5][14], t_carta jog1[], t_carta jog2[]) {
    for ( int i=0; i<5; i++) {  
        sorteio (baralho, jog1, i, 1);
        sorteio (baralho, jog2, i, 2);
    }
}
void mostra_baralho (int baralho[][14]) {
    for (int i=1; i<5; i++) {
        for (int j=1; j<14; j++) {
            printf("%d ", baralho[i][j]);
        }
        printf("\n");
    }
}
int main () {
    t_carta carta1, carta2;
    srand(time(0));
    carta1 = gera_carta();
    mostra_carta (carta1);
    carta2 = gera_carta();
    mostra_carta (carta2);
    printf("\n");
    //outro método
    t_carta * p1_carta;

    p1_carta = (t_carta *) malloc (sizeof(t_carta));
    *p1_carta = gera_carta();
    mostra_carta (*p1_carta);

    //outro método
    t_carta * p2_carta = gera_ponteiro_carta();
    mostra_carta(*p2_carta);
    printf("\n");

    //distribuição e mostra
    t_carta jog1[5], jog2[5];

    // distribui_cartas_jogador (jog1);
    // printf("\njogador 1: \n");
    // mostra_mao (jog1);

    // distribui_cartas_jogador(jog2);
    // printf("\njogador 2\n");
    // mostra_mao(jog2);

    //compra baralho
    int baralho[5][14];
    compra_baralho (baralho);
    mostra_baralho(baralho);
    distribui_cartas(baralho, jog1, jog2);
    printf("\n");
    mostra_mao(jog1);
    printf("\n");
    mostra_mao(jog2);
    printf("\n");
    mostra_baralho(baralho);
    return 0;
}
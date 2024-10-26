//Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu
//naipe e seu valor) ou tipo “super trunfo” (cada carta possui um conjunto de atributos).
//Implemente a parte de distribuic¸ao (sorteio) de cartas para 2 jogadores, considerando ˜
//que cada jogador ira receber 5 cartas. Exiba na tela as cartas que cada um dos jogadores ´
//recebeu.

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    char naipe[10];
    char valor[3];
} Carta;

typedef struct {
    Carta mao[5]; // Mão do jogador com 5 cartas
} Jogador;

void baralho_valores(char naipes[][10], char valores[][3], Carta baralho[]) {
    char naipes_temp[][10] = {"Espadas", "Copas", "Paus", "Ouros"};
    char valores_temp[][3] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    // Copiando os valores das matrizes temporárias para as matrizes fornecidas
    for (int i = 0; i < 13; i++) {
        strcpy(valores[i], valores_temp[i]);
    }
    for (int i = 0; i < 4; i++) {
        strcpy(naipes[i], naipes_temp[i]);
    }

    // Preenchendo o baralho com todas as cartas
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            strcpy(baralho[k].naipe, naipes[i]);
            strcpy(baralho[k].valor, valores[j]);
            k++;
        }
    }
}

void embaralhar_baralho(Carta baralho[], int tamanho) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        int j = rand() % tamanho;
        Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }
}

void distribuir_cartas(Jogador *jogador1, Jogador *jogador2, Carta baralho[], int tamanho) {
    for (int i = 0; i < 5; i++) {
        jogador1->mao[i] = baralho[i];
        jogador2->mao[i] = baralho[i + 5];
    }
}

void exibir_mao(Jogador jogador) {
    printf("Cartas do jogador:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s de %s\n", jogador.mao[i].valor, jogador.mao[i].naipe);
    }
}

int main() {
    char naipes[4][10];
    char valores[13][3];
    Carta baralho[52];

    baralho_valores(naipes, valores, baralho);
    embaralhar_baralho(baralho, 52);

    Jogador jogador1, jogador2;
    distribuir_cartas(&jogador1, &jogador2, baralho, 52);

    printf("Jogador 1:\n");
    exibir_mao(jogador1);

    printf("\nJogador 2:\n");
    exibir_mao(jogador2);

    return 0;
}

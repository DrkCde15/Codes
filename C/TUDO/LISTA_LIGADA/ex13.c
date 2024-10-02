//Considere uma lista contendo n´umeros inteiros positivos. Faca uma funcao que retorne
 //a media da lista.

 #include "lista.h"

int media_lista (t_lista *l) {
    int media = 0;
    int soma = 0;
    int cont = 0;
    t_no *atual = l->primeiro;
    while (atual != NULL) {
        soma += atual->info;
        atual = atual->proximo;
        cont++;
    }
    media = soma/cont;
    return media;
}

int main () {
    t_lista minha_lista;

    inicializa_lista(&minha_lista);

    insere_fim (8, &minha_lista); //esse valor vai pro endereço da minha lista
    insere_fim (4, &minha_lista);
    insere_fim (2, &minha_lista);

    mostra_lista (minha_lista);

    int media = media_lista(&minha_lista);

    printf("a media da minha lista eh %d", media);

    return 0; 

}

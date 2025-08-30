#include "vetor.h"

void inicializa_vetor (t_vetor *vetor, int capacidade) {
    vetor->v = (int *) malloc (capacidade * sizeof(int));
    vetor->ocupacao = 0;
    vetor->capacidade = capacidade;
}
int redimensiona_vetor (t_vetor *vetor, int novo_capacidade) {
    //aloca um novo espaço de memória com novo_capacidade e guardou o endereço inicial em novo
    int *novo = (int *) malloc (novo_capacidade * sizeof(int));
    if (novo == NULL) return 0;
    //copia todos os valores do vetor original para o novo
    for (int i=0; i<vetor->ocupacao; i++)
        novo[i] = vetor->v[i];
    //ajusta a capacidade para o novo capacidade
    vetor->capacidade = novo_capacidade;
    //liberar o espaço atual que o v aponta
    free(vetor->v);
    //o atributo v (ponteiro de inteiro) recebe o valor de novo (ponteiro de inteiro)
    vetor->v = novo;
    return 1;
}
int insere_valor (int novo, t_vetor *vetor) {
    if (esta_cheio(vetor))
        if (!redimensiona_vetor (vetor, 2*vetor->capacidade)) 
            return 0;
    vetor->v[vetor->ocupacao++] = novo;
    return 1;
}

int remove_valor (int *i, t_vetor *vetor){
    if (esta_vazio(vetor)) 
        return 0;
    *i = vetor->v[--vetor->ocupacao];
    if (vetor->capacidade > 10 && vetor->ocupacao <= vetor->capacidade / 4 )
        redimensiona_vetor(vetor, vetor->capacidade / 2);
    return 1;
}

int esta_cheio (t_vetor *vetor) {
    //faixa branca
    if (vetor->ocupacao == vetor->capacidade)
        return 1;
    else 
        return 0;
    //faixa azul
    if (vetor->ocupacao == vetor->capacidade)
        return 1;
    return 0;
    //faixa roxa
    return vetor->ocupacao == vetor->capacidade ? 1 : 0;
    //ninja
    return vetor->ocupacao == vetor->capacidade;
}
int esta_vazio (t_vetor *vetor) {
    //faixa branca
    if (vetor->ocupacao == 0)
        return 1;
    else 
        return 0;
    //faixa azul
    if (vetor->ocupacao == 0)
        return 1;
    return 0;
    //faixa roxa
    return vetor->ocupacao == 0 ? 1 : 0;
    //ninja
    return vetor->ocupacao == 0;
    //jedi
    return !vetor->ocupacao;
}

void exibe_vetor (t_vetor *vetor) {
    if (esta_vazio(vetor))
        printf ("vetor vazio\n");
    else {
        for (int i=0; i<vetor->ocupacao; i++)
            printf ("%d ", vetor->v[i]);
        printf ("\n");
    }
}

void preenche_vetor (t_vetor *vetor) {
    for (int i=0; i<vetor->capacidade; i++)
        vetor->v[i] = rand() % (vetor->capacidade * 10);
    vetor->ocupacao = vetor->capacidade;
}
void libera_memoria (t_vetor *vetor) {
    free (vetor->v);
}
void selection_sort (t_vetor *vetor) {
    for (int i=0; i < vetor->capacidade-1; i++) {
        int pos = i;
        for (int j=i+1; j < vetor->capacidade; j++)
            if (vetor->v[j] < vetor->v[pos])
                pos = j;
        if (pos != i) {
            int aux = vetor->v[i];
            vetor->v[i] = vetor->v[pos];
            vetor->v[pos] = aux;
        }
    }
}
void bubble_sort (t_vetor *vetor){
    for (int i=0; i<vetor->capacidade-1; i++)
        for (int j=i+1; j<vetor->capacidade; j++)
            if (vetor->v[j] < vetor->v[i]) {
                int aux = vetor->v[i];
                vetor->v[i] = vetor->v[j];
                vetor->v[j] = aux;
            }
}
//implementar uma função que recebe uma struct t_vetor e cria um clone dela
//protótipo: t_vetor clone (t_vetor * vetor);